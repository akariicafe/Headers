@class NUIdentifier;

@interface PISchema : NSObject

@property (class, readonly) NUIdentifier *identifier;

+ (id)trimSchema;
+ (id)retouchSchema;
+ (id)definitionSchema;
+ (id)registerPhotosSchema;
+ (id)effect3DSchema;
+ (id)highResFusionSchema;
+ (id)selectiveColorSchema;
+ (id)debugSchema;
+ (id)videoStabilizeSchema;
+ (id)cropSchema;
+ (id)smartBlackAndWhiteSchema;
+ (id)rawNoiseReductionSchema;
+ (id)depthEffectSchema;
+ (id)smartColorSchema;
+ (id)livePhotoKeyFrameSchema;
+ (id)apertureRedEyeSchema;
+ (id)noiseReductionSchema;
+ (id)videoPosterFrameSchema;
+ (id)levelsSchema;
+ (id)whiteBalanceSchema;
+ (id)autoLoopSchema;
+ (id)smartToneSchema;
+ (id)slomoSchema;
+ (id)curvesSchema;
+ (id)photosCompositionSchema;
+ (id)photosSchema;
+ (id)portraitEffectSchema;
+ (id)semanticEnhance;
+ (id)orientationSchema;
+ (id)effectSchema;
+ (id)vignetteSchema;
+ (id)videoCrossfadeLoopSchema;
+ (id)redEyeSchema;
+ (id)rawSchema;
+ (id)portraitVideoSchema;
+ (id)grainSchema;
+ (id)muteSchema;
+ (id)sharpenSchema;
+ (id)registeredPhotosSchemaIdentifier;

@end
