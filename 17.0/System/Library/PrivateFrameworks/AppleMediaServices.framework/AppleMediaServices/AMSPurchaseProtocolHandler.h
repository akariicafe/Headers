@class NSString;

@interface AMSPurchaseProtocolHandler : AMSURLProtocolHandler <NSURLSessionDelegate, AMSURLProtocolDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)reversePushSamplingPercentageForTask:(id)a0;

- (void)_syncDiversityBagFromResponse:(id)a0 purchaseInfo:(id)a1;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleEngagementRequest:(id)a2 completion:(id /* block */)a3;
- (id)_shouldRedirectWithPurchaseInfo:(id)a0 bag:(id)a1 urlAction:(id)a2 currentURL:(id)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (BOOL)_isEquivalentURL:(id)a0 toURL:(id)a1;
- (void)setSession:(id)a0;
- (BOOL)_shouldRetryForFailureAction:(id)a0 response:(id)a1 task:(id)a2 decodedObject:(id)a3 responseDictionary:(id)a4;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (id)_determineUpdatedBuyParamsFromResponse:(id)a0 urlAction:(id)a1 selectedAction:(id)a2 purchaseInfo:(id)a3;
- (void)reconfigureNewRequest:(id)a0 originalTask:(id)a1 redirect:(BOOL)a2 error:(id *)a3;
- (void)_updatePasswordSettingWithBuyParams:(id)a0 account:(id)a1;
- (void)_syncKeybagFromResponse:(id)a0 purchaseInfo:(id)a1;
- (void)handleCompletionWithTask:(id)a0 metrics:(id)a1 decodedObject:(id)a2 completionHandler:(id /* block */)a3;
- (void)_updateSubscriptionStatusFromBody:(id)a0 account:(id)a1;

@end
