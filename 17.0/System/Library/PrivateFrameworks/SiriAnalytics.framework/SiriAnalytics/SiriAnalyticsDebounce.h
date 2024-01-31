@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, SiriAnalyticsDebounceDelegate;

@interface SiriAnalyticsDebounce : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_debounceTimer;
    double _debounceInterval;
    NSObject<OS_dispatch_source> *_maximumTimer;
    double _maximumInterval;
    BOOL _hasMaximumInterval;
    id<SiriAnalyticsDebounceDelegate> _delegate;
}

- (void)_reset;
- (void).cxx_destruct;
- (void)cancel;
- (void)pulse;
- (void)_timedOut;
- (void)_debounceFired;
- (void)_pulse;
- (id)initWithDebounceInterval:(double)a0 maximumInterval:(double)a1 queue:(id)a2 delegate:(id)a3;
- (id)initWithDebounceInterval:(double)a0 queue:(id)a1 delegate:(id)a2;

@end
