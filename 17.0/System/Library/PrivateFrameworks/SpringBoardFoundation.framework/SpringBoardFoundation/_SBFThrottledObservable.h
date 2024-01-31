@protocol SBFScheduler, SBFCancelable, SBFObservable;

@interface _SBFThrottledObservable : SBFObservable {
    double _interval;
    id<SBFCancelable> _delayToken;
    id<SBFObservable> _observable;
    id<SBFScheduler> _scheduler;
    id _result;
    BOOL _hasResult;
    unsigned long long _resultCounter;
}

- (void)_cancel;
- (void)dealloc;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (void)_setDelayToken:(id)a0;
- (void)_clearResult;
- (void)_sendCompletionToObsever:(id)a0;
- (void)_sendResultToObserver:(id)a0 withIdentifier:(unsigned long long)a1;
- (unsigned long long)_setResult:(id)a0;
- (id)initWithInterval:(double)a0 observable:(id)a1 scheduler:(id)a2;

@end
