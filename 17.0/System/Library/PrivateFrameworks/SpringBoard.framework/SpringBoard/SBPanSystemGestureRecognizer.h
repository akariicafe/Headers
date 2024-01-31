@class NSTimer;
@protocol SBPanSystemGestureRecognizerDelegate;

@interface SBPanSystemGestureRecognizer : UIPanGestureRecognizer {
    BOOL _initialTouchReceived;
    double _initialTouchReceivedTime;
}

@property (retain, nonatomic) NSTimer *noHysterisisCancellationTimer;
@property (weak, nonatomic) id<SBPanSystemGestureRecognizerDelegate> delegate;
@property (nonatomic) BOOL failsPastMaximumPressDurationWithoutHysteresis;
@property (nonatomic) double maximumPressDuration;

- (void)reset;
- (void)dealloc;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (void)invalidateNoHysterisisCancellationTimer;
- (void)setupNoHysterisisCancellationTimerIfNeeded;

@end
