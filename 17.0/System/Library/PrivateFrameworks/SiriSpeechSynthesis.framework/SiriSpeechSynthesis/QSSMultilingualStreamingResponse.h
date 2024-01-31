@class QSSFinalBlazarResponse, QSSPartialSpeechRecognitionResponse, NSData, QSSRecognitionCandidate, NSMutableDictionary, QSSFinalSpeechRecognitionResponse, QSSAudioLimitExceeded, QSSRequestStatsResponse;

@interface QSSMultilingualStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct MultilingualStreamingResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) QSSFinalSpeechRecognitionResponse *contentAsQSSFinalSpeechRecognitionResponse;
@property (readonly, nonatomic) QSSPartialSpeechRecognitionResponse *contentAsQSSPartialSpeechRecognitionResponse;
@property (readonly, nonatomic) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (readonly, nonatomic) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (readonly, nonatomic) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (readonly, nonatomic) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::MultilingualStreamingResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultilingualStreamingResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultilingualStreamingResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
