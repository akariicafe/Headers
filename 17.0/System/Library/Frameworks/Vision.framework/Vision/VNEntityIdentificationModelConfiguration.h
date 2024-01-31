@class NSArray, VNRequestSpecifier, VNEntityIdentificationModelAlgorithm;

@interface VNEntityIdentificationModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _maximumEntities;
    unsigned long long _maximumTrainingPrintsPerEntity;
}

@property (class, readonly) unsigned long long maximumAllowableEntities;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) VNEntityIdentificationModelAlgorithm *algorithm;
@property (readonly, copy) VNRequestSpecifier *entityPrintOriginatingRequestSpecifier;
@property (readonly, copy) NSArray *acceptableEntityPrintOriginatingRequestSpecifiers;
@property unsigned long long maximumEntities;
@property unsigned long long maximumTrainingPrintsPerEntity;

+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;
+ (id)newConfigurationForEntityPrintsGeneratedByRequest:(id)a0 error:(id *)a1;

- (id)algorithmOfClass:(Class)a0 error:(id *)a1;
- (int)faceID3ModelMaximumIDs;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (int)faceID3ModelSeed;
- (int)faceID3ModelMaximumElementsPerID;
- (id)description;
- (int)faceID3IndexMode;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resolvedAlgorithmAndReturnError:(id *)a0;
- (int)faceIDModelMaximumElementsPerID;
- (id)initWithEntityPrintOriginatingRequestSpecifier:(id)a0;

@end
