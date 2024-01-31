@class UIView;

@interface SMUGradientBackedLabelView : UIView {
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ gradientView;
}

@property (nonatomic, readonly) UIView *viewForFirstBaselineLayout;
@property (nonatomic, readonly) UIView *viewForLastBaselineLayout;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
