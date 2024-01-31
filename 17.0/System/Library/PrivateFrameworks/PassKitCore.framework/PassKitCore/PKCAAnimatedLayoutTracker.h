@class NSMutableArray;

@interface PKCAAnimatedLayoutTracker : NSObject {
    unsigned long long _started;
    unsigned long long _interrupted;
    unsigned long long _finished;
    unsigned long long _suspended;
    PKCAAnimatedLayoutTracker *_effectiveTracker;
    NSMutableArray *_completions;
}

- (id)init;
- (void)dealloc;
- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)trackAnimation:(id)a0;
- (void)addAbsoluteCompletion:(id /* block */)a0;
- (id /* block */)beginTrackingAbsoluteAnimation;
- (id /* block */)beginTrackingAnimation;
- (void)performAbsoluteTransactionWithBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performIsolatedAbsoluteTransactionWithBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performIsolatedTransactionWithBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performTransactionWithBlock:(id /* block */)a0 completion:(id /* block */)a1;

@end
