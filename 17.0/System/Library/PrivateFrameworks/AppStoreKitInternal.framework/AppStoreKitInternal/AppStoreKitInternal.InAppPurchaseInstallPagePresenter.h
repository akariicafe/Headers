@interface AppStoreKitInternal.InAppPurchaseInstallPagePresenter : AppStoreKitInternal.BasePresenter {
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ sidepack;
    void /* unknown type, empty encoding */ fetchedPage;
    void /* unknown type, empty encoding */ pageUrl;
    void /* unknown type, empty encoding */ pageTitle;
    void /* unknown type, empty encoding */ didAutoDownload;
    void /* unknown type, empty encoding */ initialInstallState;
    void /* unknown type, empty encoding */ installAction;
    void /* unknown type, empty encoding */ offerDisplayProperties;
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ appStateController;
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ currentState;
}

- (void)offerButtonTapped;
- (void)didAcceptPreInstallOffer;

@end
