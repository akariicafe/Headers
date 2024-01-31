@class NSArray, NSMutableDictionary, NSData, FTStartSpeechRequest;

@interface FTStartMultilingualSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct StartMultilingualSpeechRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) FTStartSpeechRequest *start_speech_request;
@property (readonly, nonatomic) NSArray *language_parameters_by_id;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::StartMultilingualSpeechRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartMultilingualSpeechRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartMultilingualSpeechRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)language_parameters_by_id_count;
- (void)language_parameters_by_id_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)language_parameters_by_id_objectAtIndex:(unsigned long long)a0;

@end
