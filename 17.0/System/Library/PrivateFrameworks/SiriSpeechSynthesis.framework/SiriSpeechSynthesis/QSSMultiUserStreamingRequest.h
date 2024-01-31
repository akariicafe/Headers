@class QSSMultiUserStartSpeechRequest, QSSSetRequestOrigin, QSSUpdateAudioInfo, QSSSetEndpointerState, QSSFinishAudio, QSSAudioPacket, QSSResetServerEndpointer, QSSSetSpeechProfile, QSSSetSpeechContext, QSSSetAlternateRecognitionSausage, NSMutableDictionary, NSData;

@interface QSSMultiUserStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct MultiUserStreamingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) QSSMultiUserStartSpeechRequest *contentAsQSSMultiUserStartSpeechRequest;
@property (readonly, nonatomic) QSSUpdateAudioInfo *contentAsQSSUpdateAudioInfo;
@property (readonly, nonatomic) QSSSetRequestOrigin *contentAsQSSSetRequestOrigin;
@property (readonly, nonatomic) QSSSetSpeechContext *contentAsQSSSetSpeechContext;
@property (readonly, nonatomic) QSSSetSpeechProfile *contentAsQSSSetSpeechProfile;
@property (readonly, nonatomic) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (readonly, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (readonly, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (readonly, nonatomic) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (readonly, nonatomic) QSSSetAlternateRecognitionSausage *contentAsQSSSetAlternateRecognitionSausage;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::MultiUserStreamingRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultiUserStreamingRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultiUserStreamingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
