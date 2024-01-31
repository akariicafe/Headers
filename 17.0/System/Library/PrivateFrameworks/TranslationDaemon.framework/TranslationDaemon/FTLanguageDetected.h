@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTLanguageDetected : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct LanguageDetected { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *detected_locale;
@property (readonly, nonatomic) NSArray *predictions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::LanguageDetected> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct LanguageDetected { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct LanguageDetected { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)predictions_count;
- (void)predictions_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)predictions_objectAtIndex:(unsigned long long)a0;

@end
