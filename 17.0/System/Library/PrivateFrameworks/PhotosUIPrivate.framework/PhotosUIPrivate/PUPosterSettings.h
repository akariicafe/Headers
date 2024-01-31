@class PUPosterHeadroomSettings;

@interface PUPosterSettings : PXSettings

@property (retain, nonatomic) PUPosterHeadroomSettings *headroomSettings;

+ (id)sharedInstance;
+ (id)_photosUICoreSettings;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)createChildren;
- (id)reparentedRootSettings;
- (void).cxx_destruct;
- (id)initWithDefaultValues;

@end
