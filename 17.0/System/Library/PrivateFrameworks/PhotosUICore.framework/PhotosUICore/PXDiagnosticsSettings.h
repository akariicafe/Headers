@interface PXDiagnosticsSettings : PXSettings

@property (nonatomic) BOOL enableContextualGesture;
@property (nonatomic) BOOL enableInternalSettingsService;
@property (nonatomic) BOOL enableGenericService;
@property (nonatomic) BOOL enableGraphService;
@property (nonatomic) BOOL enableTitleFontService;
@property (nonatomic) BOOL enableCompleteMyMomentService;
@property (nonatomic) BOOL enableDebugDictionaryService;
@property (nonatomic) BOOL enableScrollService;
@property (nonatomic) double scrollSpeed;
@property (nonatomic) long long scrollIterations;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
