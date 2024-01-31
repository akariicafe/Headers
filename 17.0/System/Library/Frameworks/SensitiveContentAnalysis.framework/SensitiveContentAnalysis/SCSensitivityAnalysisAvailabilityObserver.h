@protocol MOCancellable;

@interface SCSensitivityAnalysisAvailabilityObserver : NSObject {
    id<MOCancellable> _subscription;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSubscription:(id)a0;

@end
