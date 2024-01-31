@class PHResourceDownloadSettings, PHImageManagerSettings;

@interface PHRootSettings : PHSettings

@property (readonly, nonatomic) PHImageManagerSettings *imageManagerSettings;
@property (readonly, nonatomic) PHResourceDownloadSettings *resourceDownloadSettings;

+ (id)sharedSettings;
+ (id)settingsControllerModule;
+ (void)_rebuildMoments;

- (id)parentSettings;
- (void).cxx_destruct;

@end
