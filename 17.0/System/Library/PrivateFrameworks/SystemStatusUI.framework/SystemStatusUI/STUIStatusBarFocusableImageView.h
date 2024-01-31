@class UIColor;

@interface STUIStatusBarFocusableImageView : STUIStatusBarImageView {
    UIColor *_unfocusedTintColor;
}

@property (retain, nonatomic) UIColor *focusedImageTintColor;

- (BOOL)canBecomeFocused;
- (void)applyStyleAttributes:(id)a0;
- (BOOL)isUserInteractionEnabled;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end
