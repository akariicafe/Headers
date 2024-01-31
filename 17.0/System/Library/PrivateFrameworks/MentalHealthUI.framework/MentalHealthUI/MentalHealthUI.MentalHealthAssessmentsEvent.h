@class NSString;

@interface MentalHealthUI.MentalHealthAssessmentsEvent : _TtCs12_SwiftObject <HKAnalyticsEvent> {
    void /* unknown type, empty encoding */ step;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ assessmentType;
    void /* unknown type, empty encoding */ entryPoint;
    void /* unknown type, empty encoding */ provenance;
    void /* unknown type, empty encoding */ firstTimeStepCompleted;
    void /* unknown type, empty encoding */ firstAssessment;
}

@property (nonatomic, readonly) BOOL isEventSubmissionIHAGated;
@property (nonatomic, readonly) NSString *eventName;

- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;

@end
