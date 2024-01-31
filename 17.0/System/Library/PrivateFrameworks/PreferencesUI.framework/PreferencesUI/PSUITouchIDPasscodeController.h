@class LAContext, NSString, NSObject, BiometricKit;
@protocol OS_dispatch_queue;

@interface PSUITouchIDPasscodeController : PSUIBiometricController <UIPopoverControllerDelegate, BiometricKitDelegate, BiometricKitUIEnrollResultDelegate, LAUIDelegate>

@property (retain, nonatomic) BiometricKit *highlightMatcher;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *highlightQueue;
@property (retain, nonatomic) LAContext *authContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)suspend;
- (void)statusMessage:(unsigned int)a0;
- (id)specifiers;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (void)matchResult:(id)a0;
- (void)enrollResult:(int)a0 bkIdentity:(id)a1;
- (void)_cancelMatching;
- (void)cancelModalFlow;
- (void)enrollBiometric;
- (id)_fingerprintSpecifierForIdentity:(id)a0;
- (void)_setupMatching;
- (void)addEnrollment:(id)a0;
- (void)biometricBindingDeleted;
- (id)biometricLogo;
- (id)biometricNameDescription;
- (void)cancelModalFlowWithCompletion:(id /* block */)a0;
- (void)configureBiometricTemplateMatching;
- (void)enrollmentControllerDidDismiss;
- (id)fingerprintSpecifiers;
- (id)headerForUseBiometricSection;
- (void)highlightFingerprintSpecifier:(id)a0;
- (BOOL)isBiometricIdentityMatchingGovernmentIDTemplate:(id)a0;
- (void)matchBiometricIdentitiesWithBiometricTemplates;
- (void)unhighlightFingerprintSpecifiersAfterDelay:(double)a0;
- (void)updateAddFingerprintSpecifier;
- (void)updateWithReplacedUUIDs:(id)a0;

@end
