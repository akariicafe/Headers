@class UIButton, _UIBackdropView, UIImageView;

@interface PLHighFidelityVideoOverlayButton : UIView <PLVideoOverlayButton> {
    long long _style;
    UIButton *_button;
    _UIBackdropView *_backdropView;
    UIImageView *_overlayPlayBackground;
    id _target;
    SEL _action;
}

- (void)dealloc;
- (id)initWithStyle:(long long)a0;
- (long long)style;
- (void)layoutSubviews;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)_playButtonActivate:(id)a0;
- (void)_playButtonDeactivate:(id)a0;
- (void)_playButtonTapped:(id)a0;

@end
