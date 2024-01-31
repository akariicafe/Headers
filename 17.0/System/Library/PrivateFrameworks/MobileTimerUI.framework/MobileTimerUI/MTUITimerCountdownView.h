@class UIColor, CALayer, CAShapeLayer;

@interface MTUITimerCountdownView : UIView

@property (retain) CAShapeLayer *backgroundCircleLayer;
@property (retain) CAShapeLayer *countdownCircleLayer;
@property (retain) UIColor *barColor;
@property (retain) UIColor *backgroundBarColor;
@property double barWidth;
@property (retain) CALayer *mainLayer;
@property double remainingTime;
@property double duration;
@property long long state;

- (void)pause;
- (id)initWithBarColor:(id)a0 backgroundBarColor:(id)a1 barWidth:(double)a2;
- (id)initWithBarColor:(id)a0 backgroundBarColor:(id)a1 barWidth:(double)a2 remainingTime:(double)a3 duration:(double)a4;
- (void)start;
- (BOOL)isStarted;
- (void)setupBackgroundCircle;
- (void)setAnimationRemainingTime:(double)a0 totalTime:(double)a1;
- (void)stop;
- (double)angleForValue:(double)a0 total:(double)a1;
- (void)resume;
- (double)degToRad:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
