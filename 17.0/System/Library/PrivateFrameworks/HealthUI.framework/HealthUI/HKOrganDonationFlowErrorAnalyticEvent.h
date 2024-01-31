@class NSString;

@interface HKOrganDonationFlowErrorAnalyticEvent : NSObject <HKAnalyticsEvent> {
    int _errorType;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (id)initWithErrorType:(int)a0;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)createEventPayloadWithDataSource:(id)a0 error:(id *)a1;

@end
