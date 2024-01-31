@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTStartLanguageDetectionRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct StartLanguageDetectionRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSArray *locales;
@property (readonly, nonatomic) long long codec;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::StartLanguageDetectionRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartLanguageDetectionRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartLanguageDetectionRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)locales_count;
- (void)locales_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)locales_objectAtIndex:(unsigned long long)a0;

@end
