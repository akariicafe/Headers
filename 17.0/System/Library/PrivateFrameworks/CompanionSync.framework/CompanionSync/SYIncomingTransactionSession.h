@class SYChangeMessage, NSObject;
@protocol OS_os_activity;

@interface SYIncomingTransactionSession : SYSession {
    NSObject<OS_os_activity> *_sessionActivity;
    SYChangeMessage *_message;
    id /* block */ _completion;
    BOOL canRestart;
    BOOL canRollback;
    unsigned int state;
}

- (unsigned long long)protocolVersion;
- (BOOL)isSending;
- (BOOL)wasCancelled;
- (void)start:(id /* block */)a0;
- (unsigned int)state;
- (void)setState:(unsigned int)a0;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (void)_sendComplete;
- (BOOL)isResetSync;
- (void)setCanRollback:(BOOL)a0;
- (void)_sendCancelled;
- (void)_sendChanges;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (void)didCompleteSession;
- (id)initWithService:(id)a0 transaction:(id)a1 completion:(id /* block */)a2;
- (void)setCanRestart:(BOOL)a0;

@end
