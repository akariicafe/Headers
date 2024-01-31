@class NSString;

@interface HealthUI.HKInteractiveChartInteractionAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    void /* unknown type, empty encoding */ eventPayload;
}

@property (nonatomic, readonly) BOOL isEventSubmissionIHAGated;
@property (nonatomic, readonly) NSString *eventName;

- (id)init;
- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)initFor:(id)a0 timeScopeSelected:(long long)a1;
- (id)initWithShowMoreDataForDataType:(id)a0;
- (id)initWithShowMoreDataForDisplayType:(id)a0;

@end
