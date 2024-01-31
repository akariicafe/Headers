@class NSNumber, NSDate;

@interface HMCoreAnalyticsTimedMetricEvent : HMCoreAnalyticsMetricEvent

@property (copy) NSDate *startedDate;
@property (copy) NSDate *finishedDate;
@property (readonly) NSNumber *duration;

- (void)finish;
- (void)start;
- (id)eventPayload;
- (void).cxx_destruct;
- (id)durationData;

@end
