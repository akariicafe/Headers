@class VNTorsoprint, VNFaceprint;

@interface VNFaceTorsoprint : VNEspressoModelImageprint

@property (nonatomic) unsigned long long personId;
@property (readonly, nonatomic) VNFaceprint *faceprint;
@property (readonly, nonatomic) VNTorsoprint *torsoprint;
@property (readonly, nonatomic, getter=isValidFaceprint) BOOL validFaceprint;
@property (readonly, nonatomic, getter=isValidTorsoprint) BOOL validTorsoprint;

+ (id)currentVersion;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)codingTypesToCodingKeys;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)a0;
+ (BOOL)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)serializeStateAndReturnError:(id *)a0;
- (id)initWithState:(id)a0 byteOffset:(unsigned long long *)a1 error:(id *)a2;
- (id)computeDistance:(id)a0 withDistanceFunction:(unsigned long long)a1 error:(id *)a2;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 faceprintConfidence:(float)a4 torsoprintConfidence:(float)a5;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 faceprintConfidence:(float)a4 torsoprintConfidence:(float)a5 originatingRequestSpecifier:(id)a6;
- (id)initWithFaceprint:(id)a0 torsoPrint:(id)a1 originatingRequestSpecifier:(id)a2;
- (id)initWithFaceprint:(id)a0 torsoPrint:(id)a1 requestRevision:(unsigned long long)a2;
- (id)initWithFaceprint:(id)a0 torsoprint:(id)a1;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)serializedLength;

@end
