@class UITextView, NSString, UISimpleTextPrintFormatter, NSLayoutConstraint, _TtC9QuickLook14QLTextDocument, UIPrintPageRenderer, NSAttributedString;

@interface QLTextItemViewController : QLItemViewController <UIFontPickerViewControllerDelegate, UIColorPickerViewControllerDelegate, UIPickerViewDataSource, UIPickerViewDelegate, UITextViewDelegate, QLPrintingProtocol> {
    NSAttributedString *_content;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) UISimpleTextPrintFormatter *printFormatter;
@property (readonly) UIPrintPageRenderer *pageRenderer;
@property BOOL isDocumentOpen;
@property (readonly, nonatomic) _TtC9QuickLook14QLTextDocument *textDocument;
@property (readonly, nonatomic) UITextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredWhitePointAdaptivityStyle;
- (void)viewDidLoad;
- (id)scrollView;
- (void).cxx_destruct;
- (void)fontPickerViewControllerDidPickFont:(id)a0;
- (id)printer;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)colorPickerViewController:(id)a0 didSelectColor:(id)a1 continuously:(BOOL)a2;
- (void)openDocumentWithCompletionHandler:(id /* block */)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)canSwipeToDismiss;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })customEdgeInsets;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;
- (void)buttonPressedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canClickToToggleFullscreen;
- (BOOL)canPinchToDismiss;
- (BOOL)canToggleFullScreen;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (id)registeredKeyCommands;
- (void)savePreviewEditedCopyWithCompletionHandler:(id /* block */)a0;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldRecognizeGestureRecognizer:(id)a0;
- (id)toolbarButtonsForTraitCollection:(id)a0;
- (BOOL)_documentAttributesContainTextColors:(id)a0;
- (BOOL)_isContentPotentiallySuspicious:(id)a0 context:(id)a1;
- (void)_keyboardWillAppear:(id)a0;
- (void)_keyboardWillDisappear:(id)a0;
- (void)_loadDocumentContent;
- (void)_saveDocumentContentIfNeeded;
- (void)_saveTextIfEdited:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)_saveTextIfEditedWithEditedCopy:(id)a0 shouldDismissAfterSaving:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_setupTextViewColorsWithDocumentAttributes:(id)a0;
- (void)_setupTextViewMarginsWithDocumentAttributes:(id)a0;
- (void)_setupTextViewWithDocumentAttributes:(id)a0;
- (id)_textInputShortcutsBarButtons;
- (void)_updateConstraintConstants:(BOOL)a0;
- (void)_updateViewConstraintsFromKeyboardAppearanceInfo:(id)a0 notificationName:(id)a1;
- (id)availableTextSizes;
- (void)closeDocumentWithCompletionHandler:(id /* block */)a0;
- (id)displayedDocumentURLForItem:(id)a0;
- (void)numberOfPagesWithSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)pdfDataForPageAtIndex:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (void)presentColorPicker;
- (void)presentFontPicker;
- (void)presentTextSizePicker;
- (void)provideCurrentPageAndVisibleRectWithCompletionHandler:(id /* block */)a0;
- (void)setUpDocumentWithItem:(id)a0;
- (void)setUpTextInputShortcutsBar;
- (BOOL)shouldAllowEditingContents;
- (BOOL)shouldEditByCreatingCopy;
- (void)textDocumentChangedRemotely:(id)a0;
- (void)textSizePickerDidCancel;
- (void)updateSelectionAttributesWithColor:(id)a0 oldColor:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 undoable:(BOOL)a3;
- (void)updateSelectionAttributesWithFont:(id)a0 oldFont:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 undoable:(BOOL)a3;
- (void)updateTextWithColor:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 undoable:(BOOL)a2;
- (void)updateTextWithColor:(id)a0 undoable:(BOOL)a1;
- (void)updateTextWithFont:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 undoable:(BOOL)a2;
- (void)updateTextWithFont:(id)a0 undoable:(BOOL)a1;
- (void)updateTypingAttributesWithFont:(id)a0 color:(id)a1;

@end
