@interface SwiftUI.PopoverPresentationDelegate : NSObject <UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (void)prepareForPopoverPresentation:(id)a0;
- (void)popoverPresentationController:(id)a0 willRepositionPopoverToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(id *)a2;
- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;

@end
