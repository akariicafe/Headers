@class UIScrollView, NSString, UIScrollViewDirectionalPressGestureRecognizer;

@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer <_UIScrollEventAsyncDeliverable> {
    SEL _scrollViewAction;
    struct CGPoint { double x; double y; } _reconsideredLockingLocation;
    unsigned char _lastLockingAxis : 2;
    unsigned char _lockingAxis : 2;
    unsigned char _hasParentScrollView : 1;
    unsigned char _caughtDeceleratingScrollView : 1;
    unsigned char _directionalLockEnabled : 1;
    unsigned char _transfersTrackingFromParentScrollView : 1;
    unsigned char _movedAfterCaughtDeceleratingScrollViewButBeganNotYetDelivered : 1;
    long long _modifierFlags;
    long long _indirectScrollingState;
    BOOL _scrollViewCanScrubWithTouch;
    BOOL _activeEventIsDiscrete;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;
@property (readonly, nonatomic, getter=_caughtDeceleratingScrollView) BOOL caughtDeceleratingScrollView;
@property (readonly, nonatomic, getter=_beganCaughtDeceleratingScrollViewAndMoved) BOOL beganCaughtDeceleratingScrollViewAndMoved;
@property (nonatomic) double translationScaleFactor;
@property (weak, nonatomic) UIScrollViewDirectionalPressGestureRecognizer *directionalPressGestureRecognizer;
@property (nonatomic, getter=_discreteFastScrollMultiplier, setter=_setDiscreteFastScrollMultiplier:) double discreteFastScrollMultiplier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0;
- (double)_hysteresis;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 toSceneReferenceCoordinatesFromView:(id)a1;
- (void)_scrollingChangedWithEvent:(id)a0;
- (void)removeTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setAllowedTouchTypes:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (struct CGPoint { double x0; double x1; })_velocityIncludingDiscreteScrollInView:(id)a0;
- (BOOL)delaysTouchesBegan;
- (struct CGPoint { double x0; double x1; })_adjustSceneReferenceLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_shouldTryToBeginWithEvent:(id)a0;
- (void)_resetGestureRecognizer;
- (void)_beginScroll;
- (BOOL)_allowsBounce;
- (long long)_modifierFlags;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)_isGestureType:(long long)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 fromSceneReferenceCoordinatesToView:(id)a1;
- (void)_handleCaughtDeceleratingScrollViewWithEvent:(id)a0;
- (BOOL)shouldReceiveEvent:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })translationInView:(id)a0;
- (BOOL)_canTransferTrackingFromParentPagingScrollView;
- (id)_asyncDeliveryTargetForScrollEvent:(id)a0;
- (void)_centroidMovedTo:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1 affectingTranslation:(BOOL)a2;
- (void)setDelegate:(id)a0;
- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)setView:(id)a0;
- (BOOL)_shouldContinueToWaitToTransferTrackingFromParentScrollView;
- (BOOL)_isParentScrollView:(id)a0 consideringEvent:(id)a1;
- (BOOL)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
- (void)_scrollViewDidEndZooming;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;

@end
