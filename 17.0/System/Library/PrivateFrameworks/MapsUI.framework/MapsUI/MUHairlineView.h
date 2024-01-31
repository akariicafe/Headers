@class NSLayoutConstraint;

@interface MUHairlineView : MKHairlineView {
    double _intrinsicThickness;
}

@property (retain, nonatomic) NSLayoutConstraint *leadingMarginConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingMarginConstraint;
@property (nonatomic) BOOL vertical;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateIntrinsicThicknessForDisplayScale;
- (void).cxx_destruct;
- (void)customInit;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
