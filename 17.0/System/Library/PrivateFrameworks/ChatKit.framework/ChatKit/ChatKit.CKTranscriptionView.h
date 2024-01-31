@interface ChatKit.CKTranscriptionView : UIView {
    void /* unknown type, empty encoding */ expansionState;
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ expansionButton;
    void /* unknown type, empty encoding */ didTapExpansionButton;
    void /* unknown type, empty encoding */ didResize;
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ textColor;
    void /* unknown type, empty encoding */ collapsedButtonColor;
    void /* unknown type, empty encoding */ expandedButtonColor;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)didToggleLineCountChange:(id)a0;

@end
