@class NSString, NSMutableSet, NSHashTable;

@interface NUApplicationAppActivityMonitorIOS : NSObject <NUAppActivityMonitor, FCAppActivityReceiver>

@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NSMutableSet *foregroundObserverBlocks;
@property (readonly, nonatomic) NSMutableSet *backgroundObserverBlocks;
@property (readonly, nonatomic) NSMutableSet *windowForegroundObserverBlocks;
@property (readonly, nonatomic) NSMutableSet *windowBackgroundObserverBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)performOnApplicationDidEnterBackground:(id /* block */)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)sceneDidEnterBackground;
- (void)sceneWillConnect;
- (void)_windowDidBecomeBackground;
- (void)performOnApplicationDidBecomeActive:(id /* block */)a0;
- (void)performOnApplicationWindowDidBecomeForeground:(id /* block */)a0;
- (void)sceneDidEnterBackgroundWithSceneID:(id)a0;
- (void)performOnApplicationWillEnterForeground:(id /* block */)a0;
- (void)_windowDidBecomeForeground;
- (void).cxx_destruct;
- (void)sceneWillEnterForeground;
- (void)sceneDidBecomeActiveWithURL:(id)a0 sourceApplication:(id)a1 sceneID:(id)a2;
- (void)performOnApplicationWindowDidBecomeBackground:(id /* block */)a0;
- (void)sceneWillResignActiveWithSceneID:(id)a0;
- (void)addObserver:(id)a0;
- (void)_applicationWillTerminate;
- (void)sceneDidBecomeActive;

@end
