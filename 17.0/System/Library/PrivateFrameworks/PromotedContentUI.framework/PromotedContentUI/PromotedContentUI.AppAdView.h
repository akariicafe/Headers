@interface PromotedContentUI.AppAdView : APPCPromotedContentView <ASCAdLockupViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_appView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topBorder;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomBorder;
}

- (void)adLockupView:(id)a0 didFailRequestWithError:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)adLockupView:(id)a0 didSelectOfferWithState:(id)a1;
- (id)metricsActivityForAdLockupView:(id)a0 toPerformActionOfOffer:(id)a1 inState:(id)a2;
- (id)metricsActivityForPresentingProductDetailsOfAdLockupView:(id)a0 inState:(id)a1;
- (void)adLockupViewDidFinishRequest:(id)a0;
- (void).cxx_destruct;
- (void)adLockupViewDidSelectAdMarker:(id)a0;
- (void)adLockupViewDidFinishScreenshotsFetchRequest:(id)a0;
- (void)adLockupViewDidInvalidateIntrinsicContentSize:(id)a0;
- (void)adLockupView:(id)a0 preprocessOffer:(id)a1 inState:(id)a2 completionBlock:(id /* block */)a3;
- (id)presentingViewControllerForAdLockupView:(id)a0;
- (void)adLockupViewDidCancelScreenshotsFetchRequest:(id)a0;

@end
