@class NSString;

@interface MentalHealthUI.StateOfMindLoggingEvent : _TtCs12_SwiftObject <HKAnalyticsEvent> {
    void /* unknown type, empty encoding */ step;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ entryPoint;
    void /* unknown type, empty encoding */ provenance;
    void /* unknown type, empty encoding */ loggingType;
    void /* unknown type, empty encoding */ hasLabel;
    void /* unknown type, empty encoding */ hasAssociation;
    void /* unknown type, empty encoding */ firstTimeStepCompleted;
    void /* unknown type, empty encoding */ firstTimeLogging;
}

@property (nonatomic, readonly) BOOL isEventSubmissionIHAGated;
@property (nonatomic, readonly) NSString *eventName;

- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;

@end
