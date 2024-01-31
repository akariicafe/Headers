@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FLTSSUCategoryGroup : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SSUCategoryGroup { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *positive_intents;
@property (readonly, nonatomic) NSArray *negative_examples;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<SSUCategoryGroup> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUCategoryGroup { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUCategoryGroup { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (id)positive_intents_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)negative_examples_count;
- (void)negative_examples_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)negative_examples_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)positive_intents_count;
- (void)positive_intents_enumerateObjectsUsingBlock:(id /* block */)a0;

@end
