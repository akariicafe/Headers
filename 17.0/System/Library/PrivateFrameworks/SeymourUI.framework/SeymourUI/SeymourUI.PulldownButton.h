@interface SeymourUI.PulldownButton : UIButton {
    void /* unknown type, empty encoding */ appearance;
    void /* unknown type, empty encoding */ attributedTitle;
    void /* unknown type, empty encoding */ textColor;
}

@property (nonatomic) BOOL highlighted;

- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;

@end
