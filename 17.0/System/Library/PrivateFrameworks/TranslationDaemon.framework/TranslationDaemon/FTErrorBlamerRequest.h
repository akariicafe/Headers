@class FTUserAcousticProfile, NSArray, NSString, NSMutableDictionary, NSData, FTStartSpeechRequest, FTUserLanguageProfile;

@interface FTErrorBlamerRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ErrorBlamerRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) FTStartSpeechRequest *start_speech_request;
@property (readonly, nonatomic) NSArray *contextual_text;
@property (readonly, nonatomic) NSString *left_context;
@property (readonly, nonatomic) NSString *right_context;
@property (readonly, nonatomic) FTUserLanguageProfile *user_language_profile;
@property (readonly, nonatomic) FTUserAcousticProfile *user_acoustic_profile;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) NSArray *audio_packets;
@property (readonly, nonatomic) NSString *ref_transcript;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::ErrorBlamerRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ErrorBlamerRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ErrorBlamerRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)audio_packets_count;
- (void)audio_packets_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)audio_packets_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)contextual_text_count;
- (void)contextual_text_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)contextual_text_objectAtIndex:(unsigned long long)a0;

@end
