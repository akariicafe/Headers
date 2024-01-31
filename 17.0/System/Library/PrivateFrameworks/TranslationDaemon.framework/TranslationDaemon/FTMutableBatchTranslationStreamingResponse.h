@class FTFinalBlazarResponse, FTTranslationSupportedLanguagesResponse, FTBatchTranslationResponse, NSObject;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableBatchTranslationStreamingResponse : FTBatchTranslationStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTBatchTranslationResponse *contentAsFTBatchTranslationResponse;
@property (copy, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (copy, nonatomic) FTTranslationSupportedLanguagesResponse *contentAsFTTranslationSupportedLanguagesResponse;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *content;

+ (Class)content_mutableClassForType:(long long)a0;
+ (long long)content_typeForMutableObject:(id)a0;
+ (long long)content_typeForObject:(id)a0;

- (void)setContent:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
