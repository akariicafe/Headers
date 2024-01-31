@protocol MKVariableDelayTapRecognizerDelegate;

@interface MKVariableDelayTapRecognizer : UITapGestureRecognizer {
    double originalMaximumIntervalBetweenSuccessiveTaps;
}

@property (weak, nonatomic) id<MKVariableDelayTapRecognizerDelegate> tapDelayDelegate;

- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
