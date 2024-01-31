@interface _UITapTapHoldGestureRecognizer : UITapGestureRecognizer

@property (nonatomic) int currentNumberOfPresses;
@property (nonatomic) double startTime;
@property (nonatomic) double pressEventBeginTimestamp;
@property (nonatomic) BOOL isWaitingForHoldToAction;
@property (nonatomic) BOOL isInHoldToAction;
@property (nonatomic) BOOL isWaitingForTooSlowForDoubleTap;
@property (nonatomic) long long gestureType;

- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)_shouldFailInResponseToPresses:(id)a0 withEvent:(id)a1;
- (void)cancelPendingHoldToAction;
- (void)cancelPendingTooSlowForDoubleTap;
- (void)holdToAction:(id)a0;
- (void)scheduleHoldToAction;
- (void)scheduleTooSlowForDoubleTap;
- (void)tooSlowForDoubleTap:(id)a0;

@end
