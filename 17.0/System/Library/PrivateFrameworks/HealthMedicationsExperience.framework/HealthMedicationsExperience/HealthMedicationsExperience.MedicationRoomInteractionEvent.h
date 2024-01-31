@class NSString;

@interface HealthMedicationsExperience.MedicationRoomInteractionEvent : _TtCs12_SwiftObject <HKAnalyticsEvent> {
    void /* unknown type, empty encoding */ calendar;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ roomType;
    void /* unknown type, empty encoding */ provenance;
    void /* unknown type, empty encoding */ hasSideEffectsContent;
    void /* unknown type, empty encoding */ hasPregnancyContent;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ settingManager;
}

@property (nonatomic, readonly) BOOL isEventSubmissionIHAGated;
@property (nonatomic, readonly) NSString *eventName;

- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;

@end
