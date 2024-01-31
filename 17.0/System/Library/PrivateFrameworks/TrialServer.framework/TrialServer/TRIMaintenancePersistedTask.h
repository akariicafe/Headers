@interface TRIMaintenancePersistedTask : TRIPBMessage

@property (nonatomic) int retryCount;
@property (nonatomic) BOOL hasRetryCount;

+ (id)descriptor;

@end
