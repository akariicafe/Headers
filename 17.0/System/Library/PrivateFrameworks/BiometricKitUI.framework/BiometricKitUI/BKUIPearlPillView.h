@class CAShapeLayer, NSTimer, CADisplayLink, NSDate;

@interface BKUIPearlPillView : UIView

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) NSTimer *stateDelayTimer;
@property (retain, nonatomic) NSDate *stateAnimationStart;
@property (nonatomic) double stateAnimationDuration;
@property (copy, nonatomic) id /* block */ stateAnimationCompletion;
@property (nonatomic) double arc;
@property (nonatomic) double startArc;
@property (nonatomic) double targetArc;
@property (nonatomic) double height;
@property (nonatomic) double startHeight;
@property (nonatomic) double targetHeight;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double startCornerRadius;
@property (nonatomic) double targetCornerRadius;
@property (retain, nonatomic) NSDate *radiusAnimationStart;
@property (nonatomic) double radiusAnimationDuration;
@property (copy, nonatomic) id /* block */ radiusAnimationCompletion;
@property (nonatomic) double startRadius;
@property (nonatomic) double targetRadius;
@property (nonatomic) double radius;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (nonatomic) double ringHeight;
@property (nonatomic) double numberOfPills;
@property (nonatomic) double pillInitialHeight;
@property (nonatomic) double pillCompletedHeight;
@property (nonatomic) double pillCornerRadius;

- (void)setState:(unsigned long long)a0 animated:(BOOL)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)displayTick;
- (double)pillMaxLength;
- (struct CGPath { } *)pillPath;
- (double)ringArcLength;
- (void)setRadius:(double)a0 animationDuration:(double)a1 completion:(id /* block */)a2;
- (void)setState:(unsigned long long)a0 animated:(BOOL)a1 animationDelay:(double)a2 completion:(id /* block */)a3 failure:(id /* block */)a4;
- (void)setState:(unsigned long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2 failure:(id /* block */)a3;
- (void)startAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)tearDownPillView;

@end
