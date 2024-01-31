@interface PUIrisSettings : PXSettings

@property (nonatomic, getter=showStatusBorder) BOOL showStatusBorder;
@property (nonatomic, getter=isVitalityAllowed) BOOL vitalityAllowed;
@property (nonatomic) BOOL shouldAlwaysBadge;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)_photosPlayerRootSettings;

- (id)parentSettings;
- (void)performPostSaveActions;
- (void)setDefaultValues;
- (void)restoreDefaultValues;

@end
