@class NSString, NSMutableDictionary, NSData;

@interface QSSPartialSpeechRecognitionResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct PartialSpeechRecognitionResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSString *recognition_text;
@property (readonly, nonatomic) BOOL is_stable_result;
@property (readonly, nonatomic) int audio_duration_ms;
@property (readonly, nonatomic) int confidence;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *request_locale;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::PartialSpeechRecognitionResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct PartialSpeechRecognitionResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct PartialSpeechRecognitionResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
