@class QSSUpdateAudioInfo, QSSSetRequestOrigin, NSData, QSSFinishAudio, QSSAudioPacket, QSSLanguageDetected, QSSSetSpeechProfile, QSSSetSpeechContext, QSSStartMultilingualSpeechRequest, NSMutableDictionary;

@interface QSSMultilingualStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct MultilingualStreamingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) QSSStartMultilingualSpeechRequest *contentAsQSSStartMultilingualSpeechRequest;
@property (readonly, nonatomic) QSSUpdateAudioInfo *contentAsQSSUpdateAudioInfo;
@property (readonly, nonatomic) QSSSetRequestOrigin *contentAsQSSSetRequestOrigin;
@property (readonly, nonatomic) QSSSetSpeechContext *contentAsQSSSetSpeechContext;
@property (readonly, nonatomic) QSSSetSpeechProfile *contentAsQSSSetSpeechProfile;
@property (readonly, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (readonly, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (readonly, nonatomic) QSSLanguageDetected *contentAsQSSLanguageDetected;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::MultilingualStreamingRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultilingualStreamingRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultilingualStreamingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
