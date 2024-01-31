@interface _PKAppleBalanceAddMoneyUIManager : NSObject <AMSURLProtocolDelegate, AMSPurchaseDelegate, NSURLSessionDelegate> {
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ activeViewController;
    void /* unknown type, empty encoding */ dtuModel;
}

- (id)init;
- (id)initWithAccount:(id)a0;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleEngagementRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (void)purchase:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (void)presentAMSDirectTopUpFrom:(id)a0 context:(long long)a1 webViewDelegate:(id)a2 completion:(id /* block */)a3;
- (void)presentAMSPromotionRedemptionViewFrom:(id)a0 promotionInfo:(id)a1 webViewDelegate:(id)a2;
- (void)presentAMSRedeemGiftcardFrom:(id)a0 webViewDelegate:(id)a1;
- (void)presentAddMoneyFrom:(id)a0 dtuConfiguration:(id)a1 inStoreToken:(id)a2;
- (void)presentAddMoneyInterstitialFrom:(id)a0 dtuConfiguration:(id)a1 inStoreToken:(id)a2;
- (void)presentDirectTopUpFrom:(id)a0 context:(long long)a1 configuration:(id)a2 promotion:(id)a3 completion:(id /* block */)a4;
- (void)presentInStoreTopUpFrom:(id)a0 context:(long long)a1 token:(id)a2;

@end
