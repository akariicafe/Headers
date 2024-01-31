@class NSString;

@interface HKMHValenceDistributionData : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double minimumValence;
@property (readonly, nonatomic) double maximumValence;
@property (readonly, nonatomic) long long sampleCount;
@property (readonly, nonatomic) long long reflectiveInterval;
@property (readonly, copy) NSString *hk_redactedDescription;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMinimumValence:(double)a0 maximumValence:(double)a1 sampleCount:(long long)a2 reflectiveInterval:(long long)a3;
- (void)addValenceDistribution:(id)a0;

@end
