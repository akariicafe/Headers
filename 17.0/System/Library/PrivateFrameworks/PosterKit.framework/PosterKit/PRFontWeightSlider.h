@class UIColor, _PRFontWeightSliderTrackView, UIImageView, CAShapeLayer, CALayer;
@protocol UITraitChangeRegistration;

@interface PRFontWeightSlider : UISlider {
    _PRFontWeightSliderTrackView *_trackView;
}

@property (retain, nonatomic) UIImageView *thumbView;
@property (retain, nonatomic) CAShapeLayer *thumbClippingLayer;
@property (retain, nonatomic) CALayer *thumbContentLayer;
@property (retain, nonatomic) CALayer *thumbSoftShadowLayer;
@property (retain, nonatomic) CAShapeLayer *thumbBorderLayer;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (retain, nonatomic) id<UITraitChangeRegistration> userInterfaceStyleTraitChangeRegistration;

- (id)init;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (id)createThumbView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_createCustomThumbView;

@end
