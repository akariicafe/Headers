@class NSString, SBSLockScreenServiceConnection;

@interface SBSLockScreenService : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    SBSLockScreenServiceConnection *_lock_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)launchEmergencyDialerWithCompletion:(id /* block */)a0;
- (void)lockDeviceAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)preventPasscodeLockWithReason:(id)a0;
- (id)preventSpuriousScreenUndimWithReason:(id)a0;
- (void)requestPasscodeCheckUIWithOptions:(id)a0 withCompletion:(id /* block */)a1;
- (void)requestPasscodeUnlockUIWithOptions:(id)a0 withCompletion:(id /* block */)a1;

@end
