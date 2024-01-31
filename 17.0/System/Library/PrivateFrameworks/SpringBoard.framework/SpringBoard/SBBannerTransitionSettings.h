@class SBFFluidBehaviorSettings;

@interface SBBannerTransitionSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *customBannerTransitionStylePoof;
@property (nonatomic) double poofInitialBlurRadius;
@property (nonatomic) double poofDismissedBlurRadius;
@property (nonatomic) double poofInitialScale;
@property (nonatomic) double poofDismissedScale;
@property (retain, nonatomic) SBFFluidBehaviorSettings *customBannerTransitionStyleSystemAction;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
