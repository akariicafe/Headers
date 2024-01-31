@class NSString, NSMutableDictionary, NSData;

@interface FTBatchTranslationFeedbackRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BatchTranslationFeedbackRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *source_content;
@property (readonly, nonatomic) NSString *translated_content;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *errors;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *source_language;
@property (readonly, nonatomic) NSString *target_language;
@property (readonly, nonatomic) NSString *safari_version;
@property (readonly, nonatomic) NSString *app_id;
@property (readonly, nonatomic) NSString *os_version;
@property (readonly, nonatomic) NSString *device_type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::BatchTranslationFeedbackRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchTranslationFeedbackRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchTranslationFeedbackRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
