@interface VisionHealthAppPlugin.RangeView : UIView {
    void /* unknown type, empty encoding */ range;
    void /* unknown type, empty encoding */ _value;
    void /* unknown type, empty encoding */ minimumFractionDigits;
    void /* unknown type, empty encoding */ maximumFractionDigits;
    void /* unknown type, empty encoding */ showsPositivePrefix;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
