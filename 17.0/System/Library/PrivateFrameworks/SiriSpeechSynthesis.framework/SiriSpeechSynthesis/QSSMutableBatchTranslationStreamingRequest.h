@class QSSBatchTranslationFeedbackRequest, QSSBatchTranslationLoggingRequest, QSSBatchTranslationRequest, QSSTranslationSupportedLanguagesRequest;

@interface QSSMutableBatchTranslationStreamingRequest : QSSBatchTranslationStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSBatchTranslationRequest *contentAsQSSBatchTranslationRequest;
@property (copy, nonatomic) QSSBatchTranslationFeedbackRequest *contentAsQSSBatchTranslationFeedbackRequest;
@property (copy, nonatomic) QSSBatchTranslationLoggingRequest *contentAsQSSBatchTranslationLoggingRequest;
@property (copy, nonatomic) QSSTranslationSupportedLanguagesRequest *contentAsQSSTranslationSupportedLanguagesRequest;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
