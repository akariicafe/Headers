@interface PaperKit.SignatureStyleEditingController : NSObject <UIPopoverPresentationControllerDelegate, UIColorPickerViewControllerDelegate> {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ signatureStyleEditingView;
    void /* unknown type, empty encoding */ isColorPickerPresented;
}

- (id)init;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)colorPickerViewController:(id)a0 didSelectColor:(id)a1 continuously:(BOOL)a2;
- (void)colorPickerViewControllerDidFinish:(id)a0;
- (void)didTapColorSwatchWithSender:(id)a0;
- (void)didTapStrokeWidthControlWithSender:(id)a0;

@end
