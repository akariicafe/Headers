@class UITextFormattingViewControllerConfiguration, NSString, UIColorPickerViewController, NSData, UIFontPickerViewController, UIViewController;
@protocol UITextFormattingViewControllerDelegate, _UITextFormattingViewHostingImpl, _UITextFormattingViewControllerDelegate, UIResponderStandardEditActions;

@interface UITextFormattingViewController : UIViewController <UIColorPickerViewControllerDelegate, UIFontPickerViewControllerDelegate, _UITextFormattingRemoteViewControllerHost> {
    id<_UITextFormattingViewControllerDelegate> __delegate;
    double _keyboardSpace;
    BOOL _presentationSourceIsInputAssistantItem;
    BOOL _shouldDeferColorPickerPresentationToHost;
    UIViewController *_preferredFontPickerPresentationViewController;
    BOOL _shouldSkipStoppingKeyboardSuppressionOnDidDisappear;
    double _selectedFontSize;
    UIColorPickerViewController *_colorPicker;
    UIFontPickerViewController *_fontPicker;
    id<_UITextFormattingViewHostingImpl> _hostingImpl;
}

@property (retain, nonatomic, setter=_setChildViewController:) UIViewController *_childViewController;
@property (retain, nonatomic, setter=_setTextAttributesData:) NSData *_textAttributesData;
@property (weak, nonatomic) id<UIResponderStandardEditActions> inputController;
@property (readonly, copy, nonatomic) UITextFormattingViewControllerConfiguration *configuration;
@property (weak, nonatomic) id<UITextFormattingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_useSceneBackedTextFormatting;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_invalidateDetents;
- (void)setConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)fontPickerViewControllerDidPickFont:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)_alignJustified;
- (void)_toggleBoldface;
- (void)_alignCenter;
- (void)_alignLeft;
- (void)_alignRight;
- (void)_decreaseSize;
- (void)_handleKeyboardNotification:(id)a0;
- (void)_increaseSize;
- (void)_presentColorPicker:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selectedColor:(id)a1;
- (void)_presentFontPickerWithConfiguration:(id)a0 selectedFonts:(id)a1;
- (void)_presentationController:(id)a0 prepareAdaptivePresentationController:(id)a1;
- (id)_remoteSheet;
- (void)_sendUpdatesToInputController:(id)a0;
- (void)_setPresentationSourceIsInputAssistantItem:(BOOL)a0;
- (void)_setSelectedText:(id)a0;
- (void)_setShouldDeferColorPickerPresentation:(BOOL)a0;
- (void)_setShouldDeferFontPickerPresentationToViewController:(id)a0;
- (void)_setTextAttributes:(id)a0;
- (void)_startSuppressingKeyboardForTextFormatting;
- (void)_stopSuppressingKeyboardForTextFormatting;
- (void)_textFormattingDidFinish;
- (void)_textFormattingRequestsFirstResponderResignation;
- (void)_textFormattingRequestsFirstResponderRestoration;
- (void)_toggleItalics;
- (void)_toggleUnderline;
- (void)_updateRemoteConfiguration;
- (void)_updateTextAttributes:(id)a0;
- (void)colorPickerViewController:(id)a0 didSelectColor:(id)a1 continuously:(BOOL)a2;
- (void)colorPickerViewControllerDidFinish:(id)a0;
- (void)fontPickerViewControllerDidCancel:(id)a0;

@end
