@class NSString, TRIPBTimestamp, NSData, TRIPBUInt32Array, NSMutableArray;

@interface TRIPersistedExperimentArtifact : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) int cloudKitContainer;
@property (nonatomic) BOOL hasCloudKitContainer;
@property (copy, nonatomic) NSString *teamId;
@property (nonatomic) BOOL hasTeamId;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int priority;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) int projectId;
@property (nonatomic) BOOL hasProjectId;
@property (copy, nonatomic) NSData *encodedExperimentDefinition;
@property (nonatomic) BOOL hasEncodedExperimentDefinition;
@property (copy, nonatomic) NSString *encodedExperimentDefinitionSignature;
@property (nonatomic) BOOL hasEncodedExperimentDefinitionSignature;
@property (copy, nonatomic) NSData *publicCertificate;
@property (nonatomic) BOOL hasPublicCertificate;
@property (nonatomic) BOOL internalBuildOnly;
@property (nonatomic) BOOL hasInternalBuildOnly;
@property (retain, nonatomic) TRIPBTimestamp *deploymentDate;
@property (nonatomic) BOOL hasDeploymentDate;
@property (retain, nonatomic) NSMutableArray *namespacesArray;
@property (readonly, nonatomic) unsigned long long namespacesArray_Count;
@property (retain, nonatomic) TRIPBUInt32Array *namespaceCompatibilityVersionsArray;
@property (readonly, nonatomic) unsigned long long namespaceCompatibilityVersionsArray_Count;
@property (nonatomic) int deploymentEnvironment;
@property (nonatomic) BOOL hasDeploymentEnvironment;

+ (id)descriptor;

@end
