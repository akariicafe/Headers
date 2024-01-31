@class NSString, NSMutableDictionary, NSData, FTUserLanguageProfile;

@interface FTCreateLanguageProfileResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct CreateLanguageProfileResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) FTUserLanguageProfile *user_language_profile;
@property (readonly, nonatomic) BOOL incomplete_profile;
@property (readonly, nonatomic) BOOL recreate_apg_prons;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::CreateLanguageProfileResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CreateLanguageProfileResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CreateLanguageProfileResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
