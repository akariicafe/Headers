@class FIUIShapeView;

@interface FIUIGradientView : UIView {
    FIUIShapeView *_maskView;
}

+ (Class)layerClass;

- (id)init;
- (void)setColors:(id)a0;
- (void)setLocations:(id)a0;
- (void)setMask:(id)a0;
- (id)gradientLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
