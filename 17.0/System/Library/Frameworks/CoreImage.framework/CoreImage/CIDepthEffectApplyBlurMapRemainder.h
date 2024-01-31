@class CIImage;

@interface CIDepthEffectApplyBlurMapRemainder : CIDepthEffectApplyBlurMap

@property (retain) CIImage *inputBackground;

+ (id)customAttributes;

- (id)outputImage;
- (id)unifiedRenderingOutputImage:(struct CGImageMetadata { } *)a0;

@end
