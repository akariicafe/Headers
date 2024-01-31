@class NSArray, NSMutableDictionary, FTTextToSpeechCacheMetaInfo, NSData;

@interface FTTextToSpeechCacheContainer : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechCacheContainer { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) FTTextToSpeechCacheMetaInfo *cache_meta_info;
@property (readonly, nonatomic) NSArray *cache_object;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechCacheContainer> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechCacheContainer { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechCacheContainer { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)cache_object_count;
- (void)cache_object_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)cache_object_objectAtIndex:(unsigned long long)a0;

@end
