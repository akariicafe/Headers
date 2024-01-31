@class BKDevice, NSObject;
@protocol OS_dispatch_queue;

@interface BBBiometricResource : NSObject {
    BOOL _isPasscodeSet;
    BOOL _isBiometricUnlockAllowed;
    BOOL _hasEnrolledPearlIdentities;
    BKDevice *_pearlDevice;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) BOOL hasPearlCapability;
@property (readonly, nonatomic) BOOL isPearlEnabledAndEnrolled;

- (id)initWithQueue:(id)a0;
- (void)_registerForBKEnrollmentChange;
- (void)dealloc;
- (void)_updateIsPasscodeSet;
- (void)_unregisterForBiometricUnlockAllowedChange;
- (void)_unregisterForBKEnrollmentChange;
- (void)_updateIsBiometricUnlockAllowed;
- (void)_registerForPasscodeChange;
- (void)_registerForBiometricUnlockAllowedChange;
- (void).cxx_destruct;
- (void)_updateHasEnrolledPearlIdentities;

@end
