@class NSString, UIVisualEffectView, NSLayoutConstraint, UITapGestureRecognizer;

@interface AKAuthorizationContaineriPhoneViewController : AKAuthorizationContainerViewController <UIViewControllerTransitioningDelegate> {
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSLayoutConstraint *_rootViewHeightConstraint;
    NSLayoutConstraint *_rootViewTopConstraint;
}

@property (retain, nonatomic) UIVisualEffectView *blurBackgroundView;
@property (nonatomic) struct CGSize { double width; double height; } containerContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_handleTapGesture:(id)a0;
- (void)_delegate_authorizationContainerViewControllerDidDismiss;
- (BOOL)_delegate_authorizationContainerViewControllerShouldDismiss;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dismissalFrameForContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutContainerView:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutFrameForContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithRootViewController:(id)a0 authorizationContext:(id)a1;
- (void)setContainerContentSize:(struct CGSize { double x0; double x1; })a0 animated:(BOOL)a1;

@end
