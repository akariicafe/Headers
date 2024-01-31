@class NSString, NPKObserverManager, NSObject;
@protocol OS_dispatch_queue;

@interface NPKApplicationStateListener : NSObject <LSApplicationWorkspaceObserverProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _appStateLock;
    unsigned long long _appState;
    NSObject<OS_dispatch_queue> *_internalClassQueue;
    NPKObserverManager *_observerManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prewarm;
- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (id)init;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)applicationStateDidChange:(id)a0;
- (unsigned long long)cachedAppState;
- (unsigned long long)_applicationStateWithLSApplicationState:(id)a0;
- (void)_handleApplicationChangeNotificationWithWorkspaceApplicationProxies:(id)a0 newStateResolver:(id /* block */)a1;
- (void)_retrieveAppState:(id /* block */)a0;
- (void)_updateStateWithNewState:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)appState:(id /* block */)a0;

@end
