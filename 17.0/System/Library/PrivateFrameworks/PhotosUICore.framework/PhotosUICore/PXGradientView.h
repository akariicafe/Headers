@class NSArray, CAGradientLayer;

@interface PXGradientView : UIView

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x0; double x1; } startPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } endPoint;

+ (Class)layerClass;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateGradientLayerColors;

@end
