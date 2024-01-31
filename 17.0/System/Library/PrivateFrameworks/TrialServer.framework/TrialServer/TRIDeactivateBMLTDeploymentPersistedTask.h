@class NSString;

@interface TRIDeactivateBMLTDeploymentPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *backgroundMlTaskId;
@property (nonatomic) BOOL hasBackgroundMlTaskId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) int triggerEvent;
@property (nonatomic) BOOL hasTriggerEvent;
@property (copy, nonatomic) NSString *bmltBatchNotificationId;
@property (nonatomic) BOOL hasBmltBatchNotificationId;

+ (id)descriptor;

@end
