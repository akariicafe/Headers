@class NSString, TRIPersistedTaskAttribution;

@interface TRIActivateTargetedBMLTDeploymentPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *backgroundMlTaskId;
@property (nonatomic) BOOL hasBackgroundMlTaskId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (copy, nonatomic) NSString *factorPackSetId;
@property (nonatomic) BOOL hasFactorPackSetId;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) BOOL hasTaskAttribution;
@property (copy, nonatomic) NSString *bmltBatchNotificationId;
@property (nonatomic) BOOL hasBmltBatchNotificationId;

+ (id)descriptor;

@end
