@class QSSCancelRequest, QSSFinishAudio, NSMutableDictionary, NSData, QSSAudioPacket, QSSStartPronGuessRequest;

@interface QSSPronGuessStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct PronGuessStreamingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) QSSStartPronGuessRequest *contentAsQSSStartPronGuessRequest;
@property (readonly, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (readonly, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (readonly, nonatomic) QSSCancelRequest *contentAsQSSCancelRequest;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::PronGuessStreamingRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct PronGuessStreamingRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct PronGuessStreamingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
