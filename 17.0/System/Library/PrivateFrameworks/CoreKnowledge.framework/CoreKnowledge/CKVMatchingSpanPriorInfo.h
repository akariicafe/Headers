@interface CKVMatchingSpanPriorInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int ordinality;
@property (readonly, nonatomic) float score;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToMatchingSpanPriorInfo:(id)a0;
- (id)initWithOrdinality:(unsigned int)a0 score:(float)a1;

@end
