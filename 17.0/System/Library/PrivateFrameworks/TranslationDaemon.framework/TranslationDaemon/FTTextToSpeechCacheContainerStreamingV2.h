@class NSData, NSString, NSArray, FTBeginTextToSpeechStreamingResponse, NSMutableDictionary, FTStartTextToSpeechStreamingRequest, FTFinalTextToSpeechStreamingResponse;

@interface FTTextToSpeechCacheContainerStreamingV2 : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechCacheContainerStreamingV2 { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *original_session_id;
@property (readonly, nonatomic) FTStartTextToSpeechStreamingRequest *cached_request;
@property (readonly, nonatomic) FTBeginTextToSpeechStreamingResponse *cached_begin_response;
@property (readonly, nonatomic) NSArray *cached_partial_response;
@property (readonly, nonatomic) FTFinalTextToSpeechStreamingResponse *cached_final_response;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechCacheContainerStreamingV2> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechCacheContainerStreamingV2 { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechCacheContainerStreamingV2 { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)cached_partial_response_count;
- (void)cached_partial_response_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)cached_partial_response_objectAtIndex:(unsigned long long)a0;

@end
