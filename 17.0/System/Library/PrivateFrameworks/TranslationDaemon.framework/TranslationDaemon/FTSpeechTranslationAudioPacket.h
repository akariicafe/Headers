@class NSArray, NSMutableDictionary, NSData;

@interface FTSpeechTranslationAudioPacket : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SpeechTranslationAudioPacket { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *audio_frames;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationAudioPacket> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationAudioPacket { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationAudioPacket { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)audio_frames_count;
- (void)audio_frames_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)audio_frames_objectAtIndex:(unsigned long long)a0;

@end
