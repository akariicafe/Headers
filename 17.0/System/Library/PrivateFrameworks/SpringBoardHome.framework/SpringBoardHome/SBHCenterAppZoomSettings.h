@class SBFAnimationSettings;

@interface SBHCenterAppZoomSettings : SBHCenterZoomSettings

@property (nonatomic) double appHeadStart;
@property (retain, nonatomic) SBFAnimationSettings *appZoomSettings;
@property (retain, nonatomic) SBFAnimationSettings *appFadeSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
