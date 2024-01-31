@class NEConfiguration, NSString;

@interface DSTCCStorePassThrough : NSObject <DSTCCStore>

@property (retain, nonatomic) NEConfiguration *pathControllerConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (id)pathRuleForBundleID:(id)a0 create:(BOOL)a1;
- (id)deleteApp:(id)a0 forTest:(BOOL)a1;
- (void)allAppsWithLocalNetworkAccess:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)appsWithLocationService;
- (void)appsWithPermissionGrantedForService:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)healthAuthorizationForApp:(id)a0 andAuthorizationStore:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)isEntityClassApplication:(id)a0;
- (BOOL)isServiceGranted:(id)a0 forApp:(id)a1;
- (void)loadConfigurations:(id)a0 handler:(id /* block */)a1;
- (unsigned long long)locationAuthorizationForApp:(id)a0;
- (void)resetHealthPermissionsForApp:(id)a0 withAuthorizationStore:(id)a1 andCompletionHandler:(id /* block */)a2;
- (void)resetLocalNetworkPermissionForApp:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)resetLocationPermissionForApp:(id)a0;
- (id)resetTCCCategory:(id)a0 forApp:(id)a1;
- (id)resetTCCPermission:(id)a0 forApp:(id)a1;
- (void)saveConfiguration:(id)a0 handler:(id /* block */)a1;

@end
