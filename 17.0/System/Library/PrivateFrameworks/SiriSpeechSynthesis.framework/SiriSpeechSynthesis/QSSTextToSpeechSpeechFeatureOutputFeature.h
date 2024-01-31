@class NSString, NSMutableDictionary, NSData;

@interface QSSTextToSpeechSpeechFeatureOutputFeature : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechSpeechFeatureOutputFeature { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *phone_name;
@property (readonly, nonatomic) float begin_time;
@property (readonly, nonatomic) float end_time;
@property (readonly, nonatomic) float duration;
@property (readonly, nonatomic) float pitch;
@property (readonly, nonatomic) float energy;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureOutputFeature> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechSpeechFeatureOutputFeature { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechSpeechFeatureOutputFeature { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
