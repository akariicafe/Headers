@class NSString, SBFMobileKeyBag, SBSoftLockoutController;

@interface SBSoftwareUpdatePasscodePolicyManager : NSObject <SBSoftLockoutControllerDelegate> {
    long long _softwareUpdatePasscodePolicy;
    SBSoftLockoutController *_softLockoutController;
    SBFMobileKeyBag *_mobileKeyBag;
    BOOL _passcodeAuthenticationSuccessPending;
}

@property (nonatomic) long long softwareUpdatePasscodePolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)noteAuthenticationSucceededWithPasscode:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithLockScreenManager:(id)a0 mobileKeyBag:(id)a1;
- (BOOL)consumePendingUnlock;
- (void).cxx_destruct;
- (void)_authRequestCompleted:(id)a0;
- (long long)_effectiveSoftwareUpdatePasscodePolicy;
- (BOOL)requiresLockout;

@end
