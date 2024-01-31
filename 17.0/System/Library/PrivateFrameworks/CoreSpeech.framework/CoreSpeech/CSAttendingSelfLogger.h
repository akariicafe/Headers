@interface CSAttendingSelfLogger : NSObject

+ (void)emitAttendingContextEndedEventWithStopReason:(long long)a0 withMHUUID:(id)a1;
+ (void)emitAttendingContextStartedEventWithAttendingOptions:(id)a0 withMHUUID:(id)a1;

@end
