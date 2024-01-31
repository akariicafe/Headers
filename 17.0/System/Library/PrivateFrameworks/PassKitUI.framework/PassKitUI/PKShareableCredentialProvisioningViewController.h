@class NSString, NSArray, UIImage, PKAddShareablePassConfiguration, PKShareableCredentialsMessageComposeViewController, PKSharingPushProvisioningInvitation;
@protocol PKShareableCredentialProvisioningViewControllerCoordinator;

@interface PKShareableCredentialProvisioningViewController : PKPassShareRedemptionViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKShareableCredentialsMessageComposeViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentServiceDelegate, PKProvisioningFieldsUIRenderer> {
    long long _context;
    NSArray *_credentials;
    PKAddShareablePassConfiguration *_configuration;
    BOOL _isUnifiedAccessPass;
    BOOL _hasConfiguredCredential;
    NSString *_provisioningTemplateIdentifier;
    UIImage *_passThumbnailImage;
    PKShareableCredentialsMessageComposeViewController *_messageComposeViewController;
}

@property (weak, nonatomic) id<PKShareableCredentialProvisioningViewControllerCoordinator> coordinator;
@property (nonatomic) BOOL isRunningInForeground;
@property (retain, nonatomic) PKSharingPushProvisioningInvitation *invitation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)cancelButtonPressed;
- (void)setPassThumbnailImage:(id)a0;
- (void)_continueProvisioning;
- (void)_loadPassThumbnail;
- (id)_provisioningErrorWithNumberOfPassesFailed:(long long)a0 error:(id)a1;
- (void)_showExitingLostModeUI;
- (void)_startProvisioning;
- (void)_terminateSetupFlowWithPasses:(id)a0 error:(id)a1;
- (void)activationCodeDidChangeToCode:(id)a0;
- (void)continueButtonPressed;
- (void)didTransitionTo:(long long)a0 loading:(BOOL)a1;
- (void)didUpdateFieldModel;
- (id)initWithContext:(long long)a0 credentials:(id)a1 configuration:(id)a2;
- (void)messageComposeViewControllerDidFinishWithResult:(BOOL)a0;
- (void)showLoadingUI;
- (void)showStartingUI;
- (void)showSuccessUI;
- (void)showWithProvisioningError:(id)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;

@end
