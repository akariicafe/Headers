@class SBFAnimationSettings;

@interface SBHLibraryPodZoomSettings : SBHFolderZoomSettings

@property (retain, nonatomic) SBFAnimationSettings *innerFolderEdgeZoomSettings;
@property (retain, nonatomic) SBFAnimationSettings *innerFolderCenterZoomSettings;

+ (id)settingsControllerModule;
+ (id)_defaultCentralAnimationSettings;
+ (id)_defaultCrossfadeSettings;
+ (id)_defaultInnerFolderZoomAnimationSettings;
+ (double)_defaultInnerFolderZoomDelay;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
