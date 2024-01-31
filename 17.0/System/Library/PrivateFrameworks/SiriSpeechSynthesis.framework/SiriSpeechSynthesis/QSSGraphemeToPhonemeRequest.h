@class NSString, QSSContextWithPronHints, NSMutableDictionary, NSData;

@interface QSSGraphemeToPhonemeRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct GraphemeToPhonemeRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *orthography;
@property (readonly, nonatomic) QSSContextWithPronHints *context_with_pron_hints;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::GraphemeToPhonemeRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct GraphemeToPhonemeRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct GraphemeToPhonemeRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
