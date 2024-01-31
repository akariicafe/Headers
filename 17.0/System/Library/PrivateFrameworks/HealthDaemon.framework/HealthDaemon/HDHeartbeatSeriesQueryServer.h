@interface HDHeartbeatSeriesQueryServer : HDQueryServer

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void)_queue_start;

@end
