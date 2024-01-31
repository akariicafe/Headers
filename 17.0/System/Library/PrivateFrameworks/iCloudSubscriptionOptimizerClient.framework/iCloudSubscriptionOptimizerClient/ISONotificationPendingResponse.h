@interface ISONotificationPendingResponse : NSObject

- (id)error;
- (BOOL)isNotificationPending;
- (id)maxDelayTimestampMillis;

@end
