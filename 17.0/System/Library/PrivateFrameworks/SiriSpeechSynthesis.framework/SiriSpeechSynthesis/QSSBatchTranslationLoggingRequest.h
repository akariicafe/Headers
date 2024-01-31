@class NSString, NSMutableDictionary, NSData;

@interface QSSBatchTranslationLoggingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BatchTranslationLoggingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int time_to_first_response;
@property (readonly, nonatomic) int time_to_viewport_complete;
@property (readonly, nonatomic) int time_to_page_complete;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::BatchTranslationLoggingRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchTranslationLoggingRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchTranslationLoggingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
