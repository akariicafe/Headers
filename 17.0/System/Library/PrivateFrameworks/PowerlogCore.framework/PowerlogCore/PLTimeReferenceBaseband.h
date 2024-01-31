@class PLNSNotificationOperatorComposition;

@interface PLTimeReferenceBaseband : PLTimeReferenceDynamic

@property (retain) PLNSNotificationOperatorComposition *basebandTimeNotification;
@property BOOL followupCurrentTimeRunning;

- (id)initWithTimeManager:(id)a0 entryDefinitionKey:(id)a1 timeReferenceType:(long long)a2;
- (void)dealloc;
- (void)timeChangedNotificationReceived:(id)a0;
- (void)registerForTimeChangedNotification;
- (void).cxx_destruct;
- (id)currentTime;

@end
