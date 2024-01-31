@class FTBatchTranslationLoggingRequest, FTBatchTranslationResponse, FTTranslationSupportedLanguagesRequest, FTTranslationSupportedLanguagesResponse, FTFinalBlazarResponse, FTBatchTranslationFeedbackRequest, FTBatchTranslationRequest, NSObject;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableBlazarBatchTranslationMessage : FTBlazarBatchTranslationMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTBatchTranslationRequest *session_messageAsFTBatchTranslationRequest;
@property (copy, nonatomic) FTBatchTranslationFeedbackRequest *session_messageAsFTBatchTranslationFeedbackRequest;
@property (copy, nonatomic) FTBatchTranslationLoggingRequest *session_messageAsFTBatchTranslationLoggingRequest;
@property (copy, nonatomic) FTTranslationSupportedLanguagesRequest *session_messageAsFTTranslationSupportedLanguagesRequest;
@property (copy, nonatomic) FTBatchTranslationResponse *session_messageAsFTBatchTranslationResponse;
@property (copy, nonatomic) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (copy, nonatomic) FTTranslationSupportedLanguagesResponse *session_messageAsFTTranslationSupportedLanguagesResponse;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_mutableClassForType:(long long)a0;
+ (long long)session_message_typeForMutableObject:(id)a0;
+ (long long)session_message_typeForObject:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSession_message:(id)a0;

@end
