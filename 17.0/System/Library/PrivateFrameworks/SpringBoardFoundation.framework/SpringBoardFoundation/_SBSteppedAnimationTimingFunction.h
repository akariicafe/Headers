@class CAMediaTimingFunction;

@interface _SBSteppedAnimationTimingFunction : NSObject

@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction;
@property (readonly, nonatomic) struct SBNormalizedTransitionInterval { double start; double duration; } constrainedRange;

+ (id)timingFunctionWithTimingFunction:(id)a0 constrainedToIntervalBetween:(double)a1 and:(double)a2;

- (id)initWithTimingFunction:(id)a0 constrainedToIntervalBetween:(double)a1 and:(double)a2;
- (void).cxx_destruct;
- (double)valueAtPercentage:(double)a0;

@end
