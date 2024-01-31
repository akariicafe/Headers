@class NSString, HDNotificationInstructionMessage, NSError;

@interface HDNotificationInstructionSyncSendEvent : NSObject <HKAnalyticsEvent> {
    HDNotificationInstructionMessage *_message;
    NSError *_sendError;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)initWithNotificationInstructionMessage:(id)a0 sendError:(id)a1;

@end
