@interface PaperKit.LineEndControl : UIControl {
    void /* unknown type, empty encoding */ contentStackView;
    void /* unknown type, empty encoding */ regularCornerRadius;
    void /* unknown type, empty encoding */ noArrowButton;
    void /* unknown type, empty encoding */ oneArrowButton;
    void /* unknown type, empty encoding */ twoArrowButton;
    void /* unknown type, empty encoding */ axis;
    void /* unknown type, empty encoding */ useCapsuleStyle;
    void /* unknown type, empty encoding */ lineEnds;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)didTapNoArrowButton;
- (void)didTapOneArrowButton;
- (void)didTapTwoArrowButton;

@end
