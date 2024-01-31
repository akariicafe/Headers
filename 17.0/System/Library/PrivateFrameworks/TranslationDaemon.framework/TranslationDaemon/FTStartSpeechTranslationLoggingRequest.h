@class FTLanguageDetected, NSString, NSArray, NSMutableDictionary, NSData, FTTranslationLocalePair;

@interface FTStartSpeechTranslationLoggingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct StartSpeechTranslationLoggingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *conversation_id;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) FTTranslationLocalePair *translation_locale_pair;
@property (readonly, nonatomic) FTLanguageDetected *detected_locale;
@property (readonly, nonatomic) NSString *user_selected_locale;
@property (readonly, nonatomic) NSArray *senses;
@property (readonly, nonatomic) NSString *user_selected_sense;
@property (readonly, nonatomic) NSArray *user_interacted_senses;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::StartSpeechTranslationLoggingRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartSpeechTranslationLoggingRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartSpeechTranslationLoggingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)senses_count;
- (void)senses_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)senses_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)user_interacted_senses_count;
- (void)user_interacted_senses_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)user_interacted_senses_objectAtIndex:(unsigned long long)a0;

@end
