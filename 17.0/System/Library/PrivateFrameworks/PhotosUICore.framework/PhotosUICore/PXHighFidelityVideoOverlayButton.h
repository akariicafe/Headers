@class _UIBackdropView, UIImageView, PXVideoOverlayButtonConfiguration, UIButton;

@interface PXHighFidelityVideoOverlayButton : UIView <PXVideoOverlayButton> {
    UIButton *_button;
    _UIBackdropView *_backdropView;
    UIImageView *_overlayPlayBackground;
    PXVideoOverlayButtonConfiguration *_overlayConfiguration;
    id _target;
    SEL _action;
}

@property (nonatomic, setter=_setDidConfigureForPause:) BOOL _didConfigureForPause;
@property (nonatomic) BOOL showAsPause;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)_playButtonActivate:(id)a0;
- (void)_playButtonDeactivate:(id)a0;
- (void)_playButtonTapped:(id)a0;

@end
