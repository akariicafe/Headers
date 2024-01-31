@interface SignpostCAIntervalAggregationStats : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long intervalCount;
@property (readonly, nonatomic) unsigned long long totalIntervalDurationNs;
@property (readonly, nonatomic) float averageIntervalDurationNs;
@property (readonly, nonatomic) float maxIntervalDurationNs;

- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_addAggregationStats:(id)a0;
- (void)_addDurationNsToAggregation:(unsigned long long)a0;

@end
