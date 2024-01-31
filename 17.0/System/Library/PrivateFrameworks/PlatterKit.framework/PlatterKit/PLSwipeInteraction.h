@class NSString, PLActionButtonsPresentingView, UIView, UIPanGestureRecognizer, UIViewFloatAnimatableProperty;
@protocol PLSwipeInteractionDelegate;

@interface PLSwipeInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction, MTMaterialGrouping> {
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _panGestureStartingPosition;
    UIViewFloatAnimatableProperty *_targetPositionAnimatableProperty;
    PLActionButtonsPresentingView *_actionButtonsPresentingView;
    id /* block */ _swipeHintingHideAnimationBlock;
    id /* block */ _animationCompletion;
    id /* block */ _performWithoutRetargetingAnimationCompletion;
    unsigned long long _animationCount;
}

@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) UIView *viewToMove;
@property (readonly, weak, nonatomic) id<PLSwipeInteractionDelegate> delegate;
@property (nonatomic, getter=isPerformingSwipeHinting) BOOL performingSwipeHinting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (void)_setupContentOffsetFloatAnimatableProperty;
- (void)hideActionsAnimated:(BOOL)a0 fastAnimation:(BOOL)a1 completion:(id /* block */)a2;
- (void)_removeActionButtons;
- (unsigned long long)_interfaceEdgeToPresentOnForAbsoluteTranslation:(double)a0;
- (double)_panHorizontalTranslation;
- (void)_setViewPositionHelper:(double)a0 withVelocity:(double)a1 usingNonInteractiveSpring:(BOOL)a2 animated:(BOOL)a3 completion:(id /* block */)a4;
- (void)_updateRevealPercentage:(double)a0;
- (void)_setViewPosition:(double)a0 withVelocity:(double)a1 usingNonInteractiveSpring:(BOOL)a2 animated:(BOOL)a3 completion:(id /* block */)a4;
- (void)didMoveToView:(id)a0;
- (void)_addActionButtonsAndRevealAnimated:(BOOL)a0 fastAnimation:(BOOL)a1 layoutLocation:(unsigned long long)a2 completion:(id /* block */)a3;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (double)_actionButtonTriggerDistanceForView:(id)a0;
- (void)willMoveToView:(id)a0;
- (double)_updateActionRevealStateForTargetPosition:(double)a0 currentPosition:(double)a1 velocity:(double)a2;
- (unsigned long long)_interfaceEdgeToPresentOnForInitialPanTranslation:(double)a0 andInitialPanVelocity:(double)a1;
- (unsigned long long)_interfaceEdgeForLayoutLocation:(unsigned long long)a0;
- (void)hintActionsForLayoutLocation:(unsigned long long)a0;
- (void)_updateActionButtonRevealPercentageForTargetPosition:(double)a0;
- (void)_revealToPosition:(double)a0 animated:(BOOL)a1 fastAnimation:(BOOL)a2 velocity:(double)a3 completion:(id /* block */)a4;
- (void)_handlePanGesture:(id)a0;
- (unsigned long long)_interfaceEdgeToPresentOnForComparisonValue:(double)a0;
- (void)revealActionsForLayoutLocation:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_addActionButtonViewsAtLayoutLocation:(unsigned long long)a0 interfaceEdge:(unsigned long long)a1;
- (void)_updatePosition:(double)a0;
- (void).cxx_destruct;
- (void)_updateTargetPosition:(double)a0;
- (id)initWithDelegate:(id)a0;
- (unsigned long long)_layoutLocationForInterfaceEdge:(unsigned long long)a0;
- (BOOL)_shouldContinuePresentingActionButtons;
- (void)_hideAnimated:(BOOL)a0 fastAnimation:(BOOL)a1 velocity:(double)a2 completion:(id /* block */)a3;
- (id)senderForActionWithIdentifier:(id)a0;
- (void)_performSwipeHintingForLayoutLocation:(unsigned long long)a0;
- (double)_panHorizontalVelocity;

@end
