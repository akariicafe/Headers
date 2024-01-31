@interface BPSAggregations : NSObject

+ (id)count;
+ (id)max;
+ (id)min;
+ (id)avg;
+ (id)sum;
+ (id)approxPercentile;
+ (id)approxPercentileWithDigestCapacity:(unsigned long long)a0;
+ (id)approximateDistinctCount;

@end
