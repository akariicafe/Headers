@class NSData, NSMutableDictionary;

@interface QSSTextToSpeechRequestProsodyControlConfig : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechRequestProsodyControlConfig { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) float global_rate;
@property (readonly, nonatomic) float global_pitch;
@property (readonly, nonatomic) float global_energy;
@property (readonly, nonatomic) float global_sent_pitch;
@property (readonly, nonatomic) float global_sent_pitchrange;
@property (readonly, nonatomic) float global_sent_duration;
@property (readonly, nonatomic) float global_sent_energy;
@property (readonly, nonatomic) float global_sent_tilt;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechRequestProsodyControlConfig> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechRequestProsodyControlConfig { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechRequestProsodyControlConfig { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
