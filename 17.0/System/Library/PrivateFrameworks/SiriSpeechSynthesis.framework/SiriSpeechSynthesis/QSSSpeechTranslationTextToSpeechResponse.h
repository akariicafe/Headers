@class NSString, NSMutableDictionary, QSSTextToSpeechResponse, NSData;

@interface QSSSpeechTranslationTextToSpeechResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SpeechTranslationTextToSpeechResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *conversation_id;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) NSString *target_locale;
@property (readonly, nonatomic) QSSTextToSpeechResponse *text_to_speech_response;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationTextToSpeechResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationTextToSpeechResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationTextToSpeechResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
