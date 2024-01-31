@class NSArray, NSMutableDictionary, NSData;

@interface FLTSSUCategory : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SSUCategory { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSArray *groups;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<SSUCategory> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUCategory { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUCategory { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)groups_count;
- (void)groups_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)groups_objectAtIndex:(unsigned long long)a0;

@end
