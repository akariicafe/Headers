@interface NewsUI2.ModalCardPresentationController : UIPresentationController {
    void /* unknown type, empty encoding */ effectView;
    void /* unknown type, empty encoding */ observation;
    void /* unknown type, empty encoding */ useBlurEffect;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameOfPresentedViewInContainerView;

- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (void)dismissModal;

@end
