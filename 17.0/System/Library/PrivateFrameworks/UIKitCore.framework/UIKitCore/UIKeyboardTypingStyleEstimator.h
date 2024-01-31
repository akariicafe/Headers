@class NSTimer;
@protocol UIKeyboardTypingStyleEstimatorDelegate;

@interface UIKeyboardTypingStyleEstimator : NSObject {
    NSTimer *_tapTypingFlipTimer;
    double _lastContinuousPathEvent;
    unsigned long long _currentTypingStyle;
}

@property (weak, nonatomic) id<UIKeyboardTypingStyleEstimatorDelegate> delegate;

- (void)tapTypedKey;
- (void)beganContinuousPath;
- (void).cxx_destruct;
- (void)cancelContinuousPath;
- (unsigned long long)currentTypingStyleEstimation;
- (void)_setTypingStyleEstimation:(unsigned long long)a0;
- (void)endedContinuousPath;

@end
