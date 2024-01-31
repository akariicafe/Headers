@class NSString, NSMutableDictionary, NSData;

@interface FTTranslationSupportedLanguagesResponse_LanguagePair : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct LanguagePair { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *source_locale;
@property (readonly, nonatomic) NSString *target_locale;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TranslationSupportedLanguagesResponse_::LanguagePair> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct LanguagePair { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct LanguagePair { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
