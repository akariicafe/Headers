@class HDHRNotificationMetric;

@interface HDHRNotificationAnalytics : NSObject {
    HDHRNotificationMetric *_metric;
}

- (void).cxx_destruct;
- (void)submit;
- (void)_submitMetric;
- (id)_createMetricFromEventSample:(id)a0;
- (void)_setDoNotDisturbOn:(BOOL)a0;
- (id)initWithEventSample:(id)a0;

@end
