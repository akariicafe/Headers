@class FKSuggestionsOrderBanner;

@interface SGWalletOrderSuggestionHelpers : NSObject {
    FKSuggestionsOrderBanner *_banner;
}

- (id)attributedSubtitle;
- (void).cxx_destruct;
- (id)merchantName;
- (id)initWithOrderData:(id)a0;
- (id)orderDeepLink;
- (id)orderPreviewControllerForURL:(id)a0 completion:(id /* block */)a1;
- (void)saveOrderForURL:(id)a0 completion:(id /* block */)a1;
- (id)walletLogo;

@end
