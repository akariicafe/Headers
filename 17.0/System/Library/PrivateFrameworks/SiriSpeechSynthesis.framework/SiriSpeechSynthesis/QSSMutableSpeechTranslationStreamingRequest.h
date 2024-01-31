@class QSSResetServerEndpointer, QSSSetEndpointerState, QSSFinishAudio, QSSAudioPacket, QSSLanguageDetected, QSSSpeechTranslationAudioPacket, QSSStartSpeechTranslationRequest, QSSStartSpeechTranslationLoggingRequest;

@interface QSSMutableSpeechTranslationStreamingRequest : QSSSpeechTranslationStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSStartSpeechTranslationRequest *contentAsQSSStartSpeechTranslationRequest;
@property (copy, nonatomic) QSSLanguageDetected *contentAsQSSLanguageDetected;
@property (copy, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (copy, nonatomic) QSSSpeechTranslationAudioPacket *contentAsQSSSpeechTranslationAudioPacket;
@property (copy, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (copy, nonatomic) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (copy, nonatomic) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (copy, nonatomic) QSSStartSpeechTranslationLoggingRequest *contentAsQSSStartSpeechTranslationLoggingRequest;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
