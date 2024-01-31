@class SFAccountPickerViewController, NSString, NSArray, NSURL, _SFAuthenticationContext, WBSGlobalFrameIdentifier, _ASIncomingCallObserver, _ASCredentialAuthenticationViewController, WBSAuthenticationServicesAgentProxy, RTIDocumentTraits;

@interface SFPasswordPickerServiceViewController : SFPasswordServiceViewController <SFAccountPickerViewControllerSystemAutoFillDelegate, SFCredentialProviderExtensionManagerObserver, _ASCredentialListViewControllerDelegate, _ASCredentialAuthenticationViewControllerDelegate, UIPresentationControllerDelegatePrivate, _SFAuthenticationClient, _SFAuthenticationContextDelegate, SFPasswordPickerServiceViewControllerProtocol> {
    _ASCredentialAuthenticationViewController *_externalCredentialViewController;
    WBSAuthenticationServicesAgentProxy *_authenticationServicesAgentProxy;
    SFAccountPickerViewController *_accountPickerViewController;
    BOOL _presentInPopover;
    BOOL _hasAuthenticationForOtherPasswords;
    NSURL *_webViewURL;
    _SFAuthenticationContext *_context;
    NSString *_remoteAppID;
    NSString *_remoteLocalizedAppName;
    NSString *_remoteUnlocalizedAppName;
    NSArray *_externallyVerifiedAssociatedDomains;
    double _authenticationGracePeriod;
    WBSGlobalFrameIdentifier *_webFrameIdentifier;
    NSString *_credentialType;
    id /* block */ _presentCredentialsHandler;
    _ASIncomingCallObserver *_callObserver;
    RTIDocumentTraits *_systemAutoFillDocumentTraits;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (id)_context;
- (id)authenticationCustomUIProgressObserverForContext:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (id)authenticationMessageForContext:(id)a0;
- (id)passcodePromptForContext:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)displayMessageAsTitleForContext:(id)a0;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)a0;
- (void)_dismiss;
- (void)setRemoteAppID:(id)a0;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)a0;
- (void)setPageID:(id)a0 frameID:(id)a1 credentialType:(id)a2;
- (void)setRemoteLocalizedAppName:(id)a0;
- (void)setRemoteUnlocalizedAppName:(id)a0;
- (void)setWebViewURL:(id)a0;
- (id)_actionForPresentingPasswordManagerExtension:(id)a0;
- (void)_authenticateAndSetPresentCredentialsHandlerWithSavedAccountContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_authenticateToViewOtherPasswordsWithCompletion:(id /* block */)a0;
- (void)_fillCredential:(id)a0 needsAuthentication:(BOOL)a1;
- (BOOL)_isClientEntitledToDirectlyReceiveCredentials;
- (BOOL)_isConfiguredForSystemAutoFill;
- (void)_presentCredentialListForExtension:(id)a0;
- (void)_sendCredentialToClientAndDismiss:(id)a0;
- (void)accountPickerViewController:(id)a0 fillPasswordForSavedAccount:(id)a1;
- (void)accountPickerViewController:(id)a0 fillUsernameForSavedAccount:(id)a1;
- (void)accountPickerViewController:(id)a0 fillVerificationCode:(id)a1;
- (void)accountPickerViewController:(id)a0 fillVerificationCodeForSavedAccount:(id)a1;
- (void)authenticateToPresentInPopover:(BOOL)a0 savedAccountContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)contextRequiresSessionBasedAuthentication:(id)a0;
- (BOOL)contextShouldAllowMultipleBiometricFailures:(id)a0;
- (BOOL)contextShouldAllowPasscodeFallback:(id)a0;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithPasskeyAssertionCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithPasskeyRegistrationCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)credentialListViewController:(id)a0 didFinishWithCredential:(id)a1 completion:(id /* block */)a2;
- (void)credentialListViewController:(id)a0 didFinishWithPasskeyAssertionCredential:(id)a1 completion:(id /* block */)a2;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)a0;
- (void)setAuthenticationGracePeriod:(double)a0;
- (void)setSystemAutoFillDocumentTraits:(id)a0;

@end
