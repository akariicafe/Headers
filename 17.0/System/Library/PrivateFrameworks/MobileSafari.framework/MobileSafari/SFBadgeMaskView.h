@class CAShapeLayer;

@interface SFBadgeMaskView : UIView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } badgeRect;
@property (readonly, nonatomic) CAShapeLayer *shapeLayer;

+ (Class)layerClass;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_updateShape;

@end
