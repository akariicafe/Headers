@class FTRequestStatsResponse, NSObject, FTSpeechTranslationPartialRecognitionResponse, FTSpeechTranslationFinalRecognitionResponse, FTAudioLimitExceeded, FTRecognitionCandidate, FTRecognitionProgress, FTFinalBlazarResponse, FTServerEndpointFeatures, FTClientSetupInfo, FTSpeechTranslationTextToSpeechResponse, FTSpeechTranslationMtResponse, FTSpeechTranslationServerEndpointFeatures;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableSpeechTranslationStreamingResponse : FTSpeechTranslationStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTSpeechTranslationPartialRecognitionResponse *contentAsFTSpeechTranslationPartialRecognitionResponse;
@property (copy, nonatomic) FTSpeechTranslationFinalRecognitionResponse *contentAsFTSpeechTranslationFinalRecognitionResponse;
@property (copy, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (copy, nonatomic) FTSpeechTranslationMtResponse *contentAsFTSpeechTranslationMtResponse;
@property (copy, nonatomic) FTSpeechTranslationTextToSpeechResponse *contentAsFTSpeechTranslationTextToSpeechResponse;
@property (copy, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (copy, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (copy, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (copy, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (copy, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (copy, nonatomic) FTSpeechTranslationServerEndpointFeatures *contentAsFTSpeechTranslationServerEndpointFeatures;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *content;

+ (Class)content_mutableClassForType:(long long)a0;
+ (long long)content_typeForMutableObject:(id)a0;
+ (long long)content_typeForObject:(id)a0;

- (void)setContent:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
