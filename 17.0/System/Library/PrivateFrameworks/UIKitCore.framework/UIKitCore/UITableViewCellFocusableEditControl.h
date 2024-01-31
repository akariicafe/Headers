@class _UIFloatingContentView;

@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl {
    _UIFloatingContentView *_focusedFloatingContentView;
}

- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)wantsMaskingWhileAnimatingDisabled;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)setSelected:(BOOL)a0;
- (id)_currentImage;
- (void)_ensureFocusedFloatingContentView;
- (BOOL)_shouldHandlePressEvent:(id)a0;
- (void)_updateFloatingViewForCurrentTraits;
- (BOOL)wantsImageShadow;

@end
