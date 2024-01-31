@class QSSTranslationRequest, NSString, NSArray, QSSStartSpeechRequest, NSMutableDictionary, NSData;

@interface QSSStartSpeechTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct StartSpeechTranslationRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *conversation_id;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) NSArray *translation_locale_pairs;
@property (readonly, nonatomic) QSSStartSpeechRequest *start_speech_request;
@property (readonly, nonatomic) QSSTranslationRequest *translation_request;
@property (readonly, nonatomic) NSArray *text_to_speech_requests;
@property (readonly, nonatomic) BOOL restricted_mode;
@property (readonly, nonatomic) NSString *app_id;
@property (readonly, nonatomic) long long opt_in_status;
@property (readonly, nonatomic) BOOL streaming_mode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::StartSpeechTranslationRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartSpeechTranslationRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartSpeechTranslationRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
