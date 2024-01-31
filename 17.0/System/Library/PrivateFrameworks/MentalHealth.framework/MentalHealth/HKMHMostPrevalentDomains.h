@class HKMHDomainSummary;

@interface HKMHMostPrevalentDomains : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { long long start; long long duration; } dayIndexRange;
@property (readonly, nonatomic) HKMHDomainSummary *mostUnpleasantDomains;
@property (readonly, nonatomic) HKMHDomainSummary *mostPleasantDomains;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMostUnpleasantDomains:(id)a0 mostPleasantDomains:(id)a1 dayIndexRange:(struct { long long x0; long long x1; })a2;

@end
