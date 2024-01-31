@class NSString, OFUIViewController, OFUIView;
@protocol OFViewControllerInteractiveTransitioning, OFViewControllerAnimatedTransitioning;

@interface _OFViewControllerTransitionContext : NSObject <OFViewControllerTransitioningContext> {
    OFUIViewController *_fromViewController;
    OFUIViewController *_toViewController;
    OFUIView *_containerView;
    double _progress;
    double _progressVelocity;
    double _lastUpdateTimestamp;
    long long _state;
    struct { unsigned char interactorImplementsCompletionSpeed : 1; unsigned char interactorImplementsCompletionCurve : 1; unsigned int isCurrentlyInteractive; unsigned char transitionWasCancelled : 1; unsigned char transitionIsCompleting : 1; } _flags;
}

@property (nonatomic) BOOL isInFlight;
@property (nonatomic) BOOL doEaseIn;
@property (nonatomic) BOOL doEaseOut;
@property (nonatomic) BOOL isRubberBanding;
@property (copy, nonatomic) id /* block */ interactiveUpdateHandler;
@property (readonly) id<OFViewControllerAnimatedTransitioning> animator;
@property (readonly) id<OFViewControllerInteractiveTransitioning> interactor;
@property (copy, nonatomic) id /* block */ willCompleteHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) double progressVelocity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateInteractiveTransition:(double)a0;
- (BOOL)initiallyInteractive;
- (BOOL)isInteractive;
- (void)completeTransition:(BOOL)a0;
- (double)progress;
- (void)dealloc;
- (id)toViewController;
- (BOOL)wasCancelled;
- (id)containerView;
- (id)fromViewController;
- (BOOL)isCompleting;
- (void)startInteractiveTransition;
- (void)makeTransitionInteractiveWithInteractor:(id)a0 andProgress:(double)a1;
- (void)cancelInteractiveTransitionWithVelocity:(double)a0;
- (void)finishInteractiveTransitionWithVelocity:(double)a0;
- (id)initWithContainerView:(id)a0 fromViewController:(id)a1 toViewController:(id)a2 animator:(id)a3 interactor:(id)a4;
- (void)setIsCompleting:(BOOL)a0;
- (void)updateNonInteractiveTransitionWithProgress:(double)a0;

@end
