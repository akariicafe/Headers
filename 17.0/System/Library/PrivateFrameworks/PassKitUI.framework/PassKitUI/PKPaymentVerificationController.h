@class PKPassView, PKPaymentProvisioningController, NSString, UIImage, PKVerificationRequestRecord, PKPaymentWebService, PKPaymentPass, NSNumber;
@protocol PKPaymentVerificationControllerFlowDelegate, PKPaymentVerificationControllerDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKPaymentVerificationController : NSObject <UINavigationControllerDelegate, ASWebAuthenticationPresentationContextProviding> {
    NSString *_installedBankAppBundleID;
    NSString *_installedBankAppTitle;
    NSString *_inStoreBankAppTitle;
    NSNumber *_inStoreBankAppStoreID;
    UIImage *_passSnapshot;
    BOOL _bankAppNotFound;
}

@property (retain, nonatomic) PKPaymentPass *pass;
@property (weak, nonatomic) id<PKPaymentVerificationControllerDelegate> delegate;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (weak, nonatomic) id<PKPaymentVerificationControllerFlowDelegate> flowDelegate;
@property (readonly, nonatomic) PKPaymentWebService *webService;
@property (nonatomic) long long context;
@property (nonatomic) long long verificationContext;
@property (readonly, nonatomic) PKVerificationRequestRecord *verificationRecord;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (readonly) NSString *verificationTitleString;
@property (readonly) NSString *verificationBodyString;
@property (readonly) BOOL shouldDisabledVerificationButton;
@property (readonly) NSString *continueVerificationButtonTitle;
@property (readonly) NSString *alternateMethodButtonTitle;
@property (retain, nonatomic) PKPassView *passView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)_resetState;
- (void).cxx_destruct;
- (id)verificationURL;
- (unsigned long long)_channelType;
- (void)_accessBankVerificationURLAsAppClip;
- (void)_accessBankVerificationURLAsWebPage:(id)a0;
- (id)_bankAppName;
- (id)_bankAppStoreIDs;
- (void)_completeVerificationUsingBankApp;
- (id)_continueVerificationButtonTitleForBankAppChannel:(id)a0;
- (void)_didChangePresentation;
- (void)_downloadAndAddPassWithCompletion:(id /* block */)a0;
- (id)_formattedPhoneNumber:(id)a0 forTextMessage:(BOOL)a1;
- (void)_isAppClipVerificationURLWithCompletion:(id /* block */)a0;
- (void)_lookForBankAppIfNecessary;
- (id)_outboundCallPhoneNumber;
- (void)_presentVerificationViewController;
- (void)_presentVerificatonEntryCompletionViewController;
- (void)_queue_sharedPaymentWebServiceChanged;
- (void)_requestDelegatePresentationOfViewController:(id)a0;
- (void)_updateVerificationStatusToComplete;
- (id)_verificationBodyStringForBankAppChannel:(id)a0;
- (id)_verificationBodyStringForOutboundPhoneCallChannel:(id)a0;
- (void)_wrapViewControllerAndRequestDelegatePresentationOfView:(id)a0;
- (id)bankAppStoreID;
- (void)canPerformVerificationInline:(id /* block */)a0;
- (void)clearSelectedChannel;
- (void)completeVerificationUsingOutboundCall;
- (void)completeVerificationUsingURL;
- (void)continueVerification;
- (void)continueVerificationUsingMethods;
- (id)defaultVerificationBodyString;
- (void)goToPreviousStep;
- (id)initWithPaymentPass:(id)a0 passView:(id)a1 webService:(id)a2 context:(long long)a3 delegate:(id)a4 setupDelegate:(id)a5 verificationContext:(long long)a6;
- (id)initWithPaymentPass:(id)a0 webService:(id)a1 context:(long long)a2 verificationContext:(long long)a3;
- (BOOL)isBankAppInstalled;
- (void)launchBankApp;
- (id)passSnapshot;
- (void)performStoreLookupForBankAppWithCompletion:(id /* block */)a0;
- (void)performVerificationOptionsRequest:(id)a0 completion:(id /* block */)a1;
- (void)performVerificationUpdateRequest:(id)a0 completion:(id /* block */)a1;
- (id)presentationAnchorForWebAuthenticationSession:(id)a0;
- (void)retryCurrentStep;
- (void)selectOtherVerificationMethod;
- (void)setVerificationRecord:(id)a0;
- (void)sharedPaymentServiceChanged;
- (void)submitVerificationCode:(id)a0 completion:(id /* block */)a1;
- (id)verificationSecureURL;
- (id)verificationURLComponents;

@end
