@class NSArray, CNComposeRecipientTextView;

@interface _CNAtomTextView : UITextView {
    unsigned long long _textStorageEditingDepth;
}

@property (readonly) NSArray *atoms;
@property (weak) CNComposeRecipientTextView *hostRecipientView;

+ (id)os_log;

- (id)textStylingAtPosition:(id)a0 inDirection:(long long)a1;
- (void)cut:(id)a0;
- (void)makeTextWritingDirectionLeftToRight:(id)a0;
- (void)makeTextWritingDirectionRightToLeft:(id)a0;
- (id)undoManager;
- (id)selectionRectsForRange:(id)a0;
- (void)rightArrowPressed;
- (void)leftArrowPressed;
- (BOOL)resignFirstResponder;
- (void)copy:(id)a0;
- (id)keyCommands;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)becomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)paste:(id)a0;
- (long long)baseWritingDirection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)enumerateAtoms:(id /* block */)a0;
- (void)batchTextStorageUpdates:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertGlyphRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enumerateAtomAttachments:(id /* block */)a0;
- (void)enumerateAtomsInCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBlock:(id /* block */)a1;
- (BOOL)isEditingTextStorage;
- (BOOL)notifyDelegateWithVoidSelector:(SEL)a0;
- (void)commaPressed;
- (void)downArrowPressed;
- (void)escKeyPressed;
- (BOOL)hostRecipientViewHasSearchResults;
- (BOOL)hostRecipientViewHasSearchTextOrTokensAndNoSearchResults;
- (BOOL)notifyDelegateWithBooleanSelector:(SEL)a0;
- (BOOL)notifyDelegateWithSelector:(SEL)a0 checkReturnValue:(BOOL)a1;
- (void)returnPressed;
- (void)tabPressed;
- (void)upArrowPressed;

@end
