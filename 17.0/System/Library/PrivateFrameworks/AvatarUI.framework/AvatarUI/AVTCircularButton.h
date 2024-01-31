@class UIColor, UIImage, CAShapeLayer;

@interface AVTCircularButton : UIButton

@property (retain, nonatomic) CAShapeLayer *clippingLayer;
@property (retain, nonatomic) UIColor *dynamicBackgroundColor;
@property (retain, nonatomic) UIImage *symbolImage;
@property (retain, nonatomic) UIColor *symbolTintColor;
@property (nonatomic) BOOL isUsingDynamicBackground;

- (void)setBackgroundColor:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)setupView;
- (double)circleLayerAlpha;
- (void)setSymbolImageWithName:(id)a0;
- (void)setSymbolImageWithName:(id)a0 configuration:(id)a1;
- (void)updateBackgroundColorIfNeeded;
- (void)updateDynamicBackgroundColor;

@end
