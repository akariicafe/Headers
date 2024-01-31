@class _UIAssertionController, NSString, _UIShapeView, UIView, _UITextCursorBlinkAnimation, _UITextCursorDictationAnimation;

@interface _UITextCursorView : UIView <CAAnimationDelegate, _UITextSelectionWidgetAnimating, _UIAssertionControllerSubject, UITextCursorView> {
    _UIShapeView *_cursorShapeView;
    _UITextCursorBlinkAnimation *_blinkAnimation;
    _UITextCursorDictationAnimation *_dictationAnimation;
    _UIAssertionController *_assertionController;
    _UITextCursorView *_trackedFloatingCursorView;
}

@property (nonatomic, getter=isGlowEffectEnabled) BOOL glowEffectEnabled;
@property (nonatomic, getter=isFloatingEffectEnabled) BOOL floatingEffectEnabled;
@property (nonatomic, getter=isGhostEffectEnabled) BOOL ghostEffectEnabled;
@property (nonatomic, setter=_setShapeScale:) double _shapeScale;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *originView;
@property (readonly, nonatomic) struct { struct CGPoint { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; double x2; id x3; } originShape;
@property (readonly, nonatomic) struct { id x0; double x1; double x2; struct CGSize { double x0; double x1; } x3; } originShadow;
@property (nonatomic) BOOL hiddenForLoupeAnimation;
@property (readonly, nonatomic) BOOL crossfadeOnDismissal;
@property (nonatomic, getter=isBlinking) BOOL blinking;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (BOOL)assertionActivationStateForType:(unsigned long long)a0;
- (void)assertionActivationStateChangedToState:(BOOL)a0 forType:(unsigned long long)a1;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_createFloatingCursorView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cursorBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forStyle:(long long)a1;
- (struct CGPath { } *)_cursorPathForShapeStyle:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cursorShapeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forStyle:(long long)a1;
- (id)_dictationAnimation;
- (id)_fillColorForEffects;
- (void)_setNeedsInitialDictationAnimation;
- (struct { id x0; double x1; double x2; struct CGSize { double x0; double x1; } x3; })_shadowSpecForEffects;
- (BOOL)_trackingFloatingCursorView;
- (id)obtainBlinkAnimationSuppressionAssertionForReason:(id)a0;
- (void)resetBlinkAnimation;

@end
