@interface SeymourUI.MarketingControllerHandler : NSObject <AMSUIMessageViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ actionHandler;
    void /* unknown type, empty encoding */ marketingHostedContentCoordinator;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ subscriptionToken;
}

- (void)messageViewController:(id)a0 didSelectActionWithDialogResult:(id)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)messageViewController:(id)a0 enqueueEventWithFields:(id)a1 inTopic:(id)a2;
- (void)messageViewController:(id)a0 didFailWithError:(id)a1;
- (void)messageViewController:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (void)messageViewControllerDidDismiss:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
