@class NSString, FBServiceClientAuthenticator;
@protocol FBApplicationDataStoreRepository;

@interface FBApplicationDataStoreRepositoryServer : FBSServiceFacility <FBApplicationDataStoreRepositoryServerClientContextDelegate> {
    FBServiceClientAuthenticator *_connectionAuthenticator;
}

@property (retain, nonatomic) id<FBApplicationDataStoreRepository> dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)noteClientDidDisconnect:(id)a0;
- (id)_init;
- (id)_prerequisiteMilestones;
- (void)noteClientDidConnect:(id)a0 withMessage:(id)a1;
- (void)noteDidReceiveMessage:(id)a0 withType:(long long)a1 fromClient:(id)a2;
- (void).cxx_destruct;
- (BOOL)shouldAllowClientConnection:(id)a0 withMessage:(id)a1;
- (void)_handleSetObjectForKey:(id)a0 context:(id)a1;
- (void)_handleGetAvailableDataStores:(id)a0;
- (void)_handleGetObjectForKey:(id)a0;
- (void)_handleMigrateIdentifier:(id)a0;
- (void)_handleRemoveAllObjects:(id)a0;
- (void)_handleRemoveObjectForKey:(id)a0 context:(id)a1;
- (void)_handleSetChangesInterest:(id)a0 context:(id)a1;
- (void)_handleSetPrefetchedKeys:(id)a0 context:(id)a1;
- (void)_handleSynchronize:(id)a0;
- (void)applicationDataStoreRepositoryClientContext:(id)a0 repositoryInvalidatedForAppID:(id)a1;
- (void)applicationDataStoreRepositoryClientContext:(id)a0 valueChangedForObject:(id)a1 key:(id)a2 appID:(id)a3;

@end
