@interface SeymourUI.DownloadButton : UIControl {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ backgroundLayer;
    void /* unknown type, empty encoding */ contentLayer;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ iconLayer;
    void /* unknown type, empty encoding */ configurationFactory;
    void /* unknown type, empty encoding */ alphaAnimator;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ contentWidthConstraint;
    void /* unknown type, empty encoding */ fromWidth;
    void /* unknown type, empty encoding */ propertyAnimator;
    void /* unknown type, empty encoding */ currentState;
    void /* unknown type, empty encoding */ toWidth;
}

@property (nonatomic, readonly) long long accessibilityState;
@property (nonatomic) BOOL highlighted;

- (void)traitCollectionDidChange:(id)a0;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
