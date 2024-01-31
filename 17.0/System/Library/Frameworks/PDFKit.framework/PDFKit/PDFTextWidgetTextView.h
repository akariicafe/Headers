@interface PDFTextWidgetTextView : UITextView

- (id)accessibilityLabel;
- (id)keyCommands;
- (void)insertTextSuggestion:(id)a0 completionHandler:(id /* block */)a1;
- (id)accessibilityParent;
- (id)accessibilityTitleUIElement;
- (void)handleBackTab;
- (void)handleTab;

@end
