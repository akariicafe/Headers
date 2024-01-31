@class SFQueueingServiceViewControllerProxy, SFPasswordRemoteViewController;
@protocol SFPasswordPickerServiceViewControllerProtocol;

@interface _SFAppAutoFillPasswordViewController : _SFPasswordViewController {
    SFPasswordRemoteViewController *_remoteViewController;
    SFQueueingServiceViewControllerProxy<SFPasswordPickerServiceViewControllerProtocol> *_serviceProxy;
}

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_sceneDidEnterBackground:(id)a0;
- (void)setRemoteAppID:(id)a0;
- (id)_remoteViewController;
- (void)authenticateToPresentInPopover:(BOOL)a0 completion:(id /* block */)a1;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)a0;
- (void)setPageID:(id)a0 frameID:(id)a1 credentialType:(id)a2;
- (void)setRemoteLocalizedAppName:(id)a0;
- (void)setRemoteUnlocalizedAppName:(id)a0;
- (void)setWebViewURL:(id)a0;
- (id)_connectToServiceWithCompletion:(id /* block */)a0;
- (void)_setUpServiceProxyIfNeeded;
- (void)authenticateToPresentInPopover:(BOOL)a0 savedAccountContext:(id)a1 completion:(id /* block */)a2;
- (void)remoteViewController:(id)a0 fillPassword:(id)a1;
- (void)remoteViewController:(id)a0 fillUsername:(id)a1;
- (void)remoteViewController:(id)a0 fillVerificationCode:(id)a1;
- (void)remoteViewController:(id)a0 selectedCredential:(id)a1;
- (void)setAuthenticationGracePeriod:(double)a0;
- (void)setSystemAutoFillDocumentTraits:(id)a0;

@end
