@class UIView, UIImageView, NSLayoutConstraint;

@interface _MKZoomSliderView : UIView {
    NSLayoutConstraint *_knobCenterYConstraint;
    UIView *_knob;
    UIImageView *_shadowImageView;
    double _lastTrackShadowImageScale;
}

@property (nonatomic) double zoomFraction;
@property (nonatomic, getter=isActive) BOOL active;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end
