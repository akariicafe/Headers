@class UIVisualEffectView;

@interface _UIEditMenuPageButton : UIButton {
    UIVisualEffectView *_separatorView;
    UIVisualEffectView *_backgroundView;
    UIVisualEffectView *_selectedBackgroundView;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _defaultInsets;
}

@property (readonly, nonatomic) long long direction;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } arrowEdgeInsets;

- (id)backgroundView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_configureButtonWithGroupName:(id)a0;
- (id)_imageNameForCurrentDirection;
- (id)initWithDirection:(long long)a0 backgroundGroupName:(id)a1;
- (id)selectedBackgroundView;

@end
