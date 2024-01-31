@class _UILumaTrackingBackdropView, UIVisualEffectView;

@interface _UIGrabber : UIControl <_UILumaTrackingBackdropViewDelegate>

@property (readonly, nonatomic) UIVisualEffectView *_visualEffectView;
@property (readonly, nonatomic) _UILumaTrackingBackdropView *_lumaTrackingBackdropView;
@property (nonatomic, setter=_setBackgroundLuminanceLevel:) unsigned long long _backgroundLuminanceLevel;
@property (nonatomic, setter=_setLumaTrackingEnabled:) BOOL _lumaTrackingEnabled;

- (unsigned long long)_controlEventsForActionTriggered;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)backgroundLumaView:(id)a0 didTransitionToLevel:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
