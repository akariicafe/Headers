@class NSString, TRIPBTimestamp, TRINotificationProcessingPolicy;

@interface TRIRolloutDeploymentPushNotification : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (retain, nonatomic) TRIPBTimestamp *deploymentDate;
@property (nonatomic) BOOL hasDeploymentDate;
@property (retain, nonatomic) TRINotificationProcessingPolicy *notificationProcessingPolicy;
@property (nonatomic) BOOL hasNotificationProcessingPolicy;

+ (id)descriptor;

@end
