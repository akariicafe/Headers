@class NSUndoManager, NSArray;

@interface PaperKit.TextBoxTextView : UITextView {
    void /* unknown type, empty encoding */ textBoxView;
    void /* unknown type, empty encoding */ formAutofillDelegate;
}

@property (nonatomic, readonly) NSUndoManager *undoManager;
@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) BOOL supportsImagePaste;

- (void)insertTextSuggestion:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)handleBackTabWithSender:(id)a0;
- (void)handleTabWithSender:(id)a0;

@end
