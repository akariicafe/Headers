@class VNPersonsModelAlgorithm, NSNumber;

@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_explicitlySetMaximumIdentities;
    NSNumber *_explicitlySetMaximumTrainingFaceprintsPerIdentity;
}

@property (class, readonly, nonatomic) unsigned long long maximumAllowableIdentities;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) VNPersonsModelAlgorithm *algorithm;
@property (nonatomic) unsigned long long maximumIdentities;
@property (nonatomic) unsigned long long maximumTrainingFaceprintsPerIdentity;
@property (nonatomic) unsigned long long faceprintRequestRevision;

+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;

- (id)algorithmOfClass:(Class)a0 error:(id *)a1;
- (int)faceID3ModelMaximumIDs;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (int)faceID3ModelSeed;
- (int)faceID2ModelMaximumElementsPerID;
- (int)faceID3ModelMaximumElementsPerID;
- (id)description;
- (int)faceID3IndexMode;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resolvedAlgorithmAndReturnError:(id *)a0;

@end
