@class NSArray, NSMutableDictionary, NSData, FTRecognitionSausage;

@interface FTSpeechTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SpeechTranslationInfo { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) FTRecognitionSausage *raw_sausage;
@property (readonly, nonatomic) NSArray *raw_nbest_choices;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationInfo> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationInfo { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationInfo { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)raw_nbest_choices_count;
- (void)raw_nbest_choices_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)raw_nbest_choices_objectAtIndex:(unsigned long long)a0;

@end
