@class UIView;

@interface CUPresentationController : UIPresentationController {
    UIView *_dimmingView;
}

- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;

@end
