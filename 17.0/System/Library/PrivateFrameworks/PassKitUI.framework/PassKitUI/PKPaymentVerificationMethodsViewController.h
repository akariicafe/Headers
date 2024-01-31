@class NSString, PKPaymentProvisioningController, PKPaymentSetupVerificationMethodTableController, PKPaymentVerificationController;
@protocol PKPaymentVerificationMethodsViewControllerFlowItemDelegate;

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupFieldsViewController <PKLoadingUIProviding> {
    PKPaymentSetupVerificationMethodTableController *_methodTableController;
    long long _verificationStatus;
}

@property (readonly, nonatomic) PKPaymentVerificationController *verificationController;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (nonatomic) BOOL alwaysPerformExternalVerificationInline;
@property (weak, nonatomic) id<PKPaymentVerificationMethodsViewControllerFlowItemDelegate> flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_configure;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)loadView;
- (id)presentationContext;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithVerificationController:(id)a0;
- (void)_handleVerificationFinished;
- (void)_loadVerificationOptions;
- (id)_newVerificationRequest;
- (id)_requestErrorAlertController:(id)a0;
- (void)_showSetupAssistantVerifyLaterAlertAndTerminate;
- (void)_terminateSetupFlow;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)dismissVerificationViewControllerAnimated:(BOOL)a0;
- (void)handleNextButtonTapped:(id)a0;
- (void)hideActivitySpinner;
- (id)initWithVerificationController:(id)a0 fieldsModel:(id)a1;
- (id)initWithVerificationController:(id)a0 verificationChannels:(id)a1;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)showActivitySpinnerWithTitle:(id)a0 subtitle:(id)a1;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;
- (id)visibleFieldIdentifiers;

@end
