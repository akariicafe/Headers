@class NSString, FLTCDMCATISwiftBitVector;

@interface FLTMutableCDMCATISwiftBloomFilter : FLTCDMCATISwiftBloomFilter

@property (copy, nonatomic) FLTCDMCATISwiftBitVector *bit_vector;
@property (nonatomic) unsigned long long number_of_bits;
@property (nonatomic) unsigned long long number_of_hashes;
@property (nonatomic) unsigned long long seed;
@property (nonatomic) unsigned int expected_number_of_items;
@property (nonatomic) double false_positive_rate;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned int number_of_items;
@property (nonatomic) unsigned int expected_items_buffer;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
