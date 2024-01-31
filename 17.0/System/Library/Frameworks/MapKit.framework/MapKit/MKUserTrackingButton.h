@class UIVisualEffectView, MKMapView, _MKUserTrackingButton;

@interface MKUserTrackingButton : UIView {
    _MKUserTrackingButton *_button;
    UIVisualEffectView *_effectView;
}

@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic, getter=_controlSize, setter=_setControlSize:) unsigned long long controlSize;
@property (weak, nonatomic) MKMapView *mapView;

+ (id)userTrackingButtonWithMapView:(id)a0;

- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addInteraction:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)removeInteraction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 button:(id)a1;

@end
