@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface NTKSystemAppStateCache : NSObject <LSApplicationWorkspaceObserverProtocol, NTKSystemAppStateCache> {
    NSMutableSet *_restrictedSystemApps;
    NSMutableSet *_removedSystemApps;
    NSMutableSet *_cachedAppStateBundleId;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_tinCanBundleID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)applicationsDidInstall:(id)a0;
- (void)applicationInstallsDidStart:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)isRestrictedSystemApp:(id)a0;
- (void).cxx_destruct;
- (void)applicationStateDidChange:(id)a0;
- (BOOL)isRemovedSystemApp:(id)a0;
- (void)_deviceDidPair;
- (void)_queue_applicationsDidChange:(id)a0 state:(unsigned long long)a1;
- (id)_queue_cachedAppStateBundleId;
- (void)_queue_deviceDidPair;
- (void)_queue_initializeRemovedSystemApps;
- (void)_queue_initializeRestrictedSystemApps;
- (id)_queue_removedSystemApps;
- (id)_queue_restrictedSystemApps;
- (void)_queue_tinCanSettingsChanged;
- (void)_queue_verifyStateForAppBundleId:(id)a0;
- (void)_tinCanSettingsChanged;
- (void)prewarmGizmoDaemon;
- (id)removedSystemApps;
- (id)restrictedSystemApps;

@end
