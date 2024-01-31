@interface PaperKit.TextStyleEditingController : NSObject <PaperKit.ValueEditingViewControllerDelegate, UIFontPickerViewControllerDelegate, UIColorPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ textStyleEditingView;
    void /* unknown type, empty encoding */ displayAttributes;
    void /* unknown type, empty encoding */ isCompactUI;
    void /* unknown type, empty encoding */ isColorPickerPresented;
}

- (id)init;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)fontPickerViewControllerDidPickFont:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)colorPickerViewController:(id)a0 didSelectColor:(id)a1 continuously:(BOOL)a2;
- (void)colorPickerViewControllerDidFinish:(id)a0;
- (void)didTapBoldTextStyle;
- (void)didTapColorSwatchWithSender:(id)a0;
- (void)didTapFontButton;
- (void)didTapFontSizeButton;
- (void)didTapItalicTextStyle;
- (void)didTapStrikethroughTextStyle;
- (void)didTapUnderlineTextStyle;
- (void)textAlignmentControlValueChanged;
- (void)valueEditingViewController:(id)a0 didChangeValue:(long long)a1;
- (void)valueEditingViewController:(id)a0 didFinishChangingValue:(long long)a1;
- (void)valueEditingViewController:(id)a0 didStartChangingValue:(long long)a1;

@end
