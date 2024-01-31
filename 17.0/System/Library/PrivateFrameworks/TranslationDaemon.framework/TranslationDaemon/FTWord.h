@class NSString, NSData, NSMutableDictionary;

@interface FTWord : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct Word { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *orthography;
@property (readonly, nonatomic) NSData *pronunciations;
@property (readonly, nonatomic) int frequency;
@property (readonly, nonatomic) NSString *tag;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::Word> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct Word { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct Word { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (void)pronunciations:(id /* block */)a0;

@end
