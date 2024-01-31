@interface PUPosterHeadroomSettings : PXSettings

@property (nonatomic) double pinchToZoomHeadroomBoundary;
@property (nonatomic) double fadeAnimationDuration;
@property (nonatomic) double blurVisibilityFraction;
@property (nonatomic) double blurRadius;
@property (nonatomic) double blurMaskHeight;
@property (nonatomic) double blurMaskTopLocation;
@property (nonatomic) double falloffHeight;
@property (nonatomic) double gradientHeight;
@property (nonatomic) double gradientWhite;
@property (nonatomic) double highKeyGradientWhite;
@property (nonatomic) double bottomGradientAlpha;
@property (nonatomic) double bottomGradientTopLocation;
@property (nonatomic) double bottomGradientBottomLocation;
@property (nonatomic) double topGradientAlpha;
@property (nonatomic) double topGradientTopLocation;
@property (nonatomic) double topGradientBottomLocation;
@property (nonatomic) BOOL useSoftLightBlendingModeForTopGradient;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
