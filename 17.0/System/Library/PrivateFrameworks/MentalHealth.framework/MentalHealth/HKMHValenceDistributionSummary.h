@class NSArray, NSString;

@interface HKMHValenceDistributionSummary : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { long long start; long long duration; } dayIndexRange;
@property (readonly, nonatomic) NSArray *valenceDistributions;
@property (readonly, nonatomic) long long countMomentary;
@property (readonly, nonatomic) long long countDaily;
@property (readonly, nonatomic) long long totalSampleCount;
@property (readonly, copy) NSString *hk_redactedDescription;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDayIndexRange:(struct { long long x0; long long x1; })a0 valenceDistributions:(id)a1;

@end
