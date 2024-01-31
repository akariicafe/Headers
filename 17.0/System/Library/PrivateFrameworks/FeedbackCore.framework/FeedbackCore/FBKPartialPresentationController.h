@class UIView;

@interface FBKPartialPresentationController : UIPresentationController

@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic) double height;

- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (long long)adaptivePresentationStyle;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (void)dismissPresentation:(id)a0;
- (BOOL)isPresentingFullScreen;

@end
