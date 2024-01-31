@class FTRecognitionResult, NSString, NSMutableDictionary, NSData;

@interface FTCorrectionsValidatorRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct CorrectionsValidatorRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) FTRecognitionResult *recognition_result;
@property (readonly, nonatomic) NSString *original_utterance;
@property (readonly, nonatomic) NSString *corrected_utterance;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::CorrectionsValidatorRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CorrectionsValidatorRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CorrectionsValidatorRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
