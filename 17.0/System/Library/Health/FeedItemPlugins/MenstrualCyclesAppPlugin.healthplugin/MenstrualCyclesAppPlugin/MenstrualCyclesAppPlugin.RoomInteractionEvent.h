@class NSString;

@interface MenstrualCyclesAppPlugin.RoomInteractionEvent : _TtCs12_SwiftObject <HKAnalyticsEvent> {
    void /* unknown type, empty encoding */ eventName;
    void /* unknown type, empty encoding */ launchSource;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ settingsManager;
    void /* unknown type, empty encoding */ action;
}

@property (nonatomic, copy) NSString *eventName;
@property (nonatomic, readonly) BOOL isEventSubmissionIHAGated;

- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;

@end
