@class _PKAppleBalanceAddMoneyUIManager;

@interface PKAppleBalanceAddMoneyUIManager : NSObject {
    _PKAppleBalanceAddMoneyUIManager *_manager;
}

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (void)presentAMSRedeemGiftcardFromViewController:(id)a0 webViewDelegate:(id)a1;
- (void)presentAddMoneyFromViewController:(id)a0 dtuConfiguration:(id)a1 inStoreToken:(id)a2;
- (void)presentAddMoneyInterstitialFromViewController:(id)a0 dtuConfiguration:(id)a1 inStoreToken:(id)a2;
- (void)presentDirectTopUpFromViewController:(id)a0 context:(long long)a1 configuration:(id)a2 promotion:(id)a3 completion:(id /* block */)a4;
- (void)presentInStoreTopUpFromViewController:(id)a0 context:(long long)a1 token:(id)a2;

@end
