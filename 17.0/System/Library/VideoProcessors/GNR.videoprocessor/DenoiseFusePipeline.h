@class InverseLTMBuffers, PyramidStorage, AMBNRStage, NSDictionary, AMBNRBuffers, NSMutableArray, FigMetalContext, FusionRemixStage, RegDense, BilateralGrid;
@protocol MTLTexture, MTLBuffer, SidecarWriter;

@interface DenoiseFusePipeline : NSObject {
    NSDictionary *_options;
    BOOL _supportsHDR;
    BOOL _onlySingleImageDenoising;
    FigMetalContext *_metal;
    int _currentFrame;
    AMBNRStage *_ambnrStage[4];
    AMBNRBuffers *_ambnrBuffers[2];
    int _pyrFormat;
    int _fusionAlgo;
    struct __CVBuffer { } *_gain;
    struct __CVBuffer { } *_similarityMap;
    FusionRemixStage *_fusionRemixStage;
    PyramidStorage *_fusedBands[2];
    PyramidStorage *_fusedDenoisedBands[2];
    struct __CVBuffer *_denoisedAllocInternally[4];
    int _denoisedAllocInternallyIndex;
    NSMutableArray *_recycledInputBuffers;
    BilateralGrid *_bilateralGrid;
    RegDense *_regDense;
    char *_morphology;
    id<MTLBuffer> _scratchBuffer;
    id<MTLTexture> _ltmLumaTex;
    id<MTLTexture> _ltmChromaTex;
    BOOL _resetAliasingForHDR;
    InverseLTMBuffers *_inverseLTMBuffers[4];
    unsigned long long _lastWidth;
    unsigned long long _lastHeight;
}

@property (weak, nonatomic) id<SidecarWriter> sidecarWriter;
@property (nonatomic) int forceHDRFusionReferenceFrame;
@property (nonatomic) BOOL allowModifyingInputBuffers;
@property (copy, nonatomic) id /* block */ fusionReferenceSelectionBlock;

- (void)reset;
- (void)dealloc;
- (void)releaseAllBuffers;
- (int)fuseImages:(struct __CVBuffer { } *)a0 config:(struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } *)a1 properties:(struct frameProperties_t { BOOL x0; int x1; long long x2; struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } x3; BOOL x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; BOOL x6; BOOL x7; struct { void /* unknown type, empty encoding */ x0[3]; } x8; BOOL x9; struct ltmCurves { unsigned short x0[1584]; unsigned short x1[257]; unsigned short x2[257]; } x10; BOOL x11; } *)a2 pbEV0Properties:(struct frameProperties_t { BOOL x0; int x1; long long x2; struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } x3; BOOL x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; BOOL x6; BOOL x7; struct { void /* unknown type, empty encoding */ x0[3]; } x8; BOOL x9; struct ltmCurves { unsigned short x0[1584]; unsigned short x1[257]; unsigned short x2[257]; } x10; BOOL x11; } *)a3 tuningParams:(id)a4 validBufferRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (struct __CVBuffer { } *)getDenoisingOutputBuffer:(struct __CVBuffer { } *)a0;
- (int)reAliasPyramid:(id)a0 withPixelBuffer:(struct __CVBuffer { } *)a1;
- (int)setFusionMode:(int)a0;
- (void).cxx_destruct;
- (int)reAliasPyramidsIntoIntermediateBuffersUsingOutput:(struct __CVBuffer { } *)a0;
- (int)resizeBuffersIfNeededWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (int)denoiseSingleImage:(struct __CVBuffer { } *)a0 input:(struct __CVBuffer { } *)a1 exposure:(struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } *)a2 tuningParams:(id)a3 highGainTuningParams:(id)a4 ltmCurves:(struct ltmCurves { unsigned short x0[1584]; unsigned short x1[257]; unsigned short x2[257]; } *)a5;
- (int)denoiseFrame:(struct __CVBuffer { } *)a0 input:(struct __CVBuffer { } *)a1 exposure:(struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } *)a2 tuningParams:(id)a3 highGainTuningParams:(id)a4 ltmCurves:(struct ltmCurves { unsigned short x0[1584]; unsigned short x1[257]; unsigned short x2[257]; } *)a5 recycleInput:(BOOL)a6;
- (struct __CVBuffer { } *)getDenoisedFrame:(int)a0;
- (int)baseLayer:(id)a0;
- (id)initWithContext:(id)a0 supportsHDR:(BOOL)a1 onlySingleImageDenoising:(BOOL)a2;

@end
