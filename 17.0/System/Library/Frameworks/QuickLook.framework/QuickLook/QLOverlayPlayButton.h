@class UIButton, _UIBackdropView;

@interface QLOverlayPlayButton : UIView {
    UIButton *_button;
    _UIBackdropView *_backdropView;
    id _target;
    SEL _action;
}

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)_playButtonActivate:(id)a0;
- (void)_playButtonDeactivate:(id)a0;
- (void)_playButtonTapped:(id)a0;

@end
