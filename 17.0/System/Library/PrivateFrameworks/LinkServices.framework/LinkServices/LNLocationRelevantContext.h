@class CLRegion;

@interface LNLocationRelevantContext : LNRelevantContext

@property (readonly, copy, nonatomic) CLRegion *region;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRegion:(id)a0;
- (id)analyticsDescription;
- (id)asCondition;

@end
