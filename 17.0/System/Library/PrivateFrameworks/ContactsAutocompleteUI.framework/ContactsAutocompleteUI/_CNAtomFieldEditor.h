@interface _CNAtomFieldEditor : UITextView

- (void)cut:(id)a0;
- (id)undoManager;
- (void)_lookup:(id)a0;
- (id)selectionRectsForRange:(id)a0;
- (void)_share:(id)a0;
- (id)_hostView;
- (void)copy:(id)a0;
- (void)_define:(id)a0;
- (id)_textInputTraits;
- (id)textInputTraits;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)paste:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForScrollToVisible:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (id)_enclosingScrollView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertGlyphRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
