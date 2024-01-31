@class NSString;

@interface MenstrualCyclesAppPlugin.CycleDeviationAnalyticsEvent : _TtCs12_SwiftObject <HKAnalyticsEvent> {
    void /* unknown type, empty encoding */ eventName;
    void /* unknown type, empty encoding */ step;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ unconfirmedDeviations;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ didEditCycleHistory;
    void /* unknown type, empty encoding */ didEditCycleFactors;
}

@property (nonatomic, copy) NSString *eventName;
@property (nonatomic, readonly) BOOL isEventSubmissionIHAGated;

- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;

@end
