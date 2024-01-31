@class NSMutableDictionary, QSSUpdateAudioInfo, QSSFinishAudio, QSSStartSpeechRequest, QSSSetSpeechContext, QSSSetSpeechProfile, QSSSetEndpointerState, QSSResetServerEndpointer, QSSSetRequestOrigin, QSSAudioPacket, QSSCheckForSpeechRequest, QSSSetAlternateRecognitionSausage, NSData;

@interface QSSRecognitionStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecognitionStreamingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) QSSStartSpeechRequest *contentAsQSSStartSpeechRequest;
@property (readonly, nonatomic) QSSUpdateAudioInfo *contentAsQSSUpdateAudioInfo;
@property (readonly, nonatomic) QSSSetRequestOrigin *contentAsQSSSetRequestOrigin;
@property (readonly, nonatomic) QSSSetSpeechContext *contentAsQSSSetSpeechContext;
@property (readonly, nonatomic) QSSSetSpeechProfile *contentAsQSSSetSpeechProfile;
@property (readonly, nonatomic) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (readonly, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (readonly, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (readonly, nonatomic) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (readonly, nonatomic) QSSCheckForSpeechRequest *contentAsQSSCheckForSpeechRequest;
@property (readonly, nonatomic) QSSSetAlternateRecognitionSausage *contentAsQSSSetAlternateRecognitionSausage;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::RecognitionStreamingRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionStreamingRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionStreamingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
