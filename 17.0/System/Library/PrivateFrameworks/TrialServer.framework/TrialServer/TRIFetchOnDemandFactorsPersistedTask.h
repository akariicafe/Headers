@class NSString, TRIPersistedTaskCapabilityModifier, TRIPersistedTaskAttribution, NSMutableArray;

@interface TRIFetchOnDemandFactorsPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *namespaceName;
@property (nonatomic) BOOL hasNamespaceName;
@property (nonatomic) int retryCount;
@property (nonatomic) BOOL hasRetryCount;
@property (copy, nonatomic) NSString *notificationKey;
@property (nonatomic) BOOL hasNotificationKey;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) BOOL hasTaskAttribution;
@property (retain, nonatomic) NSMutableArray *treatmentAssetIndexesArray;
@property (readonly, nonatomic) unsigned long long treatmentAssetIndexesArray_Count;
@property (retain, nonatomic) NSMutableArray *factorPackAssetIdsArray;
@property (readonly, nonatomic) unsigned long long factorPackAssetIdsArray_Count;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (retain, nonatomic) NSMutableArray *rolloutFactorNamesArray;
@property (readonly, nonatomic) unsigned long long rolloutFactorNamesArray_Count;
@property (retain, nonatomic) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) BOOL hasCapabilityModifier;

+ (id)descriptor;

@end
