@class NSObject, _HKExpiringCompletionTimer;
@protocol OS_dispatch_queue;

@interface _HDFTMProducerMetricTracker : NSObject {
    _HKExpiringCompletionTimer *_timer;
    id /* block */ _timeoutHandler;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _paused;
    BOOL _metricAvailable;
}

- (void).cxx_destruct;

@end
