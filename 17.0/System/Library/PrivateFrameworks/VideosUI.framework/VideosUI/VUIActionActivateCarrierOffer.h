@class NSString, NSDictionary;

@interface VUIActionActivateCarrierOffer : VUIAction <AMSCarrierLinkTaskDelegate>

@property (retain, nonatomic) NSString *linkParams;
@property (retain, nonatomic) NSString *productCode;
@property (retain, nonatomic) NSDictionary *additionalParams;
@property (retain, nonatomic) NSString *notificationTitle;
@property (retain, nonatomic) NSString *notificationBody;
@property (retain, nonatomic) NSString *canonicalID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (void)handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleEngagementRequest:(id)a0 completion:(id /* block */)a1;
- (void)_activateOfferWithCompletionHandler:(id /* block */)a0;
- (id)_configurePreflightManager;
- (void)_handleActivationSuccessWithCompletionHandler:(id /* block */)a0;
- (void)_notifyDidEndActivationWithError:(id)a0;
- (void)_notifyDidStartActivation;
- (void)_showUIConfirmationForSubTransactionWithCompletion:(id /* block */)a0;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
