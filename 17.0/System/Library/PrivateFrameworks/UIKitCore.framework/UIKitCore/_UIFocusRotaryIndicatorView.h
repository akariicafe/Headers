@class UIViewPropertyAnimator, _UIFocusRotaryRingArrowView, UIView;

@interface _UIFocusRotaryIndicatorView : UIView {
    BOOL _visible;
    double _wheelPosition;
    unsigned long long _activeAxis;
    unsigned long long _failedMovementHeading;
    UIView *_ringView;
    UIView *_fingerPositionContainerView;
    UIView *_fingerPositionView;
    UIView *_roundPointerView;
    UIView *_rotaryScrubCenterPunchout;
    UIViewPropertyAnimator *_rotaryScrubHideAnimator;
    UIViewPropertyAnimator *_rotaryScrubUnhideAnimator;
    UIViewPropertyAnimator *_rotaryScrubBackwardsFingerPositionAnimator;
    _UIFocusRotaryRingArrowView *_upArrow;
    _UIFocusRotaryRingArrowView *_rightArrow;
    _UIFocusRotaryRingArrowView *_downArrow;
    _UIFocusRotaryRingArrowView *_leftArrow;
}

+ (id)createRotaryIndicatorInView:(id)a0;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (unsigned long long)_calculateCurrentRotaryAxis;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForWheelPosition:(double)a0;
- (void)_updateArrowDisplay;
- (void)_updateArrowsForCurrentFocus;
- (void)showArrowsForAxis:(unsigned long long)a0;
- (void)toggleVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)updateFailedMovementHeading:(unsigned long long)a0;
- (void)updateWheelPosition:(double)a0;

@end
