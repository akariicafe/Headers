@interface SDOFMetadata : NSObject

+ (BOOL)hasValidHeader:(void *)a0;
+ (id)getRenderingParamsAsDictionary:(struct CGImageMetadata { } *)a0;
+ (id)minMaxForParam:(id)a0;
+ (struct hairnet_params { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })defaultHairnetParams;
+ (float)defaultSimulatedAperture:(void *)a0;
+ (void *)dictToTuningParams:(id)a0 majorVersion:(int)a1 minorVersion:(int)a2;
+ (int)disparityRefinementVersion:(void *)a0;
+ (int)getEffectiveVersion:(struct FigDepthBlurEffectRenderingParametersHeader { int x0; int x1; unsigned int x2; } *)a0;
+ (int)getMinorRenderingVersion:(void *)a0;
+ (void *)getRenderingParametersFromAuxMetadata:(struct CGImageMetadata { } *)a0;
+ (void *)getRenderingParametersFromMetaData:(id)a0;
+ (int)getRenderingVersion:(void *)a0;
+ (BOOL)getUnifiedRenderingForegroundBlurEnabled:(id)a0;
+ (int)getUnifiedRenderingMaxVersionSupported;
+ (struct blurmap_refinement_params { struct matte_image_shader_params { struct fusion_params { float x0; float x1; float x2; float x3; float x4; float x5; } x0; int x1; float x2; float x3; } x0; struct matte_image_shader_params { struct fusion_params { float x0; float x1; float x2; float x3; float x4; float x5; } x0; int x1; float x2; float x3; } x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct subject_distance { float x0; float x1; float x2; float x3; } x9; struct eyeProtection_params { int x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x10; float x11; float x12; float x13; float x14; float x15; float x16; })loadBlurmapRefinementParams:(void *)a0 apertureScaling:(float)a1 inputScale:(float)a2 focusWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 segmentationFusionParams:(const struct segmentation_fusion_params { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } *)a4;
+ (struct blurmap_smoothing_params { int x0; float x1; float x2; float x3; float x4; })loadBlurmapSmoothingParams:(void *)a0;
+ (struct crisp_hair_params { float x0; float x1; float x2; float x3; float x4; })loadCrispHairParams:(void *)a0;
+ (struct disparity_refinement_params { int x0; float x1; float x2; float x3; float x4; int x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; int x20; })loadDisparityRefinementParams:(void *)a0;
+ (struct face_mask_params { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; })loadFaceMaskParams:(void *)a0 facePoints:(struct CGPoint { double x0; double x1; } *)a1 simulatedAperture:(float)a2 aspectRatio:(float)a3 maxBlur:(float)a4;
+ (struct hairnet_params { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })loadHairnetParams:(void *)a0;
+ (struct simple_lens_model_params { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; })loadLensModelParams:(void *)a0 simulatedAperture:(float)a1 focusWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 frameNormalizedFocalLength:(float)a3 maxBlur:(float)a4;
+ (int)loadMattingParams:(void *)a0 config:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; unsigned int x11; } *)a1;
+ (struct rendering_config_params { float x0; float x1; float x2; int x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; int x11; int x12; float x13; float x14; int x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; int x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; int x37; float x38; float x39; int x40; int x41; int x42; float x43; float x44; float x45; float x46; float x47; float x48; float x49; float x50; float x51; })loadRenderingParams:(void *)a0 simulatedAperture:(float)a1 lumaNoiseAmplitude:(float)a2 maxBlur:(float)a3;
+ (struct segmentation_fusion_params { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; })loadSegmentationFusionParams:(void *)a0 simulatedAperture:(float)a1 maxBlur:(float)a2;
+ (float)maxSimulatedAperture:(void *)a0;
+ (float)minSimulatedAperture:(void *)a0;
+ (struct CGImageMetadata { } *)replaceRenderingParameters:(struct CGImageMetadata { } *)a0 params:(struct FigDepthBlurEffectRenderingParametersV4 { struct FigDepthBlurEffectRenderingParametersHeader { int x0; int x1; unsigned int x2; } x0; int x1; struct FigDepthBlurEffectRenderingParametersV4_ParameterPair { short x0; short x1; union { float x0; int x1; unsigned int x2; BOOL x3; } x2; } x2[0]; } *)a1;
+ (struct CGImageMetadata { } *)replaceRenderingParameters:(struct CGImageMetadata { } *)a0 withDictionary:(id)a1;
+ (id)tuningParamsToDict:(void *)a0;

@end
