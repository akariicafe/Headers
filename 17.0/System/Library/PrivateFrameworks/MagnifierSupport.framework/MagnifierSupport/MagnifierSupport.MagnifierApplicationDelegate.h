@class UIResponder;

@interface MagnifierSupport.MagnifierApplicationDelegate : UIResponder <UIApplicationDelegate> {
    void /* unknown type, empty encoding */ _commandManager;
    void /* unknown type, empty encoding */ _stillImageStore;
}

@property (nonatomic, readonly) UIResponder *nextResponder;

- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (id)init;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void).cxx_destruct;
- (id)application:(id)a0 configurationForConnectingSceneSession:(id)a1 options:(id)a2;
- (unsigned long long)application:(id)a0 supportedInterfaceOrientationsForWindow:(id)a1;

@end
