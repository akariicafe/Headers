@class UITouch, UIDelayedAction;

@interface UIDragRecognizer : UIGestureRecognizer {
    UIDelayedAction *_tooSlow;
}

@property (nonatomic) struct CGPoint { double x; double y; } startPosition;
@property (nonatomic) double startAngle;
@property (retain, nonatomic) UITouch *touch;
@property (retain, nonatomic) UIDelayedAction *ignoreTouch;
@property (nonatomic) BOOL restrictsToAngle;
@property (nonatomic) double angle;
@property (nonatomic) double maximumDeviation;
@property (nonatomic) double minimumDistance;
@property (nonatomic) double quietPeriod;
@property (nonatomic) BOOL canBeginDrag;

+ (BOOL)_shouldDefaultToTouches;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)clearTimer;
- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)tooSlow:(id)a0;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)clearIgnoreTouch;

@end
