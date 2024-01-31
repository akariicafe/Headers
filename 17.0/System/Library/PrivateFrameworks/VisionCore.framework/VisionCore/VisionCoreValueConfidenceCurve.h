@interface VisionCoreValueConfidenceCurve : NSObject <NSCopying, NSSecureCoding> {
    struct vector<VisionCoreValueConfidencePoint, std::allocator<VisionCoreValueConfidencePoint>> { struct VisionCoreValueConfidencePoint *__begin_; struct VisionCoreValueConfidencePoint *__end_; struct __compressed_pair<VisionCoreValueConfidencePoint *, std::allocator<VisionCoreValueConfidencePoint>> { struct VisionCoreValueConfidencePoint *__value_; } __end_cap_; } _increasingValuePoints;
    int _resolvedPointsDistribution_DO_NOT_DIRECTLY_ACCESS;
    BOOL _confidencesAreIncreasing;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) float minimumValue;
@property (readonly) float maximumValue;
@property (readonly) float minimumConfidence;
@property (readonly) float maximumConfidence;

+ (id)curveWithValues:(const float *)a0 confidences:(const float *)a1 count:(unsigned long long)a2 error:(id *)a3;
+ (id)curveWithValuesArray:(id)a0 confidencesArray:(id)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)confidenceForValue:(float)a0;
- (float)valueForConfidence:(float)a0;

@end
