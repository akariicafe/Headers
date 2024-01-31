@class NSMutableDictionary, QSSAudioLimitExceeded, QSSUpdatedAcousticProfile, QSSPartialSpeechRecognitionResponse, QSSServerEndpointFeatures, QSSFinalSpeechRecognitionResponse, QSSEndPointLikelihood, QSSRecognitionProgress, QSSRecognitionCandidate, QSSEndPointCandidate, QSSCheckForSpeechResponse, NSData, QSSClientSetupInfo, QSSRequestStatsResponse;

@interface QSSRecognitionStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecognitionStreamingResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) QSSFinalSpeechRecognitionResponse *contentAsQSSFinalSpeechRecognitionResponse;
@property (readonly, nonatomic) QSSPartialSpeechRecognitionResponse *contentAsQSSPartialSpeechRecognitionResponse;
@property (readonly, nonatomic) QSSUpdatedAcousticProfile *contentAsQSSUpdatedAcousticProfile;
@property (readonly, nonatomic) QSSEndPointLikelihood *contentAsQSSEndPointLikelihood;
@property (readonly, nonatomic) QSSEndPointCandidate *contentAsQSSEndPointCandidate;
@property (readonly, nonatomic) QSSRecognitionProgress *contentAsQSSRecognitionProgress;
@property (readonly, nonatomic) QSSCheckForSpeechResponse *contentAsQSSCheckForSpeechResponse;
@property (readonly, nonatomic) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (readonly, nonatomic) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (readonly, nonatomic) QSSServerEndpointFeatures *contentAsQSSServerEndpointFeatures;
@property (readonly, nonatomic) QSSClientSetupInfo *contentAsQSSClientSetupInfo;
@property (readonly, nonatomic) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::RecognitionStreamingResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionStreamingResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionStreamingResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
