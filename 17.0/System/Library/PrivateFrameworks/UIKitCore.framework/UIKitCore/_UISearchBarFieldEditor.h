@interface _UISearchBarFieldEditor : UIFieldEditor {
    struct { unsigned char inLayoutSubviews : 1; } _flags;
}

- (id)selectionRectsForRange:(id)a0;
- (BOOL)layoutManager:(id)a0 shouldSetLineFragmentRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 lineFragmentUsedRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 baselineOffset:(inout double *)a3 inTextContainer:(id)a4 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;
- (void)_updateTokenViews;
- (void)layoutManager:(id)a0 didCompleteLayoutForTextContainer:(id)a1 atEnd:(BOOL)a2;
- (void)activateEditor;
- (void)layoutSubviews;
- (void)deactivateEditorDiscardingEdits:(BOOL)a0;

@end
