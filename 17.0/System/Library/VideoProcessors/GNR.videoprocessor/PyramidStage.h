@class FigMetalContext, PyramidStorage, FigM2MController;
@protocol MTLBuffer;

@interface PyramidStage : NSObject {
    struct PyramidStageConfiguration { BOOL use_m2m; BOOL do_sync_at_end; BOOL compensate_gpu_shift; BOOL supportFP16; } _conf;
    PyramidStorage *_pyr;
    FigM2MController *_m2mController;
    FigMetalContext *_metal;
    id<MTLBuffer> _uniforms_Y[20];
    id<MTLBuffer> _uniforms_UV[20];
    BOOL _forceHW;
    int _band0ColorSpace;
    struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ columns[3]; } colorCorrectionMatrix; struct TransferFunctionParameters { float linearScale; float linearThreshold; float nonLinearScale; float nonLinearBias; float nonLinearPower; } transferFunctionFwd; struct TransferFunctionParameters { float linearScale; float linearThreshold; float nonLinearScale; float nonLinearBias; float nonLinearPower; } transferFunctionInv; struct PedestalParameters { float normalizedPedestal; float ispChromaBias; void /* unknown type, empty encoding */ compressionScale; void /* unknown type, empty encoding */ expansionScale; } pedestalParams; BOOL outputToLinearYCbCr; BOOL clampNegativesToZero; BOOL applyColorCorrection; } _colorSpaceConversionParameters;
}

@property (readonly, nonatomic) BOOL useM2M;

+ (int)prewarmShaders:(id)a0;

- (int)runM2MWithFilters:(struct PyramidFilterParams { int x0; float x1; float x2; } *)a0;
- (void).cxx_destruct;
- (void)setColorSpace:(int)a0 withParams:(const struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x1; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x2; struct PedestalParameters { float x0; float x1; } x3; BOOL x4; BOOL x5; BOOL x6; } *)a1;
- (int)runGPUWithFilters:(struct PyramidFilterParams { int x0; float x1; float x2; } *)a0 doShift:(BOOL)a1;
- (int)runWithFilters:(struct PyramidFilterParams { int x0; float x1; float x2; } *)a0;
- (id)initWithOptions:(id)a0 context:(id)a1;
- (int)setResourcesWithPyramid:(id)a0;
- (BOOL)dumpIntermediateData:(id)a0 counter:(int)a1;

@end
