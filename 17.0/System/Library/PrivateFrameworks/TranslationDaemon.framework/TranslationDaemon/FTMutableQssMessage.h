@class FTMtTranslationMessage, FTApgPronGuessMessage, FTBlazarMultilingualMessage, FTAsrTextNormalizationMessage, FTBlazarBatchTranslationMessage, FTMtStreamingTranslationMessage, FTBlazarMultiUserMessage, FTBlazarTextToSpeechRouterMessage, FTAsrRecognitionMessage, FTApgBatchRecoverMessage, FTAsrGraphemeToPhonemeMessage, FTTtsTextToSpeechStreamingMessage, FTAsrCorrectionsValidatorMessage, FTAsrErrorBlamerMessage, FTNlShortcutFuzzyMatchMessage, FTLmtLmScorerMessage, FTErrorMessage, NSObject, FTBlazarSpeechTranslationMessage, FTTtsTextToSpeechMessage, FTTtsTextToSpeechSpeechFeatureMessage, FTSlsLanguageDetectionMessage, FTNapgCreateLanguageProfileMessage, FTAsrPostItnHammerMessage, FTAsrItnMessage, FTBlazarServiceDiscoveryMessage, FTBlazarTextToSpeechRouterStreamingMessage, FTDisableSessionLog, FTAsrKeywordFinderMessage;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableQssMessage : FTQssMessage

@property (copy, nonatomic) FTErrorMessage *error_message;
@property (copy, nonatomic) FTDisableSessionLog *disable_session_log;
@property (nonatomic) long long container_message_type;
@property (copy, nonatomic) FTApgPronGuessMessage *container_messageAsFTApgPronGuessMessage;
@property (copy, nonatomic) FTApgBatchRecoverMessage *container_messageAsFTApgBatchRecoverMessage;
@property (copy, nonatomic) FTAsrRecognitionMessage *container_messageAsFTAsrRecognitionMessage;
@property (copy, nonatomic) FTAsrErrorBlamerMessage *container_messageAsFTAsrErrorBlamerMessage;
@property (copy, nonatomic) FTAsrItnMessage *container_messageAsFTAsrItnMessage;
@property (copy, nonatomic) FTAsrTextNormalizationMessage *container_messageAsFTAsrTextNormalizationMessage;
@property (copy, nonatomic) FTAsrPostItnHammerMessage *container_messageAsFTAsrPostItnHammerMessage;
@property (copy, nonatomic) FTAsrKeywordFinderMessage *container_messageAsFTAsrKeywordFinderMessage;
@property (copy, nonatomic) FTAsrCorrectionsValidatorMessage *container_messageAsFTAsrCorrectionsValidatorMessage;
@property (copy, nonatomic) FTAsrGraphemeToPhonemeMessage *container_messageAsFTAsrGraphemeToPhonemeMessage;
@property (copy, nonatomic) FTBlazarMultiUserMessage *container_messageAsFTBlazarMultiUserMessage;
@property (copy, nonatomic) FTBlazarMultilingualMessage *container_messageAsFTBlazarMultilingualMessage;
@property (copy, nonatomic) FTBlazarSpeechTranslationMessage *container_messageAsFTBlazarSpeechTranslationMessage;
@property (copy, nonatomic) FTBlazarBatchTranslationMessage *container_messageAsFTBlazarBatchTranslationMessage;
@property (copy, nonatomic) FTBlazarTextToSpeechRouterMessage *container_messageAsFTBlazarTextToSpeechRouterMessage;
@property (copy, nonatomic) FTBlazarTextToSpeechRouterStreamingMessage *container_messageAsFTBlazarTextToSpeechRouterStreamingMessage;
@property (copy, nonatomic) FTBlazarServiceDiscoveryMessage *container_messageAsFTBlazarServiceDiscoveryMessage;
@property (copy, nonatomic) FTLmtLmScorerMessage *container_messageAsFTLmtLmScorerMessage;
@property (copy, nonatomic) FTNapgCreateLanguageProfileMessage *container_messageAsFTNapgCreateLanguageProfileMessage;
@property (copy, nonatomic) FTMtTranslationMessage *container_messageAsFTMtTranslationMessage;
@property (copy, nonatomic) FTMtStreamingTranslationMessage *container_messageAsFTMtStreamingTranslationMessage;
@property (copy, nonatomic) FTTtsTextToSpeechMessage *container_messageAsFTTtsTextToSpeechMessage;
@property (copy, nonatomic) FTTtsTextToSpeechStreamingMessage *container_messageAsFTTtsTextToSpeechStreamingMessage;
@property (copy, nonatomic) FTTtsTextToSpeechSpeechFeatureMessage *container_messageAsFTTtsTextToSpeechSpeechFeatureMessage;
@property (copy, nonatomic) FTNlShortcutFuzzyMatchMessage *container_messageAsFTNlShortcutFuzzyMatchMessage;
@property (copy, nonatomic) FTSlsLanguageDetectionMessage *container_messageAsFTSlsLanguageDetectionMessage;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *container_message;

+ (Class)container_message_mutableClassForType:(long long)a0;
+ (long long)container_message_typeForMutableObject:(id)a0;
+ (long long)container_message_typeForObject:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setContainer_message:(id)a0;

@end
