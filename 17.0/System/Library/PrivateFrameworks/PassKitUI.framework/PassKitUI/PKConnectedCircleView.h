@class PKGradientVerticalConnector, UIView;

@interface PKConnectedCircleView : UIView

@property (retain, nonatomic) PKGradientVerticalConnector *topConnector;
@property (retain, nonatomic) PKGradientVerticalConnector *bottomConnector;
@property (retain, nonatomic) UIView *targetView;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_targetViewRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
