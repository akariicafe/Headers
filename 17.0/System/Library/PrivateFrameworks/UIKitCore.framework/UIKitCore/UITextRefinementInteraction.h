@class UITextGestureTuning, UIResponder, UIDelayedAction, _UITextLoupeResponderProxy;
@protocol UITextRefinementInteractionBehaviorDelegate;

@interface UITextRefinementInteraction : UITextInteraction <_UITextLoupeResponderProxyDelegate> {
    UIDelayedAction *_delayedLoupeAction;
    UIDelayedAction *_delayedSelectionAction;
    BOOL _hasPerformedInteraction;
    struct CGPoint { double x; double y; } _initialPointFromPreviousInteraction;
}

@property (retain, nonatomic) _UITextLoupeResponderProxy *responderProxy;
@property (nonatomic) long long inheritedGranularity;
@property (nonatomic) BOOL triggeredByLongPress;
@property (nonatomic) BOOL shouldUseLineThreshold;
@property (nonatomic) BOOL strongerBiasAgainstUp;
@property (readonly, nonatomic) UIResponder *responder;
@property (readonly, nonatomic) UITextGestureTuning *gestureTuning;
@property (retain, nonatomic) id<UITextRefinementInteractionBehaviorDelegate> behaviorDelegate;

- (void)_createGestureTuningIfNecessary;
- (BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)a0 forGestureRecognizer:(id)a1;
- (void)_performGestureType:(long long)a0 state:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2 locationOfFirstTouch:(struct CGPoint { double x0; double x1; })a3 forTouchType:(long long)a4;
- (void)didMoveToView:(id)a0;
- (BOOL)interaction_gestureRecognizerShouldBegin:(id)a0;
- (void)finishSetup;
- (void)willMoveToView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)_processGestureForCustomHighlighter:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)canBeginDragCursor:(id)a0;
- (void)cancelDelayedLoupeActionIfNecessary;
- (void)delayedDisplayLoupe:(id)a0;
- (void)delayedLoupeAction:(id)a0;
- (void)delayedSelectionAction:(id)a0;
- (id)initWithBehaviorDelegate:(id)a0;
- (void)loupeGesture:(id)a0;
- (void)loupeGestureWithState:(long long)a0 location:(id /* block */)a1 translation:(id /* block */)a2 velocity:(id /* block */)a3 modifierFlags:(long long)a4 shouldCancel:(BOOL *)a5;
- (struct CGPoint { double x0; double x1; })pointIfPlacedCarefully:(struct CGPoint { double x0; double x1; })a0;
- (void)setupDelayedLoupeActionWithInitialPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setupGestureExclusionRequirements;
- (struct CGPoint { double x0; double x1; })touchAlignedPointForPoint:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)translationIsWithinAllowableMovement:(struct CGPoint { double x0; double x1; })a0;
- (void)updateInitialPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateOrCancelDelayedLoupeActionWithPoint:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1;
- (void)updateVisibilityOffsetForGesture:(id)a0;
- (void)willBeginExternalGesture;

@end
