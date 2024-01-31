@interface PUSceneSettings : PXSettings

@property (nonatomic) BOOL showConfidenceOverlay;
@property (nonatomic) unsigned long long inspectorSortOrder;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
