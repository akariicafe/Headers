@class PTMetalContext;
@protocol MTLComputePipelineState;

@interface PTColorConversion : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _convertRGB[9];
    id<MTLComputePipelineState> _convertRGBToYUV[9];
    id<MTLComputePipelineState> _convertYUVToRGB[9];
}

+ (struct half3x4 { struct half4 { void /* unknown type, blank encoding */ x0[4]; } x0[3]; })colorMatrixAndBiasFor:(id)a0 toRGB:(BOOL)a1;
+ (struct half3x4 { struct half4 { void /* unknown type, blank encoding */ x0[4]; } x0[3]; })colorMatrixAndBiasFor:(id)a0 toRGB:(BOOL)a1 fullRange:(BOOL)a2 colorYCbCrDepth:(long long)a3;
+ (struct bool2 { BOOL x0; BOOL x1; })getChromaFactor2BooleanFromPTTexture:(id)a0;
+ (void /* unknown type, empty encoding */)getChromaOffsetFromPTTexture:(id)a0;
+ (int)getColorTransferFunctionAsEnum:(id)a0 linearToEncoded:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)convertRGB:(id)a0 inRGBA:(id)a1 outRGBA:(id)a2 colorTransferFunction:(int)a3;
- (int)convertRGB:(id)a0 inRGBA:(id)a1 outRGBA:(id)a2 colorTransferFunction:(int)a3 rotateCCW:(BOOL)a4;
- (int)convertRGBLinearFromPTTexture:(id)a0 inPTTexture:(id)a1 outRGBA:(id)a2;
- (int)convertRGBLinearToPTTexture:(id)a0 inRGBA:(id)a1 outPTTexture:(id)a2;
- (int)convertRGBtoYUV:(id)a0 inRGBA:(id)a1 outLuma:(id)a2 outChroma:(id)a3 colorTransferFunction:(int)a4 colorYCbCrMatrix:(id)a5 colorYCbCrFullRange:(BOOL)a6 colorYCbCrDepthOut:(long long)a7;
- (int)convertYUVtoRGB:(id)a0 inLuma:(id)a1 inChroma:(id)a2 outRGBA:(id)a3 colorTransferFunction:(int)a4 colorYCbCrMatrix:(id)a5 colorYCbCrFullRange:(BOOL)a6 colorYCbCrDepthIn:(long long)a7;

@end
