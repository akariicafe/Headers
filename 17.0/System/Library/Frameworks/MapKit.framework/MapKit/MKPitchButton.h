@class UIButton, MKMapView, UIVisualEffectView;

@interface MKPitchButton : UIView {
    UIButton *_button;
    UIVisualEffectView *_effectView;
}

@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic) long long visibility;
@property (nonatomic, getter=_backgroundStyle, setter=_setBackgroundStyle:) unsigned long long backgroundStyle;
@property (nonatomic, getter=_controlSize, setter=_setControlSize:) unsigned long long controlSize;

+ (id)pitchButtonWithMapView:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addInteraction:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)removeInteraction:(id)a0;
- (void)_performPitchAction:(id)a0;
- (void)_updateButtonState;
- (void)_updateControlSize;
- (id)initWithMapView:(id)a0;

@end
