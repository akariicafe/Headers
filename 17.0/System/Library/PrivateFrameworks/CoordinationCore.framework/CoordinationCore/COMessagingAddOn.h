@class NSMutableArray, NSObject;
@protocol OS_dispatch_source, COMessagingAddOnDelegate;

@interface COMessagingAddOn : COMeshAddOn {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, getter=isTimerEnabled) BOOL timerEnabled;
@property (readonly, nonatomic) NSMutableArray *queuedIncomingRequests;
@property (weak) id<COMessagingAddOnDelegate> delegate;

- (void)_timerFired;
- (id)init;
- (void).cxx_destruct;
- (void)_withLock:(id /* block */)a0;
- (void)_configureTimer;
- (void)didChangeNodesForMeshController:(id)a0;
- (void)sendRequest:(id)a0 members:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_handleRequest:(id)a0 callback:(id /* block */)a1;
- (void)_timerRequestAdded:(id)a0;
- (void)broadcastRequest:(id)a0 recipientsCallback:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)didAddToMeshController:(id)a0;
- (void)willRemoveFromMeshController:(id)a0;

@end
