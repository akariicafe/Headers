@class FigMetalContext;
@protocol MTLComputePipelineState, MTLTexture, MTLBuffer;

@interface FigRegToolboxGPU : NSObject {
    FigMetalContext *_metalContext;
    BOOL _resourcesAvailable;
    unsigned int _numPyrLevels;
    unsigned int _imageWidth;
    unsigned int _imageHeight;
    struct { short searchRadius; short searchDiameter; unsigned short searchSpaceSize; short templateRadius; short minCornerResponseThreshold; short unusedPadding; float minNCCThreshold; float scaler; } _nccParmsFixed;
    unsigned int _searchArea;
    unsigned int _gridWidth;
    unsigned int _gridHeight;
    unsigned int _gridNumCells;
    struct { unsigned int w; unsigned int h; } _pyramidLevelsDim[8];
    id<MTLComputePipelineState> _pplnDownscale2to1;
    id<MTLComputePipelineState> _pplnDownscale2to1WithMapping;
    struct { struct { struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadgroupsPerGrid; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerThreadgroup; } level[8]; } _infoDownscale2to1;
    id<MTLComputePipelineState> _pplnSimple3x3BoxFilter;
    struct { struct { struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadgroupsPerGrid; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerThreadgroup; } level[8]; } _infoSimple3x3BoxFilter;
    id<MTLComputePipelineState> _pplnCornerResponse;
    struct { struct { struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadgroupsPerGrid; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerThreadgroup; } level[8]; } _infoCornerResponse;
    id<MTLComputePipelineState> _pplnCornerDetectionFirstPass4x4;
    struct { struct { struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadgroupsPerGrid; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerThreadgroup; } level[8]; } _infoCornerDetectionFirstPass4x4;
    id<MTLComputePipelineState> _pplnCornerDetectionFinalPass;
    struct { struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadgroupsPerGrid; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerThreadgroup; } _infoCornerDetectionFinalPass;
    id<MTLComputePipelineState> _pplnNccMatch[4];
    struct { struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadgroupsPerGrid; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerThreadgroup; } _infoNccMatch[4];
    id<MTLComputePipelineState> _pplnRigidSolver;
    id<MTLComputePipelineState> _pplnAffineSolver;
    id<MTLComputePipelineState> _pplnHomographySolver;
    id<MTLComputePipelineState> _pplnWarpImage;
    struct { struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadgroupsPerGrid; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerThreadgroup; } _infoWarpImage;
    id<MTLComputePipelineState> _pplnSpecialImageConverterA;
    id<MTLTexture> _referenceImage;
    BOOL _referenceImagePixelMappingFlag;
    float _referenceImagePixelHistCoef;
    unsigned char _referenceImagePixelMapping[256];
    id<MTLTexture> _pyramid1Image[8];
    id<MTLTexture> _pyramid2Image[8];
    id<MTLTexture> _pyramid1Initial;
    id<MTLTexture> _pyramid1CornerResponse;
    id<MTLBuffer> _pyramid1Corners;
    id<MTLTexture> _cornerDetectIntermediateTexture;
    id<MTLBuffer> _pyramid2Corners;
    id<MTLBuffer> _nccWorkStorage;
    id<MTLBuffer> _internalTransformResults;
    id<MTLBuffer> _internalSolverElemList;
}

- (int)releaseResources;
- (id)init;
- (int)processReferenceImage:(id)a0 histogram:(struct { int x0; struct { unsigned int x0[256]; } x1; } *)a1 doWaitForIdle:(BOOL)a2;
- (void)dealloc;
- (int)warpTargetImage:(id)a0 outTexChma:(id)a1 inTexLuma:(id)a2 inTexChma:(id)a3 solverSelector:(int)a4 histogram:(struct { int x0; struct { unsigned int x0[256]; } x1; } *)a5 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a6 doWaitForIdle:(BOOL)a7;
- (int)computeTransformInternal:(id)a0 solverKernel:(id)a1 solverOutputResults:(id)a2 histogram:(struct { int x0; struct { unsigned int x0[256]; } x1; } *)a3 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 waitForCompletion:(BOOL)a5;
- (int)allocateResources:(unsigned int)a0 imageWidth:(unsigned int)a1 imageHeight:(unsigned int)a2 gridWidth:(unsigned int)a3 gridHeight:(unsigned int)a4 templateRadius:(unsigned int)a5 searchRadius:(unsigned int)a6 minNCCThreshold:(float)a7;
- (void).cxx_destruct;
- (int)computeTransform:(id)a0 transform:(struct { float x0[9]; unsigned int x1; float x2; } *)a1 outputCorners:(struct { float x0; float x1; float x2; float x3; float x4; float x5; } *)a2 solverSelector:(int)a3 histogram:(struct { int x0; struct { unsigned int x0[256]; } x1; } *)a4 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5;
- (id)initWithCommandQueue:(id)a0;
- (int)specialImageConverterA:(struct __CVBuffer { } *)a0 outTexture1:(struct __CVBuffer { } *)a1 outTexture2:(struct __CVBuffer { } *)a2 outTexture3:(struct __CVBuffer { } *)a3 doWaitForIdle:(BOOL)a4;
- (int)allocateResourcesSimple:(unsigned int)a0 imageHeight:(unsigned int)a1 numberOfCorners:(unsigned int *)a2;

@end
