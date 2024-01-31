@class FTTranslationSupportedLanguagesRequest, FTBatchTranslationFeedbackRequest, NSMutableDictionary, FTBatchTranslationRequest, NSData, NSObject, FTBatchTranslationLoggingRequest;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTBatchTranslationStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BatchTranslationStreamingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) FTBatchTranslationRequest *contentAsFTBatchTranslationRequest;
@property (readonly, nonatomic) FTBatchTranslationFeedbackRequest *contentAsFTBatchTranslationFeedbackRequest;
@property (readonly, nonatomic) FTBatchTranslationLoggingRequest *contentAsFTBatchTranslationLoggingRequest;
@property (readonly, nonatomic) FTTranslationSupportedLanguagesRequest *contentAsFTTranslationSupportedLanguagesRequest;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *content;

+ (long long)content_typeForImmutableObject:(id)a0;
+ (Class)content_immutableClassForType:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::BatchTranslationStreamingRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchTranslationStreamingRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchTranslationStreamingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
