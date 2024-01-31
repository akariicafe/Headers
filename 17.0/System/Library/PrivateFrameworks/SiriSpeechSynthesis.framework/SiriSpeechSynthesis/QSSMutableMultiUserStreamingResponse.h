@class QSSPartialSpeechRecognitionResponse, QSSFinalBlazarResponse, QSSRecognitionCandidate, QSSClientSetupInfo, QSSRecognitionProgress, QSSServerEndpointFeatures, QSSFinalSpeechRecognitionResponse, QSSAudioLimitExceeded, QSSRequestStatsResponse;

@interface QSSMutableMultiUserStreamingResponse : QSSMultiUserStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSFinalSpeechRecognitionResponse *contentAsQSSFinalSpeechRecognitionResponse;
@property (copy, nonatomic) QSSPartialSpeechRecognitionResponse *contentAsQSSPartialSpeechRecognitionResponse;
@property (copy, nonatomic) QSSRecognitionProgress *contentAsQSSRecognitionProgress;
@property (copy, nonatomic) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (copy, nonatomic) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (copy, nonatomic) QSSServerEndpointFeatures *contentAsQSSServerEndpointFeatures;
@property (copy, nonatomic) QSSClientSetupInfo *contentAsQSSClientSetupInfo;
@property (copy, nonatomic) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (copy, nonatomic) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
