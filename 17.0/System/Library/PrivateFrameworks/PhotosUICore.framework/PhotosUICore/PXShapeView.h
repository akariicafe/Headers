@class UIBezierPath, UIColor;

@interface PXShapeView : UIView

@property (copy, nonatomic) UIBezierPath *path;
@property (copy, nonatomic) UIColor *fillColor;
@property (copy, nonatomic) UIColor *strokeColor;

+ (Class)layerClass;

- (id)shapeLayer;
- (void).cxx_destruct;

@end
