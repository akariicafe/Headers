@protocol ASDTaskScheduler;

@interface ASDPromiseObserver : NSObject {
    id /* block */ _valueBlock;
    id /* block */ _errorBlock;
    id<ASDTaskScheduler> _scheduler;
}

- (void)notifyRejectedWithError:(id)a0;
- (id)initWithValueBlock:(id /* block */)a0 errorBlock:(id /* block */)a1 scheduler:(id)a2;
- (void).cxx_destruct;
- (void)notifyResolvedWithValue:(id)a0;

@end
