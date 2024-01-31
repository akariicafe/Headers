@class NSArray, TRIClientRollout, TRIRolloutDeployment, NSDate;

@interface TRIClientRolloutArtifact : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;
@property (readonly, nonatomic) NSArray *namespaceNames;
@property (readonly, nonatomic) TRIClientRollout *rollout;
@property (readonly, nonatomic) NSArray *populations;
@property (readonly, nonatomic) NSDate *deploymentDate;
@property (readonly, nonatomic) unsigned long long downloadSize;

+ (BOOL)_signature:(id)a0 onData:(id)a1 isValidUsingPublicCertificate:(id)a2;
+ (id)artifactFromCKRecord:(id)a0 namespaceDescriptorProvider:(id)a1 error:(id *)a2;
+ (id)artifactWithTransientData:(id)a0;
+ (id)allReferencedCKRecordKeys;
+ (BOOL)_isStructurallyValidWithRollout:(id)a0 deployment:(id)a1 namespaceNames:(id)a2 populations:(id)a3 deploymentDate:(id)a4;
+ (id)artifactWithRollout:(id)a0 populations:(id)a1 deploymentDate:(id)a2 downloadSize:(unsigned long long)a3;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToArtifact:(id)a0;
- (id)initWithRollout:(id)a0 populations:(id)a1 deploymentDate:(id)a2 downloadSize:(unsigned long long)a3;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithReplacementPopulations:(id)a0;
- (id)data;
- (id)copyWithReplacementDownloadSize:(unsigned long long)a0;
- (id)description;
- (id)copyWithReplacementRollout:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementDeploymentDate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
