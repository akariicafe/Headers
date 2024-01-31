@class FTFinalBlazarResponse, FTTranslationSupportedLanguagesResponse, NSMutableDictionary, FTBatchTranslationResponse, NSData, NSObject;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTBatchTranslationStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BatchTranslationStreamingResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) FTBatchTranslationResponse *contentAsFTBatchTranslationResponse;
@property (readonly, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (readonly, nonatomic) FTTranslationSupportedLanguagesResponse *contentAsFTTranslationSupportedLanguagesResponse;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *content;

+ (long long)content_typeForImmutableObject:(id)a0;
+ (Class)content_immutableClassForType:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::BatchTranslationStreamingResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchTranslationStreamingResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchTranslationStreamingResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
