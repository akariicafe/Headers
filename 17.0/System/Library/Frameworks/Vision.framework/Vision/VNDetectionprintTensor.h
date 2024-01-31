@class VisionCoreEspressoTensorShape;

@interface VNDetectionprintTensor : VNEspressoModelImageprint

@property (readonly, nonatomic) VisionCoreEspressoTensorShape *shape;

+ (id)currentVersion;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:(id)a0;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (unsigned long long)serializationMagicNumber;
+ (BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)a0;
+ (BOOL)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)a0;
+ (id)tensorFromCSUBuffer:(id)a0 originatingRequestSpecifier:(id)a1 error:(id *)a2;
+ (id)tensorFromEspressoBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a0 originatingRequestSpecifier:(id)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)VNEspressoModelImageprintMLMultiArrayWithConstraint:(id)a0 error:(id *)a1;
- (id)initWithDescriptorData:(id)a0 elementType:(unsigned long long)a1 elementCount:(unsigned long long)a2 originatingRequestSpecifier:(id)a3;

@end
