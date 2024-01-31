@interface NewsEngagement.EngagementInlineViewManager : NSObject <AMSUIMessageViewControllerDelegate> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ engagementBannerLayoutStore;
    void /* unknown type, empty encoding */ inlineDialogViewControllerFactory;
    void /* unknown type, empty encoding */ featureSettings;
}

- (void)messageViewController:(id)a0 didSelectActionWithDialogResult:(id)a1;
- (void)messageViewController:(id)a0 didFailWithError:(id)a1;
- (void)messageViewController:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (void)messageViewController:(id)a0 didLoadDialogRequest:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
