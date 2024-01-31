@class QSSTextToSpeechSpeechFeatureModelIdentifier, NSString, QSSTextToSpeechSpeechFeatureInputWave, NSMutableDictionary, QSSTextToSpeechSpeechFeatureInputText, NSData;

@interface QSSTextToSpeechSpeechFeatureRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechSpeechFeatureRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) QSSTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property (readonly, nonatomic) QSSTextToSpeechSpeechFeatureInputText *text;
@property (readonly, nonatomic) QSSTextToSpeechSpeechFeatureInputWave *wave_data;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechSpeechFeatureRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechSpeechFeatureRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
