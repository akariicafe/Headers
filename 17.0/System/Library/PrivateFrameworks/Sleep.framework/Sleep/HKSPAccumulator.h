@class HKSPThrottler, NSMutableSet;
@protocol NAScheduler;

@interface HKSPAccumulator : NSObject {
    HKSPThrottler *_throttler;
    id<NAScheduler> _scheduler;
    NSMutableSet *_accumulatedValues;
}

- (id)initWithInterval:(double)a0 updateBlock:(id /* block */)a1 scheduler:(id)a2;
- (void)accumulateValues:(id)a0;
- (void)accumulateValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithInterval:(double)a0 updateBlock:(id /* block */)a1 scheduler:(id)a2 mutexGenerator:(id /* block */)a3;
- (id)initWithInterval:(double)a0 updateBlock:(id /* block */)a1;

@end
