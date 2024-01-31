@interface BWLearnedMattingInferenceConfiguration : BWTiledEspressoInferenceConfiguration

@property (nonatomic) float mainImageDownscalingFactor;
@property (nonatomic) float targetAspectRatio;
@property (nonatomic) BOOL appliesFinalCropRect;
@property (nonatomic) BOOL produceLowResPersonMaskClone;

- (void)dealloc;

@end
