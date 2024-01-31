@class NSString, TRIPersistedTaskAttribution;

@interface TRIBMLTTargetingPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *backgroundMlTaskId;
@property (nonatomic) BOOL hasBackgroundMlTaskId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL includeDependencies;
@property (nonatomic) BOOL hasIncludeDependencies;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) int triggerEvent;
@property (nonatomic) BOOL hasTriggerEvent;
@property (copy, nonatomic) NSString *bmltBatchNotificationId;
@property (nonatomic) BOOL hasBmltBatchNotificationId;

+ (id)descriptor;

@end
