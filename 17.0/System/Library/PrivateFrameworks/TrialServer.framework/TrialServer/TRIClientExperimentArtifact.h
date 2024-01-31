@class NSString, NSArray, NSData, TRIExperimentDeployment, TRIClientExperiment, NSDate;

@interface TRIClientExperimentArtifact : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) TRIExperimentDeployment *experimentDeployment;
@property (readonly) BOOL hasDeploymentId;
@property (retain, nonatomic) NSString *experimentId;
@property (nonatomic) int deploymentId;
@property (nonatomic) int deploymentEnvironment;
@property (nonatomic) int cloudKitContainer;
@property (retain, nonatomic) NSString *teamId;
@property (retain, nonatomic) NSData *encodedExperimentDefinition;
@property (retain, nonatomic) NSString *encodedExperimentDefinitionSignature;
@property (retain, nonatomic) NSData *publicCertificate;
@property (readonly, nonatomic) TRIClientExperiment *experiment;
@property (nonatomic) int experimentState;
@property (nonatomic) int experimentType;
@property (nonatomic) int experimentPriority;
@property (nonatomic) BOOL internalBuildOnly;
@property (retain, nonatomic) NSDate *deploymentDate;
@property (retain, nonatomic) NSArray *namespaces;
@property (retain, nonatomic) NSArray *namespaceCompatibilityVersions;

+ (id)artifactWithExperiment:(id)a0;
+ (id)allReferencedCKRecordKeys;
+ (id)_convertNamespaceIdsToNames:(id)a0;
+ (id)artifactFromCKRecordResult:(id)a0 withNamespaceDescriptorProvider:(id)a1 container:(int)a2 teamId:(id)a3 requireDeploymentId:(BOOL)a4 completion:(id /* block */)a5;
+ (id)parseFromData:(id)a0 error:(id *)a1;

- (id)init;
- (unsigned long long)hash;
- (id)initWithExperiment:(id)a0;
- (id)asPersistedArtifact;
- (BOOL)isCompatibleWithNamespaceDescriptorProvider:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasNamespacesAvailableForExperimentWithDatabase:(id)a0;
- (id)data;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)saveWithDatabase:(id)a0 paths:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
