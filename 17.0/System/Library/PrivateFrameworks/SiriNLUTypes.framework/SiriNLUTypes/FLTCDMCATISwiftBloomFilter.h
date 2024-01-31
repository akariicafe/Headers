@class NSString, FLTCDMCATISwiftBitVector, NSMutableDictionary, NSData;

@interface FLTCDMCATISwiftBloomFilter : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct CDMCATISwiftBloomFilter { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) FLTCDMCATISwiftBitVector *bit_vector;
@property (readonly, nonatomic) unsigned long long number_of_bits;
@property (readonly, nonatomic) unsigned long long number_of_hashes;
@property (readonly, nonatomic) unsigned long long seed;
@property (readonly, nonatomic) unsigned int expected_number_of_items;
@property (readonly, nonatomic) double false_positive_rate;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int number_of_items;
@property (readonly, nonatomic) unsigned int expected_items_buffer;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<CDMCATISwiftBloomFilter> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CDMCATISwiftBloomFilter { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CDMCATISwiftBloomFilter { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
