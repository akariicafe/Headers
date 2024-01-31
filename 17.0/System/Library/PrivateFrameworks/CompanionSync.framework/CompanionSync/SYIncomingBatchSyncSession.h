@class NSMutableIndexSet, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface SYIncomingBatchSyncSession : SYIncomingFullSyncSession {
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSMutableIndexSet *_receivedBatchIndices;
    BOOL _hasReceivedEndSync;
    id /* block */ _completion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _queueLock;
    NSMutableArray *_incomingBatchQueue;
    BOOL canRestart;
    BOOL canRollback;
}

- (id)initWithService:(id)a0;
- (void).cxx_destruct;
- (void)setCanRollback:(BOOL)a0;
- (void)_continueProcessing;
- (void)_handleBatchChunk:(id)a0 completion:(id /* block */)a1;
- (void)_handleEndSync:(id)a0 completion:(id /* block */)a1;
- (void)_sendEndSessionResponse:(id)a0;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (void)setCanRestart:(BOOL)a0;

@end
