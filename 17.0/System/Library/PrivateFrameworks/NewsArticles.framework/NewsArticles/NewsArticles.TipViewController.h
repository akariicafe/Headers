@interface NewsArticles.TipViewController : AMSUIBubbleTipViewController <AMSUIMessageViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ requestFactory;
    void /* unknown type, empty encoding */ tipPresentationConfig;
    void /* unknown type, empty encoding */ startDate;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void)messageViewController:(id)a0 didSelectActionWithDialogResult:(id)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)messageViewController:(id)a0 didFailWithError:(id)a1;
- (void)messageViewController:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (void)messageViewController:(id)a0 didLoadDialogRequest:(id)a1;
- (void)messageViewControllerDidDismiss:(id)a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithRequest:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1 account:(id)a2;
- (id)initWithCoder:(id)a0;

@end
