@class FTRecognitionCandidate, FTLanguageDetected, FTResetServerEndpointer, FTSpeechTranslationMtResponse, FTSpeechTranslationPartialRecognitionResponse, FTSpeechTranslationAudioPacket, FTServerEndpointFeatures, FTRequestStatsResponse, NSMutableDictionary, FTAudioPacket, NSObject, FTSpeechTranslationServerEndpointFeatures, FTStartSpeechTranslationLoggingRequest, FTSpeechTranslationFinalRecognitionResponse, FTRecognitionProgress, FTSetEndpointerState, NSData, FTAudioLimitExceeded, FTSpeechTranslationTextToSpeechResponse, FTStartSpeechTranslationRequest, FTClientSetupInfo, FTFinishAudio, FTFinalBlazarResponse;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTBlazarSpeechTranslationMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BlazarSpeechTranslationMessage { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long session_message_type;
@property (readonly, nonatomic) FTStartSpeechTranslationRequest *session_messageAsFTStartSpeechTranslationRequest;
@property (readonly, nonatomic) FTLanguageDetected *session_messageAsFTLanguageDetected;
@property (readonly, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (readonly, nonatomic) FTSpeechTranslationAudioPacket *session_messageAsFTSpeechTranslationAudioPacket;
@property (readonly, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (readonly, nonatomic) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property (readonly, nonatomic) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property (readonly, nonatomic) FTStartSpeechTranslationLoggingRequest *session_messageAsFTStartSpeechTranslationLoggingRequest;
@property (readonly, nonatomic) FTSpeechTranslationPartialRecognitionResponse *session_messageAsFTSpeechTranslationPartialRecognitionResponse;
@property (readonly, nonatomic) FTSpeechTranslationFinalRecognitionResponse *session_messageAsFTSpeechTranslationFinalRecognitionResponse;
@property (readonly, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (readonly, nonatomic) FTSpeechTranslationMtResponse *session_messageAsFTSpeechTranslationMtResponse;
@property (readonly, nonatomic) FTSpeechTranslationTextToSpeechResponse *session_messageAsFTSpeechTranslationTextToSpeechResponse;
@property (readonly, nonatomic) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (readonly, nonatomic) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property (readonly, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (readonly, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (readonly, nonatomic) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property (readonly, nonatomic) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (readonly, nonatomic) FTSpeechTranslationServerEndpointFeatures *session_messageAsFTSpeechTranslationServerEndpointFeatures;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_immutableClassForType:(long long)a0;
+ (long long)session_message_typeForImmutableObject:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::BlazarSpeechTranslationMessage> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BlazarSpeechTranslationMessage { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BlazarSpeechTranslationMessage { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
