@class NSArray, NSMutableDictionary, NSData;

@interface FTTextToSpeechUserProfile : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechUserProfile { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *resources;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)resources_count;
- (struct Offset<siri::speech::schema_fb::TextToSpeechUserProfile> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechUserProfile { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechUserProfile { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (void)resources_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)resources_objectAtIndex:(unsigned long long)a0;

@end
