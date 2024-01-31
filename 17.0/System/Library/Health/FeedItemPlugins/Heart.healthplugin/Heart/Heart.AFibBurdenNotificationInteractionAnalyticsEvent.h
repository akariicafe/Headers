@class NSString;

@interface Heart.AFibBurdenNotificationInteractionAnalyticsEvent : _TtCs12_SwiftObject <HKAnalyticsEvent> {
    void /* unknown type, empty encoding */ notificationRequest;
    void /* unknown type, empty encoding */ notificationActionIdentifier;
    void /* unknown type, empty encoding */ focusModeOnDeterminer;
}

@property (nonatomic, readonly) BOOL isEventSubmissionIHAGated;
@property (nonatomic, readonly) NSString *eventName;

- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;

@end
