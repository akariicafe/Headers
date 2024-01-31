@class FTClientSetupInfo, FTSetSpeechProfile, FTRequestStatsResponse, NSObject, FTMultiUserStartSpeechRequest, FTRecognitionProgress, FTRecognitionCandidate, FTAudioLimitExceeded, FTFinishAudio, FTSetEndpointerState, FTFinalBlazarResponse, FTResetServerEndpointer, FTPartialSpeechRecognitionResponse, FTServerEndpointFeatures, FTFinalSpeechRecognitionResponse, FTSetAlternateRecognitionSausage, FTAudioPacket, FTSetSpeechContext, FTSetRequestOrigin, FTUpdateAudioInfo;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableBlazarMultiUserMessage : FTBlazarMultiUserMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTMultiUserStartSpeechRequest *session_messageAsFTMultiUserStartSpeechRequest;
@property (copy, nonatomic) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
@property (copy, nonatomic) FTSetRequestOrigin *session_messageAsFTSetRequestOrigin;
@property (copy, nonatomic) FTSetSpeechContext *session_messageAsFTSetSpeechContext;
@property (copy, nonatomic) FTSetSpeechProfile *session_messageAsFTSetSpeechProfile;
@property (copy, nonatomic) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property (copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (copy, nonatomic) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property (copy, nonatomic) FTSetAlternateRecognitionSausage *session_messageAsFTSetAlternateRecognitionSausage;
@property (copy, nonatomic) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property (copy, nonatomic) FTPartialSpeechRecognitionResponse *session_messageAsFTPartialSpeechRecognitionResponse;
@property (copy, nonatomic) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property (copy, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (copy, nonatomic) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property (copy, nonatomic) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (copy, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (copy, nonatomic) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_mutableClassForType:(long long)a0;
+ (long long)session_message_typeForMutableObject:(id)a0;
+ (long long)session_message_typeForObject:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSession_message:(id)a0;

@end
