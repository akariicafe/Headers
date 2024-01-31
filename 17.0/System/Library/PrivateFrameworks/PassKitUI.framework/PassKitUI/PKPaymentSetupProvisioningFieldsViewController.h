@class PKPaymentSetupFooterView, NSString, PKPaymentProvisioningController, RemoteUIController, CLInUseAssertion, UINotificationFeedbackGenerator;
@protocol PKPaymentProvisioningViewControllerDelegate;

@interface PKPaymentSetupProvisioningFieldsViewController : PKPaymentSetupFieldsViewController <UITextFieldDelegate, RemoteUIControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol> {
    PKPaymentSetupFooterView *_cardDetailsFooterView;
    RemoteUIController *_termsUIController;
    CLInUseAssertion *_CLInUse;
    UINotificationFeedbackGenerator *_cardAddedFeedbackGenerator;
}

@property (retain, nonatomic) PKPaymentProvisioningController *paymentProvisioningController;
@property (nonatomic) BOOL hideSetupLaterButton;
@property (copy, nonatomic) id /* block */ continueActionHandler;
@property (readonly, nonatomic, getter=isProvisioningHomeKey) BOOL provisioningHomeKey;
@property (nonatomic) BOOL ignoreProgressDescriptionUpdates;
@property (weak, nonatomic) id<PKPaymentProvisioningViewControllerDelegate> flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)footerView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)_cardDetailsFooterView;
- (void)addDifferentCard:(id)a0;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)displayTermsForTermsURL:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 setupFieldsModel:(id)a3;
- (id)initWithWebService:(id)a0 context:(long long)a1 setupDelegate:(id)a2 setupFieldsModel:(id)a3;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)resetRightBarButtonState;
- (void)setNotificationTextInFooterView:(id)a0;
- (void)setupLater:(id)a0;
- (void)showVerifiedUIForPass:(id)a0;
- (void)suppressFooterViewManualEntryButton;
- (void)suppressFooterViewSetupLaterButton;
- (void)suppressFooterViewSkipCardButton;
- (void)updateLocationAuthorization;

@end
