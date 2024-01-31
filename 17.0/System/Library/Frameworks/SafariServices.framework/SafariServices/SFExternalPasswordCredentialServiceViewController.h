@class WBSGlobalFrameIdentifier, NSString, _ASCredentialAuthenticationViewController, _SFAuthenticationContext, WBSAuthenticationServicesAgentProxy;

@interface SFExternalPasswordCredentialServiceViewController : SFPasswordServiceViewController <SFCredentialProviderExtensionManagerObserver, _ASCredentialAuthenticationViewControllerDelegate, _SFAuthenticationClient, _SFAuthenticationContextDelegate, SFExternalPasswordCredentialServiceViewControllerProtocol> {
    _SFAuthenticationContext *_authenticationContext;
    _ASCredentialAuthenticationViewController *_extensionController;
    long long _completionAction;
    id /* block */ _getCredentialCompletion;
    WBSAuthenticationServicesAgentProxy *_authenticationServicesAgentProxy;
    WBSGlobalFrameIdentifier *_frameIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (id)authenticationCustomUIProgressObserverForContext:(id)a0;
- (id)authenticationMessageForContext:(id)a0;
- (id)passcodePromptForContext:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)displayMessageAsTitleForContext:(id)a0;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)a0;
- (void)_dismiss;
- (id)_authenticationContext;
- (void)autoFillWithCredentialIdentity:(id)a0;
- (void)_autoFillWithCredentialIdentity:(id)a0 pageID:(id)a1 frameID:(id)a2;
- (void)_finishRequestToAutoFillCredential:(id)a0 extensionShowedUI:(BOOL)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)_finishRequestToReturnCredential:(id)a0 extensionShowedUI:(BOOL)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)autoFillWithCredentialIdentity:(id)a0 pageID:(id)a1 frameID:(id)a2;
- (BOOL)contextRequiresSessionBasedAuthentication:(id)a0;
- (BOOL)contextShouldAllowMultipleBiometricFailures:(id)a0;
- (BOOL)contextShouldAllowPasscodeFallback:(id)a0;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithPasskeyAssertionCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithPasskeyRegistrationCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)getCredentialForCredentialIdentity:(id)a0 completion:(id /* block */)a1;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)a0;

@end
