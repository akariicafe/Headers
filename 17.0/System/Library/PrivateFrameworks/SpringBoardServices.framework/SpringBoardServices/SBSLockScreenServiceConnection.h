@class NSCountedSet, BSServiceConnection;

@interface SBSLockScreenServiceConnection : NSObject {
    BSServiceConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSCountedSet *_lock_preventPasscodeLockReasons;
    NSCountedSet *_lock_preventSpuriousScreenUndimReasons;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)launchEmergencyDialerWithCompletion:(id /* block */)a0;
- (void)lockDeviceAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)preventPasscodeLockWithReason:(id)a0;
- (id)preventSpuriousScreenUndimWithReason:(id)a0;
- (void)requestPasscodeCheckUIWithOptions:(id)a0 withCompletion:(id /* block */)a1;
- (void)requestPasscodeUnlockUIWithOptions:(id)a0 withCompletion:(id /* block */)a1;

@end
