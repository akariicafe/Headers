@interface TeaUI.CollapsingButton : UIView {
    void /* unknown type, empty encoding */ animationDelegate;
    void /* unknown type, empty encoding */ isCollapsed;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ animatedTitleLabel;
    void /* unknown type, empty encoding */ collapsedSize;
    void /* unknown type, empty encoding */ isAnimating;
}

@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (id)init;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
