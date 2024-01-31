@class UIImageView, CAShapeLayer, CALayer, NSDictionary;

@interface CAMLivePhotoBloomView : UIView

@property (readonly, nonatomic) UIImageView *_defaultImageView;
@property (readonly, nonatomic) CALayer *_ringContainer;
@property (readonly, nonatomic) CAShapeLayer *_outerRing;
@property (readonly, nonatomic) CAShapeLayer *_middleRing;
@property (readonly, nonatomic) CALayer *_innerRing;
@property (readonly, nonatomic) CALayer *_centerRing;
@property (readonly, nonatomic) NSDictionary *_layersByRing;
@property (readonly, nonatomic) NSDictionary *_shapeLayersByRing;
@property (nonatomic) BOOL isOff;

- (void)stopAnimating;
- (struct CGPath { } *)_pathForRing:(long long)a0 center:(struct CGPoint { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)animateBloom;
- (double)_diameterForRing:(long long)a0;
- (void)tintColorDidChange;
- (double)_strokeWidthForRing:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPath { } *)_pathForDiameter:(double)a0 center:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateDefaultImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateRingColors;

@end
