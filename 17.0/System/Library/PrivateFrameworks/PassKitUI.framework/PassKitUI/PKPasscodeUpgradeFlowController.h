@class NSString, PKPaymentProvisioningController;
@protocol PKPasscodeUpgradeFlowRenderer, PKPaymentWebServiceTargetDeviceProtocol, PKPaymentSetupViewControllerDelegate;

@interface PKPasscodeUpgradeFlowController : NSObject <DevicePINControllerDelegate, PKNewDevicePasscodeViewControllerDelegate> {
    PKPaymentProvisioningController *_provisioningController;
    id /* block */ _completionHandler;
    long long _presentedViewControllerCount;
    id<PKPasscodeUpgradeFlowRenderer> _flowRenderer;
}

@property (readonly, weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;
@property (copy, nonatomic) id /* block */ setupLaterHandler;
@property (nonatomic) BOOL upgradeRequiredToAddNewPass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAcceptEnteredPIN:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_showPasscodeUpgradeExplanation;
- (void)_completeWithShouldContinue:(BOOL)a0 error:(id)a1;
- (BOOL)_isWatchTarget;
- (void)_showChangePasscodeFlow;
- (void)_showCurrentDevicePasscodeViewController;
- (void)_showNewDevicePasscodeViewControllerWithCurrentPasscode:(id)a0;
- (void)beginShowingViewController;
- (void)dismissPasscodeUpgradeFlow;
- (void)endedShowingViewController;
- (void)forceShowPasscodeUpgradeFlow;
- (id)initWithPaymentProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 flowRenderer:(id)a3 completionHandler:(id /* block */)a4;
- (void)newDevicePasscodeViewController:(id)a0 didFinishSettingPasscode:(BOOL)a1 withError:(id)a2;
- (void)showPasscodeUpgradeFlow;
- (void)showPasscodeUpgradeFlow:(BOOL)a0;

@end
