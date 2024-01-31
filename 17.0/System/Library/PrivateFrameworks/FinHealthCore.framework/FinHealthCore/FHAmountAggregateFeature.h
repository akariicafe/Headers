@class NSString;

@interface FHAmountAggregateFeature : FHAggregateFeature

@property (copy, nonatomic) NSString *comparator;
@property (nonatomic) long long amount;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAmount:(unsigned long long)a0 comparator:(id)a1;

@end
