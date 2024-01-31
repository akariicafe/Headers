@class HKSPTask, HKSPLimitingScheduler;

@interface HKSPThrottler : NSObject {
    HKSPTask *_task;
    HKSPLimitingScheduler *_backingScheduler;
}

- (id)initWithInterval:(double)a0 executeBlock:(id /* block */)a1;
- (void)execute;
- (id)initWithInterval:(double)a0 executeBlock:(id /* block */)a1 scheduler:(id)a2;
- (void).cxx_destruct;
- (id)initWithInterval:(double)a0 executeBlock:(id /* block */)a1 scheduler:(id)a2 mutexGenerator:(id /* block */)a3;

@end
