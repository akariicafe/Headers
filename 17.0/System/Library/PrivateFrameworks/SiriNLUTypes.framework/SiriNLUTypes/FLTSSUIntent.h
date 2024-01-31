@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FLTSSUIntent : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SSUIntent { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) NSArray *examples;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<SSUIntent> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUIntent { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUIntent { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)examples_count;
- (void)examples_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)examples_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)parameters_count;
- (void)parameters_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)parameters_objectAtIndex:(unsigned long long)a0;

@end
