@class NSData, NSString, NSArray, NSMutableDictionary, FTTextToSpeechSpeechFeatureInputText, FTTextToSpeechSpeechFeatureInputWave, FTTextToSpeechSpeechFeatureModelIdentifier;

@interface FTTextToSpeechSpeechFeatureRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechSpeechFeatureRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) FTTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property (readonly, nonatomic) FTTextToSpeechSpeechFeatureInputText *text;
@property (readonly, nonatomic) FTTextToSpeechSpeechFeatureInputWave *wave_data;
@property (readonly, nonatomic) NSArray *lexicon;
@property (readonly, nonatomic) BOOL support_homograph;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechSpeechFeatureRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechSpeechFeatureRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)lexicon_count;
- (void)lexicon_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)lexicon_objectAtIndex:(unsigned long long)a0;

@end
