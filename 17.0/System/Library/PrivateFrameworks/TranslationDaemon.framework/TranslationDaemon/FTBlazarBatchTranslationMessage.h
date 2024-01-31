@class NSData, FTBatchTranslationLoggingRequest, FTBatchTranslationResponse, FTTranslationSupportedLanguagesRequest, FTTranslationSupportedLanguagesResponse, FTFinalBlazarResponse, FTBatchTranslationFeedbackRequest, FTBatchTranslationRequest, NSObject, NSMutableDictionary;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTBlazarBatchTranslationMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BlazarBatchTranslationMessage { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long session_message_type;
@property (readonly, nonatomic) FTBatchTranslationRequest *session_messageAsFTBatchTranslationRequest;
@property (readonly, nonatomic) FTBatchTranslationFeedbackRequest *session_messageAsFTBatchTranslationFeedbackRequest;
@property (readonly, nonatomic) FTBatchTranslationLoggingRequest *session_messageAsFTBatchTranslationLoggingRequest;
@property (readonly, nonatomic) FTTranslationSupportedLanguagesRequest *session_messageAsFTTranslationSupportedLanguagesRequest;
@property (readonly, nonatomic) FTBatchTranslationResponse *session_messageAsFTBatchTranslationResponse;
@property (readonly, nonatomic) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (readonly, nonatomic) FTTranslationSupportedLanguagesResponse *session_messageAsFTTranslationSupportedLanguagesResponse;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_immutableClassForType:(long long)a0;
+ (long long)session_message_typeForImmutableObject:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::BlazarBatchTranslationMessage> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BlazarBatchTranslationMessage { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BlazarBatchTranslationMessage { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
