@class NSString, NSArray, NSMutableDictionary, NSData, FTUserLanguageProfile;

@interface FTCreateLanguageProfileRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct CreateLanguageProfileRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSArray *user_data;
@property (readonly, nonatomic) FTUserLanguageProfile *user_language_profile;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::CreateLanguageProfileRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CreateLanguageProfileRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CreateLanguageProfileRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)user_data_count;
- (void)user_data_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)user_data_objectAtIndex:(unsigned long long)a0;

@end
