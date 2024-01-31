@class NSData, NSArray, NSString, QSSStartSpeechRequest, QSSUserLanguageProfile, QSSUserAcousticProfile, NSMutableDictionary;

@interface QSSErrorBlamerRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ErrorBlamerRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) QSSStartSpeechRequest *start_speech_request;
@property (readonly, nonatomic) NSArray *contextual_text;
@property (readonly, nonatomic) NSString *left_context;
@property (readonly, nonatomic) NSString *right_context;
@property (readonly, nonatomic) QSSUserLanguageProfile *user_language_profile;
@property (readonly, nonatomic) QSSUserAcousticProfile *user_acoustic_profile;
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

@end
