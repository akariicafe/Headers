@class NSData, NSArray, NSMutableDictionary;

@interface QSSTextToSpeechCacheObject : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechCacheObject { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSData *audio;
@property (readonly, nonatomic) NSArray *word_timing_info;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechCacheObject> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (void)audio:(id /* block */)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechCacheObject { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechCacheObject { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
