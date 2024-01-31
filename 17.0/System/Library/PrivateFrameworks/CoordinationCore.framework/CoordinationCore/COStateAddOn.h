@class NSDictionary, NSMutableArray;
@protocol COStateAddOnDelegate;

@interface COStateAddOn : COMeshAddOn {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _stateConstructionGeneration;
    NSMutableArray *_outstandingUpdateRequests;
    BOOL _isConstructingState;
}

@property (weak) id<COStateAddOnDelegate> delegate;
@property (copy, nonatomic) NSDictionary *meshState;

- (id)init;
- (void).cxx_destruct;
- (void)_withLock:(id /* block */)a0;
- (void)didChangeNodesForMeshController:(id)a0;
- (void)meshController:(id)a0 didTransitionToState:(unsigned long long)a1;
- (void)_handleStateUpdateNotification:(id)a0;
- (void)_broadcastMeshState:(id)a0;
- (void)_constructMeshState;
- (void)_handleStateNotification:(id)a0;
- (void)_handleStateReadRequest:(id)a0 callback:(id /* block */)a1;
- (void)_handleStateUpdateRequest:(id)a0 callback:(id /* block */)a1;
- (void)_handleUpdates:(id)a0 removals:(id)a1;
- (void)_processOutstandingUpdateRequests;
- (void)_sendRequest:(id)a0 withRetryCount:(long long)a1 withCallback:(id /* block */)a2;
- (void)didAddToMeshController:(id)a0;
- (void)removeKeyPaths:(id)a0 suite:(id)a1 withCallback:(id /* block */)a2;
- (void)sendStateUpdates:(id)a0 removals:(id)a1 withCallback:(id /* block */)a2;
- (void)setDictionary:(id)a0 suite:(id)a1 withCallback:(id /* block */)a2;
- (void)willRemoveFromMeshController:(id)a0;

@end
