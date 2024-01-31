@class NSString, PKCancelingAnimatedTransitioningHandler, PKAddSecureElementPassConfiguration, _UIAsyncInvocation, PKRemoteAddSecureElementPassViewController;
@protocol PKAddSecureElementPassViewControllerDelegate;

@interface PKAddSecureElementPassViewController : UIViewController <PKRemoteAddSecureElementPassViewControllerProtocol, UIViewControllerTransitioningDelegate> {
    PKAddSecureElementPassConfiguration *_configuration;
    PKCancelingAnimatedTransitioningHandler *_animatedTransitionHandler;
    _Atomic BOOL _finished;
    _UIAsyncInvocation *_remoteVCRequest;
    PKRemoteAddSecureElementPassViewController *_remoteVC;
}

@property (weak, nonatomic) id<PKAddSecureElementPassViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canAddSecureElementPassWithConfiguration:(id)a0;
+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)dealloc;
- (id)interactionControllerForPresentation:(id)a0;
- (void)viewWillLayoutSubviews;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (long long)modalPresentationStyle;
- (void)loadView;
- (id)childViewControllerForStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarHidden;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (long long)modalTransitionStyle;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;
- (void)_handleCanceledPresentationWithPresentingViewController:(id)a0;
- (void)didFinishWithPass:(id)a0 error:(id)a1;
- (void)didFinishWithPasses:(id)a0 error:(id)a1;
- (void)loadRemoteViewController;
- (void)setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;

@end
