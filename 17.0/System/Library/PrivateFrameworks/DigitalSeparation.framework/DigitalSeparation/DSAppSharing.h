@class HKAuthorizationStore, HKHealthStore, NSObject;
@protocol OS_dispatch_queue, DSTCCStore;

@interface DSAppSharing : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) id<DSTCCStore> tccStore;
@property (retain, nonatomic) HKHealthStore *healthKitStore;
@property (retain, nonatomic) HKAuthorizationStore *authorizationStore;

- (void).cxx_destruct;
- (void)approvedBundleIdForKappa:(id)a0 handler:(id /* block */)a1;
- (void)collectPermissionsForApps:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)deleteApp:(id)a0 forTest:(BOOL)a1;
- (id)initWithTCCStore:(id)a0;
- (void)resetBackgroundAppRefresh:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)resetPermissions:(id)a0 forApps:(id)a1 queue:(id)a2 handler:(id /* block */)a3;
- (void)resetShortcutsAutomationTimer:(id)a0 handler:(id /* block */)a1;
- (void)resetPermission:(id)a0 forApp:(id)a1 handler:(id /* block */)a2;
- (void)addApp:(id)a0 toMap:(id)a1 withLocationAuthorization:(unsigned long long)a2;
- (void)addApp:(id)a0 toMap:(id)a1 withService:(id)a2;
- (void)addHealthPermissionsToAppMap:(id)a0 handler:(id /* block */)a1;
- (void)addLocalNetworkPermissionsToAppMap:(id)a0 handler:(id /* block */)a1;
- (void)addLocationPermissions:(id)a0;
- (void)addTCCPermissionsToAppMap:(id)a0 handler:(id /* block */)a1;
- (void)collectAppsWithAccessToService:(id)a0 appMap:(id)a1 completionHandler:(id /* block */)a2;
- (id)newDictionaryWithApps:(id)a0;
- (id)removeAppsWithNoPermissions:(id)a0;
- (void)resetHealthPermissionsForApp:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)resetPermission:(id)a0 forApps:(id)a1 handler:(id /* block */)a2;

@end
