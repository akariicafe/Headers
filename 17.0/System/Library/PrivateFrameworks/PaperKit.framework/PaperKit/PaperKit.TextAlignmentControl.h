@interface PaperKit.TextAlignmentControl : UIControl {
    void /* unknown type, empty encoding */ contentStackView;
    void /* unknown type, empty encoding */ regularCornerRadius;
    void /* unknown type, empty encoding */ maximumButtonSize;
    void /* unknown type, empty encoding */ minimumButtonSize;
    void /* unknown type, empty encoding */ leftAlignmentButton;
    void /* unknown type, empty encoding */ centerAlignmentButton;
    void /* unknown type, empty encoding */ rightAlignmentButton;
    void /* unknown type, empty encoding */ justifiedAlignmentButton;
    void /* unknown type, empty encoding */ axis;
    void /* unknown type, empty encoding */ useCapsuleStyle;
    void /* unknown type, empty encoding */ selectedTextAlignment;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)didTapCenterAlignmentButton;
- (void)didTapJustifiedAlignmentButton;
- (void)didTapLeftAlignmentButton;
- (void)didTapRightAlignmentButton;

@end
