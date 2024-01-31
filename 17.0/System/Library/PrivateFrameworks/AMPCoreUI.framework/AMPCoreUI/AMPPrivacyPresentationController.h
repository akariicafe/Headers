@class NSString, UIView;

@interface AMPPrivacyPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) UIView *dimmingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (long long)adaptivePresentationStyle;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (id)presentationController:(id)a0 viewControllerForAdaptivePresentationStyle:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForTransitionViewInPresentationSuperview:(id)a0;
- (void)_prepareDimmingViewIfNecessary;
- (void)containerViewDidLayoutSubviews;
- (BOOL)shouldRemovePresentersView;

@end
