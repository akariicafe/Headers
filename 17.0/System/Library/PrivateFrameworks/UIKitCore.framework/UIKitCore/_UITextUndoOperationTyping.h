@class NSMutableAttributedString;

@interface _UITextUndoOperationTyping : _UIUndoTextOperation {
    struct _NSRange { unsigned long long location; unsigned long long length; } _replacementRange;
    NSMutableAttributedString *_attributedString;
}

- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inputController:(id)a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)undoRedo;
- (void).cxx_destruct;
- (BOOL)coalesceAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 textStorage:(id)a3;
- (BOOL)supportsCoalescing;

@end
