@class NSString, UIWindow;

@interface _EXExtensionApplicationDelegate : NSObject <UIApplicationDelegate>

@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationDidFinishLaunching:(id)a0;
- (id)application:(id)a0 configurationForConnectingSceneSession:(id)a1 options:(id)a2;
- (BOOL)application:(id)a0 willFinishLaunchingWithOptions:(id)a1;

@end
