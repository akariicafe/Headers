@class CAGradientLayer;

@interface PRXScrollShadowView : UIView {
    CAGradientLayer *_maskLayer;
}

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) unsigned long long edge;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
