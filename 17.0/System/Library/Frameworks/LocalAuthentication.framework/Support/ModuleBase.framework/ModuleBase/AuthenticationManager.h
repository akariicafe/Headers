@class NSMutableArray, AuthenticationInProgress;

@interface AuthenticationManager : NSObject {
    id /* block */ _completionHandler;
    NSMutableArray *_idleBlocks;
}

@property (readonly, nonatomic) AuthenticationInProgress *pendingAuthentication;
@property (readonly, nonatomic) AuthenticationInProgress *runningAuthentication;

+ (id)sharedInstance;

- (id)init;
- (id)findMechanismForEvent:(long long)a0 mustBeRunning:(BOOL)a1 plugin:(id)a2;
- (void)runWhenIdle:(id /* block */)a0;
- (void)authenticateForPolicy:(long long)a0 constraintData:(id)a1 internalInfo:(id)a2 uiDelegate:(id)a3 originator:(id)a4 mechanism:(id)a5 reply:(id /* block */)a6;
- (id)_cancelationError;
- (void)_runIdleBlocksNow;
- (void)cancelWithError:(id)a0 originatorId:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)runningMechanism;
- (void).cxx_destruct;
- (void)_runIdleBlocks;
- (BOOL)canStartAuthenticationWithPolicy:(long long)a0;
- (id)_invalidationError;
- (void)_runAuthentication:(id)a0;

@end
