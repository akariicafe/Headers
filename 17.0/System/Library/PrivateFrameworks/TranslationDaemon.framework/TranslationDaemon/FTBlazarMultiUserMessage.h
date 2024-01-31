@class FTRecognitionCandidate, FTSetSpeechContext, FTResetServerEndpointer, FTUpdateAudioInfo, FTSetRequestOrigin, FTServerEndpointFeatures, FTRequestStatsResponse, NSMutableDictionary, FTFinalSpeechRecognitionResponse, FTAudioPacket, NSObject, FTSetEndpointerState, NSData, FTRecognitionProgress, FTAudioLimitExceeded, FTClientSetupInfo, FTMultiUserStartSpeechRequest, FTSetSpeechProfile, FTFinishAudio, FTPartialSpeechRecognitionResponse, FTFinalBlazarResponse, FTSetAlternateRecognitionSausage;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTBlazarMultiUserMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BlazarMultiUserMessage { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long session_message_type;
@property (readonly, nonatomic) FTMultiUserStartSpeechRequest *session_messageAsFTMultiUserStartSpeechRequest;
@property (readonly, nonatomic) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
@property (readonly, nonatomic) FTSetRequestOrigin *session_messageAsFTSetRequestOrigin;
@property (readonly, nonatomic) FTSetSpeechContext *session_messageAsFTSetSpeechContext;
@property (readonly, nonatomic) FTSetSpeechProfile *session_messageAsFTSetSpeechProfile;
@property (readonly, nonatomic) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property (readonly, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (readonly, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (readonly, nonatomic) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property (readonly, nonatomic) FTSetAlternateRecognitionSausage *session_messageAsFTSetAlternateRecognitionSausage;
@property (readonly, nonatomic) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property (readonly, nonatomic) FTPartialSpeechRecognitionResponse *session_messageAsFTPartialSpeechRecognitionResponse;
@property (readonly, nonatomic) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property (readonly, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (readonly, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (readonly, nonatomic) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property (readonly, nonatomic) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (readonly, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (readonly, nonatomic) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_immutableClassForType:(long long)a0;
+ (long long)session_message_typeForImmutableObject:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::BlazarMultiUserMessage> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BlazarMultiUserMessage { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BlazarMultiUserMessage { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
