@class COMessageChannel, NSSet, NSMutableArray, COCluster, NSObject, COClusterRoleMonitor;
@protocol OS_dispatch_queue, COMTActionDirectorServiceProvider, NSObject;

@interface COMTActionDirector : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) COCluster *cluster;
@property (readonly, nonatomic) BOOL activated;
@property (readonly, nonatomic) COMessageChannel *messageChannel;
@property (readonly, nonatomic) COClusterRoleMonitor *monitor;
@property (retain, nonatomic) id<NSObject> monitorObserver;
@property (retain, nonatomic) NSSet *members;
@property (retain, nonatomic) NSMutableArray *actionHandler;
@property (readonly, nonatomic) id<COMTActionDirectorServiceProvider> provider;
@property (readonly, nonatomic) unsigned long long chunkSize;

+ (id)directorForCluster:(id)a0;

- (BOOL)_activate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)removeHandler:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)initWithCluster:(id)a0;
- (void)_notifyHandlerOfSnapshotChanges_unsafe:(id)a0;
- (id)_requestHandlerForAction:(id)a0;
- (id)_requestHandlerForTypedAction:(id)a0;
- (void)handleMembersChanged:(id)a0;
- (void)handlePerformActionRequest:(id)a0 from:(id)a1 callback:(id /* block */)a2;
- (id)initWithProvider:(id)a0 cluster:(id)a1;
- (void)registerHandler:(id)a0 forType:(id)a1 actions:(id)a2 queue:(id)a3;
- (void)requestAction:(id)a0 members:(id)a1 activity:(id)a2 fallback:(id /* block */)a3 withCompletion:(id /* block */)a4;
- (void)requestAction:(id)a0 members:(id)a1 activity:(id)a2 withCompletion:(id /* block */)a3;
- (void)requestAction:(id)a0 members:(id)a1 withCompletion:(id /* block */)a2;
- (void)requestActions:(id)a0 members:(id)a1 activity:(id)a2 withCompletion:(id /* block */)a3;
- (void)requestActions:(id)a0 members:(id)a1 withCompletion:(id /* block */)a2;

@end
