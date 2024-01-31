@interface _TtCC8TipsNext30MiniTipUIPopoverViewController8Delegate : NSObject <UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ clientDelegate;
}

- (id)init;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)prepareForPopoverPresentation:(id)a0;
- (void)popoverPresentationController:(id)a0 willRepositionPopoverToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(id *)a2;
- (void)presentationControllerWillDismiss:(id)a0;
- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void).cxx_destruct;
- (id)presentationController:(id)a0 viewControllerForAdaptivePresentationStyle:(long long)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (void)presentationController:(id)a0 prepareAdaptivePresentationController:(id)a1;
- (void)presentationController:(id)a0 willPresentWithAdaptiveStyle:(long long)a1 transitionCoordinator:(id)a2;

@end
