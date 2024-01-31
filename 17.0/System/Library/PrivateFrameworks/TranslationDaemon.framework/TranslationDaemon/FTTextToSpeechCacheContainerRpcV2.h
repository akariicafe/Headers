@class FTTextToSpeechResponse, NSString, NSMutableDictionary, FTTextToSpeechRequest, NSData;

@interface FTTextToSpeechCacheContainerRpcV2 : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechCacheContainerRpcV2 { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *original_session_id;
@property (readonly, nonatomic) FTTextToSpeechRequest *cached_request;
@property (readonly, nonatomic) FTTextToSpeechResponse *cached_response;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechCacheContainerRpcV2> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechCacheContainerRpcV2 { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechCacheContainerRpcV2 { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
