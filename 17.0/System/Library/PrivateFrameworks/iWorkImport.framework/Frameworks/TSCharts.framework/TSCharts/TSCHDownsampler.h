@interface TSCHDownsampler : NSObject

+ (id)downsampleDataForSeries:(id)a0 threshold:(unsigned long long)a1;
+ (id)p_downsampleDataUsingGridPartitioningWithSeries:(id)a0 xAxis:(id)a1 yAxis:(id)a2;
+ (id)p_downsampleDataUsingGridPartitioningWithSeries:(id)a0 xAxis:(id)a1 yAxis:(id)a2 sizeAxis:(id)a3;
+ (id)p_downsampleDataUsingTrianglesWithSeries:(id)a0 toValueCount:(unsigned long long)a1 radiusAxis:(id)a2 angleAxis:(id)a3;
+ (id)p_downsampleDataUsingTrianglesWithSeries:(id)a0 toValueCount:(unsigned long long)a1 xAxis:(id)a2 yAxis:(id)a3 stacked:(BOOL)a4;

@end
