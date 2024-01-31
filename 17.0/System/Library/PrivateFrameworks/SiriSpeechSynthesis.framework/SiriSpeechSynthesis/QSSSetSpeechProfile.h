@class NSString, QSSUserLanguageProfile, NSMutableDictionary, NSData, QSSUserAcousticProfile;

@interface QSSSetSpeechProfile : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SetSpeechProfile { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) QSSUserLanguageProfile *user_language_profile;
@property (readonly, nonatomic) QSSUserAcousticProfile *user_acoustic_profile;
@property (readonly, nonatomic) NSString *language;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::SetSpeechProfile> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SetSpeechProfile { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SetSpeechProfile { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
