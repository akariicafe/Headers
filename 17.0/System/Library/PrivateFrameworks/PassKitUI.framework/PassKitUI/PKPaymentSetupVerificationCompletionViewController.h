@class UIColor, NSString, PKPaymentProvisioningController, PKPaymentVerificationObserver, PKTableHeaderView, PKPaymentSetupFooterView, PKActivityTableCell, PKPaymentVerificationController;
@protocol PKPaymentSetupVerificationCompletionViewControllerFlowItemDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupVerificationCompletionViewController : PKPaymentSetupTableViewController <UITextFieldDelegate, PKPaymentVerificationObserverDelegate, PKForegroundActiveArbiterObserver, PKLoadingUIProviding> {
    PKActivityTableCell *_verificationCodeCell;
    BOOL _verificationCodeAccepted;
    BOOL _resignedResponder;
    PKPaymentVerificationObserver *_verificationObserver;
    PKTableHeaderView *_tableHeader;
    PKPaymentSetupFooterView *_tableFooter;
    UIColor *_editableTextFieldColor;
    long long _mode;
    BOOL _offerOtherMethods;
    struct { BOOL foreground; BOOL foregroundActive; } _foregroundActiveState;
    BOOL _verificationAlreadyHandled;
}

@property (readonly, nonatomic) PKPaymentVerificationController *verificationController;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (weak, nonatomic) id<PKPaymentSetupVerificationCompletionViewControllerFlowItemDelegate> flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (void)viewWillLayoutSubviews;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)next:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textFieldDidChange:(id)a0;
- (void)verificationObserverDidTimeout:(id)a0;
- (void)verificationObserver:(id)a0 didObserveVerificationCode:(id)a1;
- (void)_handleNextStep;
- (void)_applicationDidBecomeActive;
- (void)_applicationWillResignActive;
- (void)_disableUI;
- (void)_enableUI;
- (void)_handlePassVerifiedNotification:(id)a0;
- (void)_showActivationError:(id)a0;
- (void)_showCompletedUIForPass:(id)a0;
- (void)_showCompletedUIWithNextHandler:(id /* block */)a0;
- (void)_startVerificationObserver;
- (void)_stopVerificationObserver;
- (void)_submitVerificationCode;
- (void)_terminateFlow;
- (id)initWithVerificationController:(id)a0 mode:(long long)a1 offerOtherMethods:(BOOL)a2;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)selectOtherVerificationMethod;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;

@end
