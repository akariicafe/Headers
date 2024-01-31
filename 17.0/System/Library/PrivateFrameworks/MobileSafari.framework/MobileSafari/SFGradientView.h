@class CAGradientLayer;

@interface SFGradientView : UIView

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;

+ (Class)layerClass;
+ (id)standardGaussianGradientView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithColors:(id)a0 locations:(id)a1;

@end
