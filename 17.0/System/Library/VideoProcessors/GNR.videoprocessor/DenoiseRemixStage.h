@class PyramidStorage, FigMetalContext;
@protocol MTLBuffer;

@interface DenoiseRemixStage : NSObject {
    PyramidStorage *_pyr;
    PyramidStorage *_lapPyr;
    id<MTLBuffer> _uniforms[20];
    FigMetalContext *_metal;
    id<MTLBuffer> _uniformsAlpha[20];
}

- (id)initWithContext:(id)a0 onlySingleImageDenoising:(BOOL)a1;
- (int)run:(id)a0 gainPixelBuffer:(struct __CVBuffer { } *)a1 ltmBuffers:(id)a2;
- (int)computeLtmGainMap:(id)a0 ltmBuffers:(id)a1 luma:(id)a2 chroma:(id)a3 shader:(id)a4;
- (BOOL)loadParamsFromFile:(id)a0;
- (int)runShader:(const id *)a0 shader:(id)a1 desc:(id)a2 uniforms:(id)a3 uniforms2:(id)a4;
- (int)runLumaAlpha:(id)a0 alpha:(id)a1 output:(id)a2 level:(int)a3 config:(struct AmbnrConfiguration { struct NoiseModel { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; struct { float x0; float x1; float x2; } x14; struct { float x0; float x1; float x2; } x15; } x0; struct NoiseModel { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; struct { float x0; float x1; float x2; } x14; struct { float x0; float x1; float x2; } x15; } x1; struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } x2; float x3; float x4; float x5; float x6; float x7; } *)a4;
- (int)setUniforms:(struct AmbnrConfiguration { struct NoiseModel { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; struct { float x0; float x1; float x2; } x14; struct { float x0; float x1; float x2; } x15; } x0; struct NoiseModel { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; struct { float x0; float x1; float x2; } x14; struct { float x0; float x1; float x2; } x15; } x1; struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } x2; float x3; float x4; float x5; float x6; float x7; } *)a0;
- (void).cxx_destruct;
- (BOOL)dumpParamsToFile:(id)a0;
- (BOOL)dumpIntermediateData:(id)a0 counter:(int)a1;
- (int)setResourcesWithPyramid:(id)a0 laplacianPyramid:(id)a1;

@end
