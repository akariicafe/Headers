@class _SYMessageTimerTable, _SYCountedSemaphore, NSObject;
@protocol OS_dispatch_source, OS_os_activity, OS_dispatch_queue;

@interface SYOutgoingDeltaTransactionSession : SYSession {
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_os_activity> *_sessionActivity;
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;
    _SYCountedSemaphore *_changeConcurrencySemaphore;
    NSObject<OS_os_activity> *_changeWaitActivity;
    _SYMessageTimerTable *_timers;
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
- (void)setCanRollback:(BOOL)a0;
- (void)_installStateListener;
- (void)_messageExpiredWithSeqno:(unsigned long long)a0 identifier:(id)a1;
- (void)_notifySessionComplete;
- (void)_peerProcessedMessageWithIdentifier:(id)a0 userInfo:(id)a1;
- (void)_processNextState;
- (void)_sendSyncBatch:(id)a0 nextState:(unsigned int)a1;
- (void)_sentMessageWithIdentifier:(id)a0 userInfo:(id)a1;
- (void)_setMessageTimerForSeqno:(unsigned long long)a0;
- (void)_setStateQuietly:(unsigned int)a0;
- (void)_setupChangeConcurrency;
- (void)_waitForMessageWindow;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (void)setCanRestart:(BOOL)a0;

@end
