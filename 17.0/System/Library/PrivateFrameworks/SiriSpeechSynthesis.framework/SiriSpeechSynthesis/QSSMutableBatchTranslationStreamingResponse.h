@class QSSFinalBlazarResponse, QSSBatchTranslationResponse, QSSTranslationSupportedLanguagesResponse;

@interface QSSMutableBatchTranslationStreamingResponse : QSSBatchTranslationStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSBatchTranslationResponse *contentAsQSSBatchTranslationResponse;
@property (copy, nonatomic) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;
@property (copy, nonatomic) QSSTranslationSupportedLanguagesResponse *contentAsQSSTranslationSupportedLanguagesResponse;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
