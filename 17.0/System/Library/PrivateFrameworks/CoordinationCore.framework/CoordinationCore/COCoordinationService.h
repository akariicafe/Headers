@class NSString, NSArray, COClusterAliasManager, NSOrderedSet, COHomeKitAdapter, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface COCoordinationService : NSObject <COServiceDelegate, COClusterAssertionDelegate, COClusterAliasManagerMeshProvider, COClusterAliasManagerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _servicesLock;
    BOOL _isMigrating;
}

@property (class, retain, nonatomic) COCoordinationService *singleton;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) double pingMinimum;
@property (readonly, nonatomic) double pingMaximum;
@property (readonly, nonatomic) COHomeKitAdapter *hkAdapter;
@property (readonly, nonatomic) NSOrderedSet *services;
@property (readonly, nonatomic) NSArray *alwaysAssert;
@property (readonly, nonatomic) NSMapTable *assertions;
@property (readonly, nonatomic) COClusterAliasManager *aliasManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startWithConstituentType:(unsigned long long)a0;

- (void)waitForClusterBootstrap:(id)a0 completion:(id /* block */)a1;
- (void)_initializeServices;
- (void)_continueMigration;
- (id)_servicesForClusters:(id)a0;
- (void)_withServicesLock:(id /* block */)a0;
- (void)didInvalidateAssertionForCluster:(id)a0;
- (void)_completeMigration;
- (id)aliasManagerRequestsNewMesh:(id)a0;
- (void)aliasManager:(id)a0 deactivatingMesh:(id)a1 withClusterIdentifier:(id)a2 forClusters:(id)a3 completion:(id /* block */)a4;
- (void)aliasManager:(id)a0 activatingMesh:(id)a1 withClusterIdentifier:(id)a2 forClusters:(id)a3 completion:(id /* block */)a4;
- (void)_significantHomeChange:(id)a0;
- (void).cxx_destruct;
- (void)_unlinkServicesFromMeshController:(id)a0 withClusterIdentifier:(id)a1 forClusters:(id)a2;
- (id)_initWithConstituentType:(unsigned long long)a0;
- (void)_initiateMigrationFrom:(long long)a0;
- (void)_linkServicesToMeshController:(id)a0 withClusterIdentifier:(id)a1 forClusters:(id)a2;
- (id)takeAssertionForCluster:(id)a0;
- (void)_continueInitialization;
- (void)_withLock:(id /* block */)a0;

@end
