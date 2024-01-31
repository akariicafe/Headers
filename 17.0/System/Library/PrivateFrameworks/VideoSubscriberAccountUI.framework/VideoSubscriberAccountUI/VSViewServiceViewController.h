@class NSString, UINavigationController, VSTopShelfPurger, NSOperationQueue, VSRemoteNotifier, VSPersistentStorage, VSPreferences, VSAuditToken, VSOptional, VSRestrictionsCenter;

@interface VSViewServiceViewController : UIViewController <VSViewServiceProtocol, VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate>

@property (retain, nonatomic) VSPersistentStorage *storage;
@property (retain, nonatomic) VSRestrictionsCenter *restrictionsCenter;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) VSTopShelfPurger *topShelfPurger;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) VSOptional *currentRequest;
@property (retain, nonatomic) VSOptional *currentRequestID;
@property (nonatomic, getter=isPresentedInHost) BOOL presentedInHost;
@property (nonatomic, getter=isIdentityProviderPickerRequired) BOOL identityProviderPickerRequired;
@property (nonatomic) BOOL didAuthenticateAccount;
@property (retain, nonatomic) UINavigationController *navController;
@property (copy, nonatomic) VSAuditToken *auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (void)_willAppearInRemoteViewController;
- (void)_performRequest:(id)a0 withIdentifier:(id)a1;
- (void)_request:(id)a0 didFailWithError:(id)a1;
- (void)_viewControllerWasDismissed;
- (void)_completeRequest:(id)a0 withResponse:(id)a1;
- (void)_completeRequestWithResponse:(id)a0;
- (void)_completeRequestWithResponse:(id)a0 fromIdentityProvider:(id)a1;
- (void)_determinePreAuthAppIsAuthorized:(id)a0 completion:(id /* block */)a1;
- (void)_didCancelRequest;
- (void)_didDetermineIdentityProvider:(id)a0 withPickerViewController:(id)a1;
- (void)_dismissInHostIfNecessary;
- (id)_identityProviderRequestForViewServiceRequest:(id)a0 withAccount:(id)a1;
- (void)_performRequestInternal:(id)a0 withID:(id)a1 identityProviders:(id)a2 accounts:(id)a3 currentStorefrontCode:(id)a4 allStorefronts:(id)a5;
- (void)_performRequestWithIdentityProvider:(id)a0 account:(id)a1;
- (void)_presentInHostIfNecessary;
- (void)_requestDidFailWithError:(id)a0;
- (void)_showIdentityProviderPickerViewControllerWithIdentityProviders:(id)a0 currentStorefrontCode:(id)a1 allStorefronts:(id)a2;
- (id)_viewControllerHost;
- (id)_viewServiceResponseWithIdentityProviderResponse:(id)a0;
- (void)dismissIdentityProviderViewController:(id)a0;
- (void)identityProviderPickerViewController:(id)a0 didPickIdentityProvider:(id)a1;
- (void)identityProviderPickerViewControllerDidCancel:(id)a0;
- (void)identityProviderPickerViewControllerDidPickAdditionalIdentityProviders:(id)a0;
- (void)identityProviderViewController:(id)a0 didAuthenticateAccount:(id)a1 forRequest:(id)a2;
- (void)identityProviderViewController:(id)a0 didFinishRequest:(id)a1 withResult:(id)a2;
- (void)identityProviderViewControllerDidCancel:(id)a0;
- (void)identityProviderViewControllerDidFinishLoading:(id)a0;

@end
