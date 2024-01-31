@class VideosExtrasBorderedImageView, NSString;

@interface VideosExtrasZoomingImageTransitionController : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning, VideosExtrasOptionallyInteractiveAnimationController>

@property (nonatomic) struct CGPoint { double x; double y; } initialPinchCenter;
@property (nonatomic) double initialPinchScale;
@property (nonatomic) unsigned long long itemIndex;
@property (nonatomic, getter=isInteractive) BOOL interactive;
@property (retain, nonatomic) VideosExtrasBorderedImageView *zoomingImageView;
@property (nonatomic) BOOL shouldUseSpringAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (double)_destinationScale;
- (float)_desiredSpeedForNonInteractiveAnimationWithDuration:(double)a0 deferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 finalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (double)_maximumDistanceTravelledForPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1 currentTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 finalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
- (void)completeInteractiveTransitionWithPinchGestureRecognizer:(id)a0;
- (id)initWithItemIndex:(unsigned long long)a0 forInteractiveTransition:(BOOL)a1;
- (void)prepareInteractiveTransitionWithPinchGestureRecognizer:(id)a0;
- (void)updateInteractiveTransitionWithPinchGestureRecognizer:(id)a0;

@end
