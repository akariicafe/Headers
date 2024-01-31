@class NSString, NSArray, FLTSSUMetadata, NSMutableDictionary, NSData;

@interface FLTSSUFile : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SSUFile { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) unsigned short format_version;
@property (readonly, nonatomic) FLTSSUMetadata *metadata;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSArray *categories;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<SSUFile> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUFile { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUFile { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)categories_count;
- (void)categories_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)categories_objectAtIndex:(unsigned long long)a0;

@end
