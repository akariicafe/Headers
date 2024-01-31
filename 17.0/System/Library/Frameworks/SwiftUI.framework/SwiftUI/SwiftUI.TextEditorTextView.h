@interface SwiftUI.TextEditorTextView : SwiftUI.UIKitTextView {
    void /* unknown type, empty encoding */ findContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_helper;
}

- (void).cxx_destruct;
- (BOOL)supportsTextReplacement;
- (id)initWithCoder:(id)a0;
- (void)findInteraction:(id)a0 didBeginFindSession:(id)a1;
- (void)findInteraction:(id)a0 didEndFindSession:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;

@end
