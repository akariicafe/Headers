@class UIView, UIGestureRecognizer;
@protocol UISwitchMVEGestureTrackingSessionElement;

@interface UISwitchMVEGestureTrackingSession : NSObject

@property (readonly, nonatomic) double naturalLayoutDirection;
@property (readonly, nonatomic) double movementVectorForPanInitiatedChangeY;
@property (readonly, nonatomic) double movementVectorForPanInitiatedChangeTargetOnValue;
@property (readonly, nonatomic) UIGestureRecognizer *pendingDisplayedOnValueInitiatingGesture;
@property (readonly, nonatomic) BOOL pendingDisplayedOnValue;
@property (readonly, nonatomic) BOOL lastCommitedOnValue;
@property (weak, nonatomic) UIView<UISwitchMVEGestureTrackingSessionElement> *visualElement;
@property (nonatomic) BOOL displayedOnValue;

+ (BOOL)gestureIsInEndState:(long long)a0;

- (id)initWithVisualElement:(id)a0;
- (void)reset;
- (BOOL)_isMovementDirectionAndMagnitudeEnoughToPerformOnOffChange:(double)a0;
- (void)setPendingDisplayedOnValue:(BOOL)a0 forGesture:(id)a1;
- (void)applyPendingDisplayedOnValueWithoutSendingActions;
- (BOOL)pendingDisplayedOnValueIsValid;
- (void)invalidatePendingOnValue;
- (BOOL)_isMovementDirectionTrackableForPossibleOnOffChange:(double)a0;
- (void)_sendStateChangeActionsIfNecessary;
- (void)applyPendingDisplayedOnValueAndSendActions;
- (void).cxx_destruct;
- (void)_applyPendingChangesIfNecessary;
- (BOOL)canApplyPendingOnValueForGesture:(id)a0;
- (void)_updateMovementVectorForPanInitiatedChanges;
- (BOOL)updatePendingDisplayedOnValueIfMovementIsEnoughToInitiateChange:(double)a0 forGesture:(id)a1;

@end
