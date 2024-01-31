@class _SYCountedSemaphore, _SYMessageTimerTable, NSMutableIndexSet, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_os_activity;

@interface SYOutgoingBatchSyncSession : SYSession {
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    unsigned long long _batchIndex;
    NSMutableIndexSet *_ackedBatchIndices;
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;
    _SYCountedSemaphore *_changeConcurrencySemaphore;
    NSObject<OS_os_activity> *_changeWaitActivity;
    NSObject<OS_os_activity> *_sessionActivity;
    unsigned int _state;
    BOOL _errorIsLocal;
    BOOL _hasSentEnd;
    _SYMessageTimerTable *_timers;
    double _sessionStartTime;
    BOOL _canRestart;
    BOOL _canRollback;
    BOOL _cancelled;
}

- (unsigned long long)protocolVersion;
- (BOOL)isSending;
- (BOOL)wasCancelled;
- (void)start:(id /* block */)a0;
- (unsigned int)state;
- (id)initWithService:(id)a0;
- (void)setState:(unsigned int)a0;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (void)_fetchNextBatch;
- (BOOL)isResetSync;
- (void)_sessionComplete;
- (void)setCanRollback:(BOOL)a0;
- (BOOL)_handleBatchAck:(id)a0 error:(id *)a1;
- (BOOL)_handleBatchSyncEndResponse:(id)a0 error:(id *)a1;
- (void)_installStateListener;
- (void)_installTimers;
- (void)_messageExpiredWithSeqno:(unsigned long long)a0 identifier:(id)a1;
- (void)_notifySessionComplete;
- (void)_processNextState;
- (void)_sendSyncBatch:(id)a0 nextState:(unsigned int)a1;
- (void)_sendSyncCancelled;
- (void)_sendSyncCompleteAndRunBlock:(id /* block */)a0;
- (void)_sendSyncRestart;
- (void)_sendSyncStart;
- (void)_sentMessageWithIdentifier:(id)a0 userInfo:(id)a1;
- (void)_setMessageTimerForSeqno:(unsigned long long)a0;
- (void)_setStateQuietly:(unsigned int)a0;
- (void)_setupChangeConcurrency;
- (void)_waitForMessageWindow;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (double)remainingSessionTime;
- (void)setCanRestart:(BOOL)a0;

@end
