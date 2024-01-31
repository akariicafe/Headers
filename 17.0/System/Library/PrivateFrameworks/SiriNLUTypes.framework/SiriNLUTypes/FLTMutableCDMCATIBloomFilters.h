@class NSArray, FLTCDMCATISwiftBloomFilter;

@interface FLTMutableCDMCATIBloomFilters : FLTCDMCATIBloomFilters

@property (copy, nonatomic) FLTCDMCATISwiftBloomFilter *general_bf;
@property (copy, nonatomic) NSArray *array_bf;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
