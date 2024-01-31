@class NSArray, MFComposeRecipientTextView;

@interface _MFAtomTextView : UITextView {
    unsigned long long _textStorageEditingDepth;
}

@property (readonly) NSArray *atoms;
@property (weak) MFComposeRecipientTextView *hostRecipientView;

- (id)textStylingAtPosition:(id)a0 inDirection:(long long)a1;
- (void)_handleKeyUIEvent:(id)a0;
- (void)cut:(id)a0;
- (void)makeTextWritingDirectionLeftToRight:(id)a0;
- (void)makeTextWritingDirectionRightToLeft:(id)a0;
- (id)undoManager;
- (id)selectionRectsForRange:(id)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)resignFirstResponder;
- (void)copy:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)becomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)paste:(id)a0;
- (long long)baseWritingDirection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)enumerateAtoms:(id /* block */)a0;
- (BOOL)_delegateSupportsKeyboardEvents;
- (void)batchTextStorageUpdates:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertGlyphRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enumerateAtomAttachments:(id /* block */)a0;
- (void)enumerateAtomsInCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBlock:(id /* block */)a1;
- (BOOL)isEditingTextStorage;

@end
