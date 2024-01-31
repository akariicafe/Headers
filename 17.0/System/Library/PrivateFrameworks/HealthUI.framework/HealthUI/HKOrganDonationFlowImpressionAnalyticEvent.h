@class NSString;

@interface HKOrganDonationFlowImpressionAnalyticEvent : NSObject <HKAnalyticsEvent> {
    int _impressionEvent;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)createEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)initWithImpressionEvent:(int)a0;

@end
