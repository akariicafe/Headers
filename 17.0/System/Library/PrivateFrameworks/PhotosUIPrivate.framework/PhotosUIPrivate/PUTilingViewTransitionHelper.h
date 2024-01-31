@class PUViewControllerTransition, NSArray, NSString, PUMaximumChangeRateValueFilter, PUTilingView, PUAnimationGroup;
@protocol PUInterruptibleViewControllerTransition, PUTilingViewControllerTransition, PUTilingViewControllerTransitionEndPoint;

@interface PUTilingViewTransitionHelper : NSObject <PUTilingViewControllerTransition, PUInterruptibleViewControllerTransition>

@property (nonatomic, getter=isTransitionPaused, setter=_setTransitionPaused:) BOOL transitionPaused;
@property (nonatomic, setter=_setHasStarted:) BOOL hasStarted;
@property (nonatomic, setter=_setCurrentOperation:) long long _currentOperation;
@property (nonatomic, setter=_setStartTime:) double _startTime;
@property (nonatomic, setter=_setProgressSpeed:) double _progressSpeed;
@property (nonatomic, setter=_setTransitionProgressOffset:) double _transitionProgressOffset;
@property (nonatomic, setter=_setBackgroundProgressOffset:) double _backgroundProgressOffset;
@property (retain, nonatomic, setter=_setTransitionProgressValueFilter:) PUMaximumChangeRateValueFilter *_transitionProgressValueFilter;
@property (retain, nonatomic, setter=_setChromeProgressValueFilter:) PUMaximumChangeRateValueFilter *_chromeProgressValueFilter;
@property (retain, nonatomic, setter=_setTilingViewAnimationGroup:) PUAnimationGroup *_tilingViewAnimationGroup;
@property (weak, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView;
@property (weak, nonatomic, setter=_setFromEndPoint:) id<PUTilingViewControllerTransitionEndPoint> _fromEndPoint;
@property (weak, nonatomic, setter=_setToEndPoint:) id<PUTilingViewControllerTransitionEndPoint> _toEndPoint;
@property (weak, nonatomic, setter=_setEndPointOwningTilingView:) id<PUTilingViewControllerTransitionEndPoint> _endPointOwningTilingView;
@property (nonatomic, setter=_setInteractionOptions:) unsigned long long _interactionOptions;
@property (copy, nonatomic) NSArray *transitionPausingCall;
@property (readonly, weak, nonatomic) id<PUTilingViewControllerTransitionEndPoint> endPoint;
@property (readonly, nonatomic) double presentationDuration;
@property (readonly, nonatomic) double dismissalDuration;
@property (weak, nonatomic) PUViewControllerTransition<PUTilingViewControllerTransition, PUInterruptibleViewControllerTransition> *transition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_transitionEndPointWithViewController:(id)a0;
+ (void)registerTransitionEndPoint:(id)a0 forViewController:(id)a1;
+ (long long)typeOfEndPoint:(id)a0 forTransitionFromViewController:(id)a1 toViewController:(id)a2;
+ (void)unregisterTransitionEndPoint:(id)a0 forViewController:(id)a1;

- (id)init;
- (void)animateTransitionWithOperation:(long long)a0 startedInteractively:(BOOL)a1;
- (void)updatePausedTransitionWithProgress:(double)a0 interactionProgress:(double)a1;
- (void)pauseTransitionWithOptions:(unsigned long long)a0;
- (void)_getTransitionProgress:(double *)a0 backgroundProgress:(double *)a1 chromeProgress:(double *)a2;
- (void)resumeTransition:(BOOL)a0;
- (id)initWithPresentationDuration:(double)a0 dismissalDuration:(double)a1 endPoint:(id)a2;
- (BOOL)_validateTransitionFromEndPoint:(id)a0 toEndPoint:(id)a1;
- (void)pauseTransition;
- (long long)_barStyleForEndPoint:(id)a0;
- (void).cxx_destruct;
- (BOOL)_endPointUsesTransientTilingView:(id)a0;

@end
