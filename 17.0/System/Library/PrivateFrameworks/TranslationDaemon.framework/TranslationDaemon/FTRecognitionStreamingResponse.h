@class NSMutableDictionary, FTMultiUserRecognitionCandidate, FTRequestStatsResponse, NSObject, FTEndPointCandidate, FTRecognitionCandidate, FTRecognitionProgress, FTCheckForSpeechResponse, FTAudioLimitExceeded, FTEndPointLikelihood, FTPartialSpeechRecognitionResponse, FTServerEndpointFeatures, FTMultiUserFinalSpeechRecognitionResponse, FTClientSetupInfo, FTFinalSpeechRecognitionResponse, FTUpdatedAcousticProfile, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTRecognitionStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecognitionStreamingResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property (readonly, nonatomic) FTMultiUserFinalSpeechRecognitionResponse *contentAsFTMultiUserFinalSpeechRecognitionResponse;
@property (readonly, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property (readonly, nonatomic) FTUpdatedAcousticProfile *contentAsFTUpdatedAcousticProfile;
@property (readonly, nonatomic) FTEndPointLikelihood *contentAsFTEndPointLikelihood;
@property (readonly, nonatomic) FTEndPointCandidate *contentAsFTEndPointCandidate;
@property (readonly, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (readonly, nonatomic) FTCheckForSpeechResponse *contentAsFTCheckForSpeechResponse;
@property (readonly, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (readonly, nonatomic) FTMultiUserRecognitionCandidate *contentAsFTMultiUserRecognitionCandidate;
@property (readonly, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (readonly, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (readonly, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (readonly, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *content;

+ (long long)content_typeForImmutableObject:(id)a0;
+ (Class)content_immutableClassForType:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::RecognitionStreamingResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionStreamingResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionStreamingResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
