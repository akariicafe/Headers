@class NSArray, NSMutableDictionary, NSData;

@interface FLTSSUExampleEncodedVector : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SSUExampleEncodedVector { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *data;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<SSUExampleEncodedVector> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUExampleEncodedVector { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUExampleEncodedVector { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)data_count;
- (void)data_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)data_objectAtIndex:(unsigned long long)a0;

@end
