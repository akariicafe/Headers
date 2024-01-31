@class QSSUpdateAudioInfo, QSSSetRequestOrigin, QSSFinishAudio, QSSAudioPacket, QSSLanguageDetected, QSSSetSpeechProfile, QSSSetSpeechContext, QSSStartMultilingualSpeechRequest;

@interface QSSMutableMultilingualStreamingRequest : QSSMultilingualStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSStartMultilingualSpeechRequest *contentAsQSSStartMultilingualSpeechRequest;
@property (copy, nonatomic) QSSUpdateAudioInfo *contentAsQSSUpdateAudioInfo;
@property (copy, nonatomic) QSSSetRequestOrigin *contentAsQSSSetRequestOrigin;
@property (copy, nonatomic) QSSSetSpeechContext *contentAsQSSSetSpeechContext;
@property (copy, nonatomic) QSSSetSpeechProfile *contentAsQSSSetSpeechProfile;
@property (copy, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (copy, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (copy, nonatomic) QSSLanguageDetected *contentAsQSSLanguageDetected;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
