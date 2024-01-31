@class UIColor;

@interface PKConnectedCircleEmptyView : UIView

@property (readonly, nonatomic) UIColor *outerColor;
@property (readonly, nonatomic) UIColor *innerColor;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithOuterColor:(id)a0 innerColor:(id)a1;

@end
