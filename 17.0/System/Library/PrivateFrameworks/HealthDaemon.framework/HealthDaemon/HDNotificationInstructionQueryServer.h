@interface HDNotificationInstructionQueryServer : HDQueryServer

+ (Class)queryClass;

- (void)_queue_start;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;

@end
