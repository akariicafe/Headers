@class FTMtTranslationMessage, FTApgPronGuessMessage, FTBlazarMultilingualMessage, FTAsrTextNormalizationMessage, FTBlazarBatchTranslationMessage, FTMtStreamingTranslationMessage, FTBlazarMultiUserMessage, FTBlazarTextToSpeechRouterMessage, FTAsrRecognitionMessage, FTApgBatchRecoverMessage, FTAsrGraphemeToPhonemeMessage, FTTtsTextToSpeechStreamingMessage, FTAsrCorrectionsValidatorMessage, FTAsrErrorBlamerMessage, FTNlShortcutFuzzyMatchMessage, FTLmtLmScorerMessage, FTErrorMessage, NSMutableDictionary, NSObject, NSData, FTBlazarSpeechTranslationMessage, FTTtsTextToSpeechMessage, FTTtsTextToSpeechSpeechFeatureMessage, FTSlsLanguageDetectionMessage, FTNapgCreateLanguageProfileMessage, FTAsrPostItnHammerMessage, FTAsrItnMessage, FTBlazarServiceDiscoveryMessage, FTBlazarTextToSpeechRouterStreamingMessage, FTDisableSessionLog, FTAsrKeywordFinderMessage;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTQssMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct QssMessage { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) FTErrorMessage *error_message;
@property (readonly, nonatomic) FTDisableSessionLog *disable_session_log;
@property (readonly, nonatomic) long long container_message_type;
@property (readonly, nonatomic) FTApgPronGuessMessage *container_messageAsFTApgPronGuessMessage;
@property (readonly, nonatomic) FTApgBatchRecoverMessage *container_messageAsFTApgBatchRecoverMessage;
@property (readonly, nonatomic) FTAsrRecognitionMessage *container_messageAsFTAsrRecognitionMessage;
@property (readonly, nonatomic) FTAsrErrorBlamerMessage *container_messageAsFTAsrErrorBlamerMessage;
@property (readonly, nonatomic) FTAsrItnMessage *container_messageAsFTAsrItnMessage;
@property (readonly, nonatomic) FTAsrTextNormalizationMessage *container_messageAsFTAsrTextNormalizationMessage;
@property (readonly, nonatomic) FTAsrPostItnHammerMessage *container_messageAsFTAsrPostItnHammerMessage;
@property (readonly, nonatomic) FTAsrKeywordFinderMessage *container_messageAsFTAsrKeywordFinderMessage;
@property (readonly, nonatomic) FTAsrCorrectionsValidatorMessage *container_messageAsFTAsrCorrectionsValidatorMessage;
@property (readonly, nonatomic) FTAsrGraphemeToPhonemeMessage *container_messageAsFTAsrGraphemeToPhonemeMessage;
@property (readonly, nonatomic) FTBlazarMultiUserMessage *container_messageAsFTBlazarMultiUserMessage;
@property (readonly, nonatomic) FTBlazarMultilingualMessage *container_messageAsFTBlazarMultilingualMessage;
@property (readonly, nonatomic) FTBlazarSpeechTranslationMessage *container_messageAsFTBlazarSpeechTranslationMessage;
@property (readonly, nonatomic) FTBlazarBatchTranslationMessage *container_messageAsFTBlazarBatchTranslationMessage;
@property (readonly, nonatomic) FTBlazarTextToSpeechRouterMessage *container_messageAsFTBlazarTextToSpeechRouterMessage;
@property (readonly, nonatomic) FTBlazarTextToSpeechRouterStreamingMessage *container_messageAsFTBlazarTextToSpeechRouterStreamingMessage;
@property (readonly, nonatomic) FTBlazarServiceDiscoveryMessage *container_messageAsFTBlazarServiceDiscoveryMessage;
@property (readonly, nonatomic) FTLmtLmScorerMessage *container_messageAsFTLmtLmScorerMessage;
@property (readonly, nonatomic) FTNapgCreateLanguageProfileMessage *container_messageAsFTNapgCreateLanguageProfileMessage;
@property (readonly, nonatomic) FTMtTranslationMessage *container_messageAsFTMtTranslationMessage;
@property (readonly, nonatomic) FTMtStreamingTranslationMessage *container_messageAsFTMtStreamingTranslationMessage;
@property (readonly, nonatomic) FTTtsTextToSpeechMessage *container_messageAsFTTtsTextToSpeechMessage;
@property (readonly, nonatomic) FTTtsTextToSpeechStreamingMessage *container_messageAsFTTtsTextToSpeechStreamingMessage;
@property (readonly, nonatomic) FTTtsTextToSpeechSpeechFeatureMessage *container_messageAsFTTtsTextToSpeechSpeechFeatureMessage;
@property (readonly, nonatomic) FTNlShortcutFuzzyMatchMessage *container_messageAsFTNlShortcutFuzzyMatchMessage;
@property (readonly, nonatomic) FTSlsLanguageDetectionMessage *container_messageAsFTSlsLanguageDetectionMessage;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *container_message;

+ (Class)container_message_immutableClassForType:(long long)a0;
+ (long long)container_message_typeForImmutableObject:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::QssMessage> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct QssMessage { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct QssMessage { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
