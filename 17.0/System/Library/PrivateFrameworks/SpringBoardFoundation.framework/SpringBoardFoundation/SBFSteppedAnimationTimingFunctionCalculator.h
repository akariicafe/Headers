@class NSMutableDictionary;

@interface SBFSteppedAnimationTimingFunctionCalculator : NSObject {
    NSMutableDictionary *_functionsByName;
}

@property (nonatomic) double percentComplete;

- (double)valueForFunctionWithName:(id)a0;
- (void)addTimingFunctionWithName:(id)a0 fromNormalizedAnimationSettings:(id)a1;
- (id)init;
- (void)addTimingFunction:(id)a0 withName:(id)a1;
- (void)addTimingFunction:(id)a0 withName:(id)a1 constrainedToIntervalBetween:(double)a2 and:(double)a3;
- (void).cxx_destruct;
- (id)timingFunctionNames;

@end
