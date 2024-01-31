@protocol SBFScheduler, SBFObservable;

@interface _SBFScheduledObservable : SBFObservable {
    id<SBFObservable> _observable;
    id<SBFScheduler> _scheduler;
}

- (id)initWithObservable:(id)a0 scheduler:(id)a1;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;

@end
