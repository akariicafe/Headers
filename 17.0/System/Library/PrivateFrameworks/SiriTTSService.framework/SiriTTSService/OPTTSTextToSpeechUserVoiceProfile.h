@class NSData, NSMutableDictionary;

@interface OPTTSTextToSpeechUserVoiceProfile : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechUserVoiceProfile { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) float pitch_mean;
@property (readonly, nonatomic) float pitch_std;
@property (readonly, nonatomic) float energy_mean;
@property (readonly, nonatomic) float energy_std;
@property (readonly, nonatomic) float duration_mean;
@property (readonly, nonatomic) float duration_std;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechUserVoiceProfile> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechUserVoiceProfile { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechUserVoiceProfile { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
