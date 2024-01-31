@interface AXUIDaemonApplication : UIApplication

@property (class, readonly, nonatomic) BOOL usesScenes;
@property (class, readonly, nonatomic) double preferredWindowLevel;
@property (class, readonly, nonatomic) BOOL isChamoisSupportEnabled;

+ (BOOL)_isSystemUIService;
+ (BOOL)_isUIKitSystemProcess;
+ (BOOL)_suppressesTextEffectsWindow;
+ (id)_systemUIServiceClientSettings;
+ (id)_systemUIServiceIdentifier;

- (long long)_frontMostAppOrientation;
- (BOOL)_shouldAllowKeyboardArbiter;

@end
