@class SBFAnimationSettings;

@interface SBHCrossfadeZoomSettings : SBHScaleZoomSettings

@property (nonatomic) BOOL morphWithZoom;
@property (retain, nonatomic) SBFAnimationSettings *morphSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;
- (id)effectiveMorphAnimationSettings;

@end
