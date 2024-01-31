@class UIColor, CALayer;

@interface _HKLegendDot : UIView

@property (retain, nonatomic) UIColor *dotColor;
@property (retain, nonatomic) UIColor *innerDotColor;
@property (retain, nonatomic) CALayer *innerDotLayer;

- (void)layoutSublayersOfLayer:(id)a0;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;

@end
