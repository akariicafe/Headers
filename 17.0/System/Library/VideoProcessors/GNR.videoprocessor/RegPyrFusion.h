@class RegPyrFusionResources, FigMetalContext, PyramidStorage, RegPyrFusionShaders;
@protocol MTLTexture, MTLBuffer;

@interface RegPyrFusion : NSObject {
    FigMetalContext *_metal;
    PyramidStorage *_refPyramid;
    PyramidStorage *_nonRefPyramid;
    id<MTLBuffer> _pyrHomographyTeleIsRef[20];
    id<MTLBuffer> _pyrHomographyWideIsRef[20];
    RegPyrFusionResources *_resources;
    RegPyrFusionShaders *_shaders;
    struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x1; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x2; } *_teleIsRefCalibData;
    struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x1; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x2; } *_wideIsRefCalibData;
    id<MTLBuffer> _pyrScaleParamLevel0[2];
    id<MTLBuffer> _pyrRoiScaleLevel0[2];
    id<MTLBuffer> _pyrScaleParams[20];
}

@property (readonly, nonatomic) id<MTLTexture> shiftMap;
@property (readonly, nonatomic) id<MTLTexture> confidenceMap;

+ (void)calculatePyramidDimensions:(float)a0 pyrWidths:(int *)a1 pyrHeights:(int *)a2 topLevelIndex:(int)a3 maxDim:(int)a4 minDim:(int)a5;
+ (void)prewarmRenderers:(id)a0;
+ (int)prewarmShaders:(id)a0;

- (id)create2DTextureFromBuffer:(id)a0 offset:(unsigned long long)a1 descriptor:(id)a2;
- (int)setResourcesWithRefPyramid:(id)a0 nonRefPyramid:(id)a1 resources:(id)a2;
- (int)initialDownScaleWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 refTex:(id)a2 nonRefTex:(id)a3 refTexOut:(id)a4 nonRefTexOut:(id)a5 refCamType:(int)a6;
- (int)generateDerivativesWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 inputTex:(id)a2 sobelOutput:(id)a3 derivInput:(id)a4 outputTex:(id)a5;
- (id)textureFromIOSurfaceOrBuffer:(id)a0 texDesc:(id)a1 offset:(unsigned long long)a2;
- (int)confidenceMapWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 prevShiftMap:(id)a2 confidenceOut:(id)a3 confidenceErodeIn:(id)a4 confidenceErodeOut:(id)a5 confidenceDilateIn:(id)a6 confidenceDilateOut:(id)a7;
- (int)bilinearScaleWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 refTexIn:(id)a2 refTexOut:(id)a3 nonRefTexIn:(id)a4 nonRefTexOut:(id)a5 pyrLevel:(int)a6;
- (int)selectionWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 refDerivTex:(id)a2 nonRefDerivTex:(id)a3 prevShiftMap:(id)a4 nextShiftMap:(id)a5 homography:(id)a6 pyrLevel:(int)a7;
- (int)basicSearchWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 refDerivTex:(id)a2 nonRefDerivTex:(id)a3 prevShiftMap:(id)a4 nextShiftMap:(id)a5 homography:(id)a6 pyrLevel:(int)a7;
- (int)fusionWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 refTex:(id)a2 refDerivTex:(id)a3 nonRefDerivTex:(id)a4 prevShiftMap:(id)a5 shiftMapWeight:(id)a6 nextShiftMap:(id)a7 homography:(id)a8 pyrLevel:(int)a9;
- (void).cxx_destruct;
- (void)scaleHomographyUsingCalib:(struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x1; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x2; } *)a0 to:(id *)a1;
- (int)smoothShiftMapWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 input:(id)a2 output:(id)a3;
- (id)initWithMetalContext:(id)a0;
- (int)clearTextureWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 outputTex:(id)a2;
- (int)setupPyramidScalersUsingCalib;
- (int)registerImagesWithReferenceCam:(int)a0 calibInfo:(struct { struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x1; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x2; } x0; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x1; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x2; } x1; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x2; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x3; struct { unsigned long long x0; unsigned long long x1; struct { struct { float x0; } x0; struct { float x0; } x1; float x2; float x3[8]; float x4[8]; } x2[2]; struct { void /* unknown type, empty encoding */ x0[3]; } x3; } x4; } *)a1;

@end
