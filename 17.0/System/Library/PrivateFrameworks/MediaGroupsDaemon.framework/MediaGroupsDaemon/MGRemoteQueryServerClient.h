@class NSArray, NSString, NSObject;
@protocol OS_nw_endpoint, OS_dispatch_source, OS_dispatch_queue, MGRemoteQueryServerClientDelegate;

@interface MGRemoteQueryServerClient : NSObject <MGRemoteQueryServerTransactionDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _transactionsLock;
}

@property (retain, nonatomic) NSArray *transactions;
@property (nonatomic) BOOL invalidated;
@property (nonatomic) unsigned long long timeout;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (readonly, weak, nonatomic) id<MGRemoteQueryServerClientDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *peer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)transactionCount;
- (void)_timerFired;
- (void)dealloc;
- (void)_invalidated;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)_delegateNotifyInvalidated;
- (void)_delegateNotifyLostTransaction;
- (void)_timerCancel;
- (void)_timerInit;
- (void)_timerReschedule;
- (void)_transactionAdd:(id)a0;
- (BOOL)_transactionExists:(id)a0;
- (void)_transactionRemove:(id)a0;
- (void)_withTransactionsLock:(id /* block */)a0;
- (void)addNewConnection:(id)a0 completion:(id /* block */)a1;
- (id)initWithPeer:(id)a0 delegate:(id)a1 dispatchQueue:(id)a2;
- (void)transaction:(id)a0 receivedTimeoutInterval:(unsigned long long)a1;
- (void)transactionActivityOccurred:(id)a0;
- (void)transactionInvalidated:(id)a0;

@end
