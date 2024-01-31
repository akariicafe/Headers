@class NSString, HDProfile;

@interface HDMedicationOntologyDailyAnalytics : NSObject <HKAnalyticsEvent> {
    HDProfile *_profile;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (id)init;
- (id)initWithProfile:(id)a0;
- (id)shardRegistry;
- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;

@end
