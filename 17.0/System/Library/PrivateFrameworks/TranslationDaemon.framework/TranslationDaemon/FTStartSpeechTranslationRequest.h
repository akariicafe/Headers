@class NSData, NSString, NSArray, FTTranslationRequest, FTTranslationOptions, FTStartSpeechRequest, NSMutableDictionary;

@interface FTStartSpeechTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct StartSpeechTranslationRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *conversation_id;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) NSArray *translation_locale_pairs;
@property (readonly, nonatomic) FTStartSpeechRequest *start_speech_request;
@property (readonly, nonatomic) FTTranslationRequest *translation_request;
@property (readonly, nonatomic) NSArray *text_to_speech_requests;
@property (readonly, nonatomic) BOOL restricted_mode;
@property (readonly, nonatomic) NSString *app_id;
@property (readonly, nonatomic) long long opt_in_status;
@property (readonly, nonatomic) BOOL streaming_mode;
@property (readonly, nonatomic) FTTranslationOptions *options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::StartSpeechTranslationRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartSpeechTranslationRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartSpeechTranslationRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)text_to_speech_requests_count;
- (void)text_to_speech_requests_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)text_to_speech_requests_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)translation_locale_pairs_count;
- (void)translation_locale_pairs_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)translation_locale_pairs_objectAtIndex:(unsigned long long)a0;

@end
