@class FTRecognitionCandidate, FTLanguageDetected, FTResetServerEndpointer, FTSpeechTranslationMtResponse, FTSpeechTranslationPartialRecognitionResponse, FTSpeechTranslationAudioPacket, FTServerEndpointFeatures, FTRequestStatsResponse, FTAudioPacket, NSObject, FTSpeechTranslationServerEndpointFeatures, FTStartSpeechTranslationLoggingRequest, FTSpeechTranslationFinalRecognitionResponse, FTRecognitionProgress, FTSetEndpointerState, FTAudioLimitExceeded, FTSpeechTranslationTextToSpeechResponse, FTStartSpeechTranslationRequest, FTClientSetupInfo, FTFinishAudio, FTFinalBlazarResponse;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableBlazarSpeechTranslationMessage : FTBlazarSpeechTranslationMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTStartSpeechTranslationRequest *session_messageAsFTStartSpeechTranslationRequest;
@property (copy, nonatomic) FTLanguageDetected *session_messageAsFTLanguageDetected;
@property (copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (copy, nonatomic) FTSpeechTranslationAudioPacket *session_messageAsFTSpeechTranslationAudioPacket;
@property (copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (copy, nonatomic) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property (copy, nonatomic) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property (copy, nonatomic) FTStartSpeechTranslationLoggingRequest *session_messageAsFTStartSpeechTranslationLoggingRequest;
@property (copy, nonatomic) FTSpeechTranslationPartialRecognitionResponse *session_messageAsFTSpeechTranslationPartialRecognitionResponse;
@property (copy, nonatomic) FTSpeechTranslationFinalRecognitionResponse *session_messageAsFTSpeechTranslationFinalRecognitionResponse;
@property (copy, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (copy, nonatomic) FTSpeechTranslationMtResponse *session_messageAsFTSpeechTranslationMtResponse;
@property (copy, nonatomic) FTSpeechTranslationTextToSpeechResponse *session_messageAsFTSpeechTranslationTextToSpeechResponse;
@property (copy, nonatomic) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (copy, nonatomic) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property (copy, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (copy, nonatomic) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property (copy, nonatomic) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (copy, nonatomic) FTSpeechTranslationServerEndpointFeatures *session_messageAsFTSpeechTranslationServerEndpointFeatures;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_mutableClassForType:(long long)a0;
+ (long long)session_message_typeForMutableObject:(id)a0;
+ (long long)session_message_typeForObject:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSession_message:(id)a0;

@end
