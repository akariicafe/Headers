@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTCategoryData : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct CategoryData { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *category_name;
@property (readonly, nonatomic) NSArray *category_data;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::CategoryData> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CategoryData { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CategoryData { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)category_data_count;
- (void)category_data_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)category_data_objectAtIndex:(unsigned long long)a0;

@end
