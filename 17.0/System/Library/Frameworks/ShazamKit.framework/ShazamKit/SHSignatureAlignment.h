@class SHRange;

@interface SHSignatureAlignment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float alignmentConfidence;
@property (readonly, nonatomic) SHRange *queryTimeRange;
@property (readonly, nonatomic) SHRange *referenceTimeRange;

+ (id)mergedAlignments:(id)a0;

- (id)serializedRepresentation;
- (unsigned long long)hash;
- (id)initWithSerializedRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQueryRange:(id)a0 referenceRange:(id)a1 alignmentConfidence:(float)a2;

@end
