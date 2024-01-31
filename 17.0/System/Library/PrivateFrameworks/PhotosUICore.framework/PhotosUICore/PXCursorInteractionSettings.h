@interface PXCursorInteractionSettings : PXSettings

@property (nonatomic) double animationDuration;
@property (nonatomic) double dampingRatio;
@property (nonatomic) double yearsPadding;
@property (nonatomic) double monthsPadding;
@property (nonatomic) double daysPadding;
@property (nonatomic) double allPhotosAspectFitPadding;
@property (nonatomic) double allPhotosAspectFillPadding;
@property (nonatomic) long long aspectFitAnimationStyle;
@property (nonatomic) long long aspectFillAnimationStyle;
@property (nonatomic) BOOL enableGridShadows;
@property (nonatomic) BOOL enableGridLift;
@property (nonatomic) BOOL enableCardShadows;
@property (nonatomic) BOOL enableCardLift;
@property (nonatomic) BOOL enableDetailsEffect;
@property (nonatomic) BOOL enableCuratedLibraryEffects;
@property (nonatomic) BOOL enableDaysEffect;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (long long)cardInteractionOptions;
- (long long)interactionOptionsForZoomLevel:(long long)a0 isAllPhotosAspectFit:(BOOL)a1;
- (long long)gridInteractionOptions;
- (double)paddingForZoomLevel:(long long)a0;

@end
