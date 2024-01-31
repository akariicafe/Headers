@class FLTCDMCATISwiftBloomFilter, NSArray, NSMutableDictionary, NSData;

@interface FLTCDMCATIBloomFilters : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct CDMCATIBloomFilters { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) FLTCDMCATISwiftBloomFilter *general_bf;
@property (readonly, nonatomic) NSArray *array_bf;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<CDMCATIBloomFilters> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CDMCATIBloomFilters { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CDMCATIBloomFilters { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)array_bf_count;
- (void)array_bf_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)array_bf_objectAtIndex:(unsigned long long)a0;

@end
