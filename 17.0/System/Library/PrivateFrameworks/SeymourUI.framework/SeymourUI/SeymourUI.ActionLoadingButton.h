@interface SeymourUI.ActionLoadingButton : UIButton {
    void /* unknown type, empty encoding */ currentState;
    void /* unknown type, empty encoding */ indefiniteSpinner;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ baseForegroundColor;
}

@property (nonatomic) BOOL highlighted;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)updateConfiguration;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;

@end
