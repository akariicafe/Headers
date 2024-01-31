@class SHRange;

@interface SHMatchedAdjustedTimeRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SHRange *originalTimeRange;
@property (readonly, nonatomic) SHRange *updatedTimeRange;

- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOriginalTimeRange:(id)a0 updatedTimeRange:(id)a1;

@end
