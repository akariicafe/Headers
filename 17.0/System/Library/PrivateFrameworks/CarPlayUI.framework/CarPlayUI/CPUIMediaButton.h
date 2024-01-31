@class NSUUID, CALayer;

@interface CPUIMediaButton : UIButton {
    CALayer *_focusColorLayer;
}

@property (nonatomic) BOOL showBezelInTouch;
@property (nonatomic) BOOL showHighlight;
@property (retain, nonatomic) NSUUID *identifier;

- (void)willMoveToWindow:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (id)colorForTouchFocusLayerSelected;
- (id)_buttonBackGroundColorTouch;
- (void)_updateButtonStyle;
- (BOOL)canShowHighlight;
- (id)colorForKnobContentSelected;
- (id)colorForKnobFocusLayer;
- (id)colorForKnobFocusLayerSelected;
- (id)colorForKnobFocused;
- (id)colorForTouchContentSelected;
- (id)colorForTouchFocusLayer;
- (double)focusLayerCornerRadius;
- (BOOL)shouldUpdateButtonOpacityForKnobUnfocused;
- (id)tintColorForUnhighlightedTextLabel;
- (void)updateButtonOpacityForKnobUnfocused;

@end
