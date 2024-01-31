@class NSString, NSArray, NSMutableDictionary, NSData;

@interface QSSBatchTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BatchTranslationRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) NSString *task;
@property (readonly, nonatomic) NSString *source_language;
@property (readonly, nonatomic) NSString *target_language;
@property (readonly, nonatomic) NSArray *paragraphs;
@property (readonly, nonatomic) NSString *app_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) long long opt_in_status;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::BatchTranslationRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchTranslationRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchTranslationRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
