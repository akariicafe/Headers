@interface TSAppDelegate : UIResponder <UIApplicationDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_container;
    void /* unknown type, empty encoding */ $__lazy_storage_$_resolver;
    void /* unknown type, empty encoding */ $__lazy_storage_$_menuManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commandCenter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tracker;
    void /* unknown type, empty encoding */ backgroundFetchSignal;
    void /* unknown type, empty encoding */ remoteNotificationSignal;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ window;

- (void)validateCommand:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)buildMenuWithBuilder:(id)a0;
- (BOOL)application:(id)a0 openURL:(id)a1 options:(id)a2;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (BOOL)application:(id)a0 willFinishLaunchingWithOptions:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)application:(id)a0 didReceiveRemoteNotification:(id)a1 fetchCompletionHandler:(id /* block */)a2;
- (void)application:(id)a0 performFetchWithCompletionHandler:(id /* block */)a1;
- (void)application:(id)a0 handleIntent:(id)a1 completionHandler:(id /* block */)a2;
- (id)createBridgedAppResolver;
- (id)createCarPlaySceneContainer;
- (id)createSceneContainer;
- (void)didCommitFirstFrame;
- (id)init;
- (void).cxx_destruct;
- (void)bootstrapWithApplication:(id)a0;
- (void)registerAudioAppIntentsDependencies;

@end
