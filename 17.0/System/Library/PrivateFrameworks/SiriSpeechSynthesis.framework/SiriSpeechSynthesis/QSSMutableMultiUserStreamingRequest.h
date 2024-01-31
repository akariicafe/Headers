@class QSSMultiUserStartSpeechRequest, QSSSetRequestOrigin, QSSUpdateAudioInfo, QSSSetEndpointerState, QSSFinishAudio, QSSAudioPacket, QSSResetServerEndpointer, QSSSetSpeechProfile, QSSSetSpeechContext, QSSSetAlternateRecognitionSausage;

@interface QSSMutableMultiUserStreamingRequest : QSSMultiUserStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSMultiUserStartSpeechRequest *contentAsQSSMultiUserStartSpeechRequest;
@property (copy, nonatomic) QSSUpdateAudioInfo *contentAsQSSUpdateAudioInfo;
@property (copy, nonatomic) QSSSetRequestOrigin *contentAsQSSSetRequestOrigin;
@property (copy, nonatomic) QSSSetSpeechContext *contentAsQSSSetSpeechContext;
@property (copy, nonatomic) QSSSetSpeechProfile *contentAsQSSSetSpeechProfile;
@property (copy, nonatomic) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (copy, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (copy, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (copy, nonatomic) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (copy, nonatomic) QSSSetAlternateRecognitionSausage *contentAsQSSSetAlternateRecognitionSausage;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
