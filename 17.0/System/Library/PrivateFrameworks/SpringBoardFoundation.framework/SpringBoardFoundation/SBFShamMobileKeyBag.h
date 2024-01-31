@class NSData, SBFMutableMobileKeyBagState, NSObject;
@protocol OS_dispatch_queue;

@interface SBFShamMobileKeyBag : NSObject {
    float _timeScaleFactor;
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_queue_correctPasscode;
    SBFMutableMobileKeyBagState *_queue_state;
    unsigned long long _queue_escrowState;
    float _queue_escrowCountTotal;
    float _queue_escrowCountDelta;
    NSData *_queue_trialPasscode;
}

+ (id)shamKeyBagWithRecoveryRequired:(BOOL)a0 correctPasscode:(id)a1;
+ (id)shamKeyBagWithRecoveryRequired:(BOOL)a0 recoveryPossible:(BOOL)a1 timeScaleFactor:(float)a2 correctPasscode:(id)a3;

- (id)state;
- (void)lock;
- (void)waitForUnlockWithTimeout:(float)a0;
- (void).cxx_destruct;
- (BOOL)beginRecovery:(id)a0 error:(id *)a1;
- (id)extendedState;
- (void)_queue_initializeSecretChangeMachine:(id)a0;
- (void)_queue_stepSecretChangeMachine;
- (long long)_simplifiedLockStateForLockState:(long long)a0;
- (void)createStashBag:(id)a0 skipSEKeepUserDataOperation:(BOOL)a1 completion:(id /* block */)a2;
- (void)createStashBag:(id)a0 skipSEKeepUserDataOperation:(BOOL)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (id)initWithRecoveryRequired:(BOOL)a0 correctPasscode:(id)a1;
- (id)initWithRecoveryRequired:(BOOL)a0 recoveryPossible:(BOOL)a1 timeScaleFactor:(float)a2 correctPasscode:(id)a3;

@end
