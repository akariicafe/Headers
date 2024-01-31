@class UniLibrary, UniMorphology, UniKernel, NSArray;
@protocol MTLCommandQueue;

@interface ApplyBlurmap : NSObject {
    id<MTLCommandQueue> _mtlQueue;
    UniLibrary *_library;
    UniKernel *_preprocess;
    UniKernel *_preprocessScaled;
    UniKernel *_highlightRecovery;
    UniKernel *_prefilterX;
    UniKernel *_prefilterY;
    UniKernel *_sparseNoAlpha;
    UniKernel *_sparseNoAlphaRayFg;
    UniKernel *_sparseWithAlpha;
    UniKernel *_gainmapMultiply;
    UniKernel *_gainmapRGBMultiply;
    UniKernel *_antialiasX;
    UniKernel *_antialiasY;
    UniKernel *_antialiasRGBAX;
    UniKernel *_antialiasRGBAY;
    UniKernel *_addNoiseOnly;
    UniKernel *_yuv1;
    UniKernel *_yuv2;
    UniKernel *_localContrast;
    UniKernel *_extractPositiveBlurValues;
    UniKernel *_extractNegativeBlurValues;
    UniKernel *_blendRaytraced;
    UniMorphology *_morphology;
    NSArray *_segmentArray;
    NSArray *_fgSegmentArray;
    struct rendering_config_params { float simulatedAperture; float defaultSimulatedAperture; float preFilterBlurStrength; int preFilterRadius; float maxBlur; float sharpRadius; float softRadius; float lumaNoiseModelCoeff; float lumaNoiseAmplitude; float highlightBoostGain; int minNRings; int maxNRings; int nRings; float basePixelWeight; float antiAliasBlurStrength; int antiAliasRadius; float relativeWeightThreshold; float alphaEpsilon; float alphaGain; float shapeObstructionCoeff; float ringAmplitude; float ringSharpness; float blendingQuarterResAlphaGain; float blendingFullResAlphaGain; int xhlrbIterations; float xhlrbBlurRadiusT0; float xhlrbBlurRadiusT1; float xhlrbMaxIntensityT0; float xhlrbMaxIntensityT1; float xhlrbMinIntensityT0; float xhlrbMinIntensityT1; float xhlrbPreFilterGain; float xhlrbWeightGain; float xhlrbIntensityGain; float ohlbPreFilterGain; float ohlbWeightGain; float ohlbIntensityGain; int xhlrbTileSize; float gainMapHeadroom; float linearBoostGain; int fgMinNRings; int fgMaxNRings; int fgNRings; float fgTraceStepScale; float fgHitThreshold; float fgAlphaSmoothstepStart; float fgAlphaSmoothstepEnd; float fgBlurWeightSmoothstepStart; float fgBlurWeightSmoothstepEnd; float fgAARadius; float bicubicDownsampleParamB; float bicubicDownsampleParamC; } _config_params;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)imageUsingArgs:(id)a0;
- (id)backgroundImageUsingArgs:(id)a0;
- (id)imageUsingArgs:(id)a0 backgroundBlur:(id)a1;
- (id)initWithMetalQueue:(id)a0;
- (void)_setROICallbacks;
- (id)applyBackgroundUsingConfig:(const struct rendering_config_params { float x0; float x1; float x2; int x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; int x11; int x12; float x13; float x14; int x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; int x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; int x37; float x38; float x39; int x40; int x41; int x42; float x43; float x44; float x45; float x46; float x47; float x48; float x49; float x50; float x51; } *)a0 inputBlurMap:(id)a1 inputAlpha:(id)a2 inputGainMap:(id)a3 inputImage:(id)a4 inputLuma:(id)a5 inputChroma:(id)a6 inputHalfRes1:(id)a7 inputHalfRes2:(id)a8 scale:(float)a9 coreImageRender:(BOOL)a10 version:(int)a11 context:(id)a12 captureFolderMiscPath:(id)a13;
- (id)applyForegroundUsingConfig:(const struct rendering_config_params { float x0; float x1; float x2; int x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; int x11; int x12; float x13; float x14; int x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; int x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; int x37; float x38; float x39; int x40; int x41; int x42; float x43; float x44; float x45; float x46; float x47; float x48; float x49; float x50; float x51; } *)a0 image:(id)a1 inputBlurMap:(id)a2 inputAlpha:(id)a3 inputGainMap:(id)a4 inputImage:(id)a5 inputLuma:(id)a6 inputChroma:(id)a7 inputIntermediate:(id)a8 inputHalfRes1:(id)a9 inputHalfRes2:(id)a10 inputHalfResRG:(id)a11 outputLuma:(id)a12 outputChroma:(id)a13 scale:(float)a14 coreImageRender:(BOOL)a15 version:(int)a16 context:(id)a17 captureFolderMiscPath:(id)a18;
- (id)applyHairnetUsingConfig:(const struct rendering_config_params { float x0; float x1; float x2; int x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; int x11; int x12; float x13; float x14; int x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; int x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; int x37; float x38; float x39; int x40; int x41; int x42; float x43; float x44; float x45; float x46; float x47; float x48; float x49; float x50; float x51; } *)a0 hairnetParams:(struct hairnet_params { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } *)a1 inputImage:(id)a2 inputBackBlurImage:(id)a3 inputBlurMap:(id)a4 inputAlpha:(id)a5 scale:(float)a6 coreImageRender:(BOOL)a7 version:(int)a8 context:(id)a9 captureFolderMiscPath:(id)a10;
- (struct rendering_dynamic_params { void /* unknown type, blank encoding */ x0; void /* unknown type, blank encoding */ x1; void /* unknown type, blank encoding */ x2; void /* unknown type, blank encoding */ x3; void /* unknown type, blank encoding */ x4; void /* unknown type, blank encoding */ x5; void /* unknown type, blank encoding */ x6; void /* unknown type, blank encoding */ x7; void /* unknown type, blank encoding */ x8; void /* unknown type, blank encoding */ x9; void /* unknown type, blank encoding */ x10; })computeDynamicParams;
- (id)createLocalContrastImage:(id)a0 coreImageRender:(BOOL)a1 morphologicalRadius:(double)a2 inputHalfRes1:(id)a3 inputHalfResRGTex:(id)a4 device:(id)a5 context:(id)a6;
- (int)enqueueRenderingUsingArgs:(id)a0;
- (int)enqueueRenderingUsingRenderingConfig:(const struct rendering_config_params { float x0; float x1; float x2; int x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; int x11; int x12; float x13; float x14; int x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; int x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; int x37; float x38; float x39; int x40; int x41; int x42; float x43; float x44; float x45; float x46; float x47; float x48; float x49; float x50; float x51; } *)a0 inputBlurMap:(id)a1 inputAlpha:(id)a2 inputGainMap:(id)a3 inputLuma:(id)a4 inputChroma:(id)a5 inputIntermediate:(id)a6 inputHalfRes1:(id)a7 inputHalfRes2:(id)a8 inputHalfResRG:(id)a9 outputLuma:(id)a10 outputChroma:(id)a11 scale:(float)a12 version:(int)a13 context:(id)a14 captureFolderMiscPath:(id)a15;
- (id)erodeAndDilate:(id)a0 radius:(int)a1 coreImageRender:(BOOL)a2 context:(id)a3 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 pixelFormat:(unsigned long long)a5;
- (id)gainMapToLightMap:(id)a0 inputImage:(id)a1 inputLuma:(id)a2 inputChroma:(id)a3 headroom:(float)a4 context:(id)a5;
- (id)hairnetModelPath;
- (int)loadModels:(const void *)a0;
- (int)loadShaders;
- (int)setOptions:(const void *)a0 isPrewarm:(BOOL)a1;
- (int)unloadModels;

@end
