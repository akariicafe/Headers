@interface ChronoCore.ActivitySceneDelegateBase : NSObject <UIWindowSceneDelegate> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ clientLogger;
    void /* unknown type, empty encoding */ viewLogger;
    void /* unknown type, empty encoding */ logIdentifier;
    void /* unknown type, empty encoding */ metricsDefinition;
    void /* unknown type, empty encoding */ activityService;
    void /* unknown type, empty encoding */ descriptorService;
    void /* unknown type, empty encoding */ descriptor;
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ _validated;
    void /* unknown type, empty encoding */ _isForeground;
    void /* unknown type, empty encoding */ _viewModels;
    void /* unknown type, empty encoding */ _hasUI;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ window;

- (id)init;
- (void)sceneDidDisconnect:(id)a0;
- (void)sceneDidBecomeActive:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)sceneWillResignActive:(id)a0;
- (void)sceneWillEnterForeground:(id)a0;
- (void).cxx_destruct;

@end
