@class NSMutableDictionary, HMCoreAnalyticsMetricEventDispatcher;

@interface HMAccessorySettingsMetricsDispatcher : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_trackingEvents;
}

@property (readonly) HMCoreAnalyticsMetricEventDispatcher *metricEventDispatcher;

- (id)finishTrackingEventWithIdentifier:(id)a0;
- (void)startTrackingEvent:(id)a0 withEventIdentifier:(id)a1;
- (void)submitEventWithMessage:(id)a0 error:(id)a1;
- (id)initWithCoreAnalyticsMetricDispatcher:(id)a0;
- (void).cxx_destruct;
- (void)startEventWithMessage:(id)a0 updateKeyPath:(id)a1;

@end
