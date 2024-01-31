@class BKDevice, NSObject;
@protocol OS_dispatch_queue;

@interface UNCBiometricResource : NSObject {
    BOOL _isPasscodeSet;
    BOOL _isBiometricUnlockAllowed;
    BOOL _hasEnrolledPearlIdentities;
    NSObject<OS_dispatch_queue> *_queue;
    BKDevice *_pearlDevice;
}

@property (readonly, nonatomic) BOOL hasPearlCapability;
@property (readonly, nonatomic) BOOL isPearlEnabledAndEnrolled;

- (void)_registerForBKEnrollmentChange;
- (id)init;
- (void)dealloc;
- (void)_updateIsPasscodeSet;
- (void)_unregisterForBiometricUnlockAllowedChange;
- (void)_unregisterForBKEnrollmentChange;
- (void)_updateIsBiometricUnlockAllowed;
- (void)_registerForPasscodeChange;
- (void)_registerForBiometricUnlockAllowedChange;
- (void).cxx_destruct;
- (void)_updateHasEnrolledPearlIdentities;
- (void)_initializeBiometricKit;

@end
