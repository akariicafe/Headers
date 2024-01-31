@class NSString, TRIPersistedTaskAttribution;

@interface TRIFetchBMLTNotificationsPersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) int retryCount;
@property (nonatomic) BOOL hasRetryCount;
@property (copy, nonatomic) NSString *backgroundMlTaskId;
@property (nonatomic) BOOL hasBackgroundMlTaskId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (copy, nonatomic) NSString *bmltBatchNotificationId;
@property (nonatomic) BOOL hasBmltBatchNotificationId;

+ (id)descriptor;

@end
