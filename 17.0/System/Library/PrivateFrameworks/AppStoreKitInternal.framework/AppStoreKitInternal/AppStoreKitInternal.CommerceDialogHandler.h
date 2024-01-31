@interface AppStoreKitInternal.CommerceDialogHandler : NSObject <ASDNotificationCenterDialogObserver> {
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ presentingViewController;
    void /* unknown type, empty encoding */ sheetPresentationViewController;
}

- (id)init;
- (void)handleAuthenticateRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleEngagementRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)handleViewPresentationRequest:(id)a0 resultHandler:(id /* block */)a1;

@end
