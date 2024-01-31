@class NSLayoutYAxisAnchor;

@interface SeymourUI.IndexLabel : UIView {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ background;
    void /* unknown type, empty encoding */ textStyle;
    void /* unknown type, empty encoding */ labelCenterYConstraint;
    void /* unknown type, empty encoding */ index;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)textSizeUpdated:(id)a0;

@end
