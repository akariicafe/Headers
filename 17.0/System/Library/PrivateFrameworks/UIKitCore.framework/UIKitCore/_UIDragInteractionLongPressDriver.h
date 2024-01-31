@class _UIDragLiftGestureRecognizer, NSString, UIDelayedAction, _UIRelationshipGestureRecognizer;

@interface _UIDragInteractionLongPressDriver : _UIDragInteractionDriver <UIGestureRecognizerDelegate> {
    UIDelayedAction *_gateTimer;
    UIDelayedAction *_cancellationTimer;
}

@property (readonly, nonatomic) _UIDragLiftGestureRecognizer *gestureRecognizerForDragInitiation;
@property (readonly, nonatomic) _UIRelationshipGestureRecognizer *gestureRecognizerForFailureRelationship;
@property (readonly, nonatomic) _UIRelationshipGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (readonly, nonatomic) unsigned long long behavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isGestureRecognizerForDragInitiation:(id)a0;
- (void)_gestureRecognizerFailed:(id)a0;
- (void)didTransitionToCancelState;
- (void)attachToView:(id)a0;
- (double)translationInWindow;
- (void)didTransitionToInflightState;
- (void)setAllowedTouchTypes:(id)a0;
- (void)detachFromView:(id)a0;
- (id)init;
- (void)didTransitionToPreparing;
- (void)setLiftMoveHysteresis:(double)a0;
- (BOOL)shouldDelayCompetingGestureRecognizer:(id)a0;
- (void)didTransitionToDeferred;
- (void)dragInitiationGestureStateChanged:(id)a0;
- (void)setAutomaticallyAddsFailureRelationships:(BOOL)a0;
- (void)reset;
- (void)setLiftDelay:(double)a0;
- (void)didTransitionToBeginState;
- (void)invalidateCancellationTimer;
- (void)didTransitionToInactiveState;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)invalidateCompetingGestureRecognizerGateTimer;
- (void)openCompetingGestureRecognizerGateCancelingGestures:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)hasExceededAllowableMovement;
- (void)_dragInitiationGestureStateChanged:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)_updateLiftMoveHysteresisInDragInitiationGesture;
- (void).cxx_destruct;
- (BOOL)canExcludeCompetingGestureRecognizer:(id)a0;
- (void)_gateCompetingGestureRecognizers;
- (void)openGateCancelingAddItemsGestures;
- (BOOL)hasMoveHysteresisBeenReached;
- (id)initWithBehavior:(unsigned long long)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)_wantsTimeDelayedFailureRequirementGate;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
