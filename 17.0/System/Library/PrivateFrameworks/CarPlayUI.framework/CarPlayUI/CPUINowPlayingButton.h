@class NSString, CPUINowPlayingButtonView, UIImageView;

@interface CPUINowPlayingButton : UIButton {
    CPUINowPlayingButtonView *_nowPlayingView;
    UIImageView *_focusBackgroundView;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)initWithBundleIdentifier:(id)a0;

@end
