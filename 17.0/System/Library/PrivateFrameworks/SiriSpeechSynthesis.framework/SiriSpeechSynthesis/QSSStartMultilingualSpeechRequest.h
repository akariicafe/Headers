@class NSArray, NSMutableDictionary, QSSStartSpeechRequest, NSData;

@interface QSSStartMultilingualSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct StartMultilingualSpeechRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) QSSStartSpeechRequest *start_speech_request;
@property (readonly, nonatomic) NSArray *language_parameters_by_id;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::StartMultilingualSpeechRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartMultilingualSpeechRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartMultilingualSpeechRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
