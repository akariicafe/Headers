@class FTStartMultilingualSpeechRequest, FTSetSpeechProfile, FTRequestStatsResponse, NSObject, FTRecognitionCandidate, FTAudioLimitExceeded, FTFinishAudio, FTLanguageDetected, FTFinalBlazarResponse, FTPartialSpeechRecognitionResponse, FTFinalSpeechRecognitionResponse, FTAudioPacket, FTSetSpeechContext, FTSetRequestOrigin, FTUpdateAudioInfo;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableBlazarMultilingualMessage : FTBlazarMultilingualMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTStartMultilingualSpeechRequest *session_messageAsFTStartMultilingualSpeechRequest;
@property (copy, nonatomic) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
@property (copy, nonatomic) FTSetRequestOrigin *session_messageAsFTSetRequestOrigin;
@property (copy, nonatomic) FTSetSpeechContext *session_messageAsFTSetSpeechContext;
@property (copy, nonatomic) FTSetSpeechProfile *session_messageAsFTSetSpeechProfile;
@property (copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (copy, nonatomic) FTLanguageDetected *session_messageAsFTLanguageDetected;
@property (copy, nonatomic) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property (copy, nonatomic) FTPartialSpeechRecognitionResponse *session_messageAsFTPartialSpeechRecognitionResponse;
@property (copy, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
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
