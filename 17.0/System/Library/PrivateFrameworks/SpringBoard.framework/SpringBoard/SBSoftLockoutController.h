@class NSString, SBLockScreenManager;
@protocol SBSoftLockoutControllerDelegate, BSInvalidatable;

@interface SBSoftLockoutController : NSObject <CSExternalLockProviding, CSCoverSheetViewControllerObserver> {
    SBLockScreenManager *_lockScreenManager;
    unsigned long long _desiredBiometricLockoutState;
    id<BSInvalidatable> _passcodeRequiredAssertion;
}

@property (weak, nonatomic) id<SBSoftLockoutControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic) BOOL showPasscode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (void)reload;
- (void)dealloc;
- (id)initWithBiometricLockoutState:(unsigned long long)a0 lockScreenManager:(id)a1;
- (void)coverSheetViewControllerDidDismissPasscodeLockView:(id)a0;
- (void).cxx_destruct;
- (BOOL)unlockFromSource:(int)a0;
- (id)initWithBiometricLockoutState:(unsigned long long)a0;
- (void)_createPasscodeRequiredAssertion;
- (void)_clearPasscodeRequiredAssertion;

@end
