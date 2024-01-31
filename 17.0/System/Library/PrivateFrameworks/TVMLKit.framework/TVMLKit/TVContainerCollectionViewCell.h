@interface TVContainerCollectionViewCell : UICollectionViewCell {
    BOOL _pressIsAnimating;
    BOOL _unpressOnEndAnimating;
}

@property (nonatomic) BOOL allowsFocus;
@property (nonatomic) BOOL selectSubviews;

- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)_preferredConfigurationForFocusAnimation:(long long)a0 inContext:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (void)_showPressState;
- (void)_clearPressState;
- (void)setFocused:(BOOL)a0 animated:(BOOL)a1 context:(id)a2 coordinator:(id)a3;

@end
