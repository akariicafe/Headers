@class PKRemotePaymentSetupViewController, _UIAsyncInvocation, PKPaymentSetupRequest, UIActivityIndicatorView, UILabel, UIButton;
@protocol PKPaymentSetupRequestViewControllerDelegate;

@interface PKPaymentSetupViewController : UIViewController {
    PKRemotePaymentSetupViewController *_remoteVC;
    PKPaymentSetupRequest *_paymentSetupRequest;
    _UIAsyncInvocation *_remoteVCRequest;
    UIActivityIndicatorView *_spinner;
    UILabel *_loadingLabel;
    UIButton *_cancelButton;
    BOOL _explicitPresentationStyle;
}

@property (weak, nonatomic) id<PKPaymentSetupRequestViewControllerDelegate> delegate;
@property (nonatomic) long long presentationStyle;

+ (void)paymentSetupFeaturesForConfiguration:(id)a0 completion:(id /* block */)a1;
+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)loadView;
- (id)childViewControllerForStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarHidden;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (long long)modalTransitionStyle;
- (id)initWithCoder:(id)a0;
- (id)initWithPaymentSetupRequest:(id)a0;
- (void)_setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;
- (void)_cancelTapped;
- (void)_hideLoadingContent;
- (void)didFinishWithPasses:(id)a0 error:(id)a1;
- (void)updateModalPresentationStyle;

@end
