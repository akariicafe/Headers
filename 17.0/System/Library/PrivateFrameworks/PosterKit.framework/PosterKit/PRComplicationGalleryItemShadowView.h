@class CALayer, CAShapeLayer;

@interface PRComplicationGalleryItemShadowView : UIView

@property (retain, nonatomic) CALayer *shadowLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;

- (void)layoutSublayersOfLayer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
