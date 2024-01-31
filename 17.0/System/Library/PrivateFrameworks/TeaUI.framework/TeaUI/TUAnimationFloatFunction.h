@class CAMediaTimingFunction;

@interface TUAnimationFloatFunction : NSObject

@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) double startValue;
@property (nonatomic) double endValue;
@property (nonatomic) double speed;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTimingFunction:(id)a0 startValue:(double)a1 endValue:(double)a2 speed:(double)a3;
- (double)solveForTime:(double)a0;

@end
