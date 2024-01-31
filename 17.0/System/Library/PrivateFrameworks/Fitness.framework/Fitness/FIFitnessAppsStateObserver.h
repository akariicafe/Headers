@class NSString, NSArray, NSMutableDictionary;
@protocol FIFitnessAppsStateObserverDelegate;

@interface FIFitnessAppsStateObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSArray *_appBundleIdentifersToMonitor;
    long long _fitnessAppsRestrictedState;
    NSMutableDictionary *_fitnessAppsInstallationState;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<FIFitnessAppsStateObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithBundleIdentifiers:(id)a0;
- (void).cxx_destruct;
- (void)applicationStateDidChange:(id)a0;
- (long long)installStateForBundleIdentifier:(id)a0;
- (void)_cacheInitialFitnessAppsInstallState;
- (void)_cacheInitialFitnessAppsRestrictedState;
- (id)_filteredAppProxies:(id)a0;
- (long long)_lock_installStateForBundleIdentifier:(id)a0;
- (void)_updateCurrentFitnessAppsInstallStateWithProxies:(id)a0 newState:(long long)a1;
- (void)_updateCurrentFitnessAppsRestrictedStateWithProxies:(id)a0;
- (BOOL)areFitnessAppsRestricted;

@end
