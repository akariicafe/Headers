@class UIColor, UIImageView, UIImage, MTMPUTransportButtonEventHandler, UIButton;

@interface MTMPUHalfTintedTransportButton : UIControl {
    UIButton *_regularButton;
    UIButton *_tintedButton;
    MTMPUTransportButtonEventHandler *_transportButtonEventHandler;
}

@property (readonly, nonatomic, getter=_regularButton) UIButton *regularButton;
@property (readonly, nonatomic, getter=_tintedButton) UIButton *tintedButton;
@property (retain, nonatomic) UIImage *regularImage;
@property (nonatomic) double regularImageAlpha;
@property (retain, nonatomic) UIColor *regularImageColor;
@property (readonly, nonatomic) UIImageView *regularImageView;
@property (retain, nonatomic) UIImage *tintedImage;
@property (nonatomic) double tintedImageAlpha;
@property (retain, nonatomic) UIColor *tintedImageColor;
@property (readonly, nonatomic) UIImageView *tintedImageView;

- (void)cancelTrackingWithEvent:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setSelected:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldTrack;
- (id)_newButton;
- (id)_handleButtonHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_applyImage:(id)a0 toButton:(id)a1;
- (BOOL)_shouldForwardSelectedState;
- (void)_updateRegularImage;

@end
