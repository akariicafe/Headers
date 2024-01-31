@class NSString, BYFlowSkipController, BYPaneFeatureAnalyticsManager;
@protocol BYCapabilities;

@interface BFFFinishSetupBiometricAndPasscodeController : NSObject <UIPopoverPresentationControllerDelegate, BFFPasscodeViewControllerDelegate, BFFFinishSetupFlowControlling> {
    NSString *_flowSkipIdentifier;
}

@property (copy, nonatomic) NSString *passcode;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) id<BYCapabilities> capabilities;
@property (retain, nonatomic) BYFlowSkipController *flowSkipController;
@property (retain, nonatomic) BYPaneFeatureAnalyticsManager *paneFeatureAnalyticsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)a0;
- (id)viewControllerWithCompletion:(id /* block */)a0;
- (void)passcodeViewController:(id)a0 didFinishWithPasscodeCreation:(id)a1;
- (BOOL)passcodeViewControllerAllowSkip:(id)a0;
- (id)passcodeViewControllerCustomFirstEntryInstructions:(id)a0;
- (void)_userDidTapPasscodeCancelButton:(id)a0;
- (id)createViewControllerWithPasscode:(id)a0 completion:(id /* block */)a1;
- (id)initWithFlowSkipIdentifier:(id)a0;
- (id)preconditionViewControllerWithCompletion:(id /* block */)a0;

@end
