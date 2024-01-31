@class SBFAnimationSettings;

@interface SBHFolderZoomSettings : SBHScaleZoomSettings

@property (retain, nonatomic) SBFAnimationSettings *innerFolderFadeSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
