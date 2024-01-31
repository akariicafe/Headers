@class PPLabeledValue;

@interface PPScoredLabeledValue : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PPLabeledValue *labeledValue;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) unsigned char flags;

+ (id)scoredLabeledValueWithLabeledValue:(id)a0 score:(double)a1 flags:(unsigned char)a2;

- (long long)reverseCompare:(id)a0;
- (unsigned long long)hash;
- (id)initWithLabeledValue:(id)a0 score:(double)a1 flags:(unsigned char)a2;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToScoredLabeledValue:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
