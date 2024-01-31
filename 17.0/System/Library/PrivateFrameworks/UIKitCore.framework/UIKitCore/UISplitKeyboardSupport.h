@class NSString, CADisplayLink, UIPanGestureRecognizer;

@interface UISplitKeyboardSupport : UIKeyboardMotionSupport <UIGestureRecognizerDelegate, UIKeyboardKeyplaneTransitionDelegate> {
    UIPanGestureRecognizer *_singleFingerPanRecognizer;
    UIPanGestureRecognizer *_twoFingerPanRecognizer;
    BOOL _isTranslating;
    BOOL _isSplitting;
    BOOL _splitLockState;
    struct CGPoint { double x; double y; } _targetTranslation;
    struct CGPoint { double x; double y; } _initialTranslation;
    struct CGPoint { double x; double y; } _translationVelocity;
    CADisplayLink *_displayLink;
    double _lastBounceTime;
    double _lastTranslationNotificationTime;
    id /* block */ _bounceCompletionBlock;
    BOOL _shouldUpdateKLGForTransition;
}

@property (readonly, nonatomic) BOOL isTranslating;
@property (readonly, nonatomic) BOOL isSplitting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProgress:(double)a0 startHeight:(double)a1 endHeight:(double)a2;
- (void)prepareForTransition;
- (void)transitionDidFinish:(BOOL)a0;
- (void)dock;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)invalidateDisplayLink;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (BOOL)completedPlacementFrom:(id)a0 to:(id)a1 forController:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)finishTransitionWithCompletion:(id /* block */)a0;
- (void)_connectController:(id)a0;
- (void)_disconnectingController:(id)a0;
- (void)_updateBounceAnimation:(id)a0;
- (BOOL)_updateKeyboardLayoutGuideForHostFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)_updateKeyboardLayoutGuideForSplitTransition:(BOOL)a0;
- (void)_updatedController;
- (void)bounceAnimationDidFinish;
- (void)cancelBounceAnimation;
- (void)cancelGestureRecognizers;
- (BOOL)generateSplitNotificationForNewPlacement:(id)a0;
- (BOOL)startedPlacementFrom:(id)a0 to:(id)a1 forController:(id)a2;
- (void)translateDetected:(id)a0;
- (void)undock;
- (void)updatedControllerApplicator:(id)a0;
- (void)willPerformPlacementFrom:(id)a0 to:(id)a1 forController:(id)a2;

@end
