@class NSArray, NSString, NSXPCConnection;
@protocol COClusterRoleMonitorConnectionProvider;

@interface COClusterRoleMonitor : NSObject <COClusterRoleMonitorClientInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) NSXPCConnection *lastConnection;
@property (readonly, nonatomic) id<COClusterRoleMonitorConnectionProvider> provider;
@property (copy, nonatomic) NSArray *memberObservers;
@property (copy, nonatomic) NSArray *roleObservers;
@property (copy, nonatomic) NSArray *snapshotObservers;
@property (readonly, copy, nonatomic) id cluster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_serviceConnection;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (void)_lostConnectionToService;
- (void)_withLock:(id /* block */)a0;
- (void)_registerMemberObserver:(id)a0;
- (void)_registerRoleObserver:(id)a0;
- (void)_registerSnapshotObserver;
- (void)_unregisterMemberObserver:(id)a0;
- (void)_unregisterRoleObserver:(id)a0;
- (void)_unregisterSnapshotObserver;
- (id)addObserverForMember:(id)a0 toDispatchQueue:(id)a1 block:(id /* block */)a2;
- (id)addObserverForRole:(id)a0 toDispatchQueue:(id)a1 block:(id /* block */)a2;
- (id)addObserverForSnapshotsToDispatchQueue:(id)a0 block:(id /* block */)a1;
- (id)initWithCluster:(id)a0;
- (id)initWithConnectionProvider:(id)a0 cluster:(id)a1;
- (void)membersWithRole:(id)a0 inCluster:(id)a1 didChangeTo:(id)a2;
- (void)removeObserverForMember:(id)a0;
- (void)removeObserverForRole:(id)a0;
- (void)removeObserverForSnapshots:(id)a0;
- (void)roleOfMember:(id)a0 inCluster:(id)a1 didChangeTo:(id)a2;
- (void)snapshotOfCluster:(id)a0 didChangeTo:(id)a1;

@end
