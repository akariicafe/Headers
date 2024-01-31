@class NSArray, NSMutableDictionary, NSData;

@interface FTMultiUserFinalSpeechRecognitionResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct MultiUserFinalSpeechRecognitionResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *final_speech_recognition_response;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::MultiUserFinalSpeechRecognitionResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultiUserFinalSpeechRecognitionResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultiUserFinalSpeechRecognitionResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)final_speech_recognition_response_count;
- (void)final_speech_recognition_response_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)final_speech_recognition_response_objectAtIndex:(unsigned long long)a0;

@end
