@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CLBMobileKeybagManager : NSObject <MobileKeybagManager> {
    NSDictionary *_lockedState;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    int _keybagStatusChangedToken;
    int _firstUnlockToken;
    NSMutableArray *_stateChangedCallbackBlocks;
    NSMutableArray *_firstUnlockCallbackBlocks;
}

@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic) long long currentState;
@property (readonly, nonatomic) double backOffTime;
@property (readonly, nonatomic) unsigned long long failedAttemptCount;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void).cxx_destruct;
- (void)_handleFirstUnlock;
- (void)_handleKeybagStatusChanged;
- (void)_queue_updateLockedState;
- (void)registerFirstUnlockBlock:(id /* block */)a0;
- (void)registerLockStateChangedBlock:(id /* block */)a0;
- (BOOL)unlockWithPasscode:(id)a0 error:(id *)a1;

@end
