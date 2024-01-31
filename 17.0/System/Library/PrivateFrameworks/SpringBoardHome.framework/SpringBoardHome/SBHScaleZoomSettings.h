@class SBFAnimationSettings;

@interface SBHScaleZoomSettings : SBHIconZoomSettings

@property (retain, nonatomic) SBFAnimationSettings *outerFolderFadeSettings;
@property (nonatomic) BOOL crossfadeWithZoom;
@property (retain, nonatomic) SBFAnimationSettings *crossfadeSettings;
@property (nonatomic) BOOL fadesIconGrid;
@property (retain, nonatomic) SBFAnimationSettings *iconGridFadeSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;
- (id)effectiveCrossfadeAnimationSettings;

@end
