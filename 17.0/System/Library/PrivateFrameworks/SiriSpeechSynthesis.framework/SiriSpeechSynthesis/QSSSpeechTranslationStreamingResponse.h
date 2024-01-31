@class NSMutableDictionary, QSSRequestStatsResponse, QSSAudioLimitExceeded, QSSSpeechTranslationTextToSpeechResponse, QSSServerEndpointFeatures, QSSSpeechTranslationMtResponse, QSSSpeechTranslationServerEndpointFeatures, QSSRecognitionProgress, QSSSpeechTranslationFinalRecognitionResponse, QSSRecognitionCandidate, QSSSpeechTranslationPartialRecognitionResponse, NSData, QSSClientSetupInfo, QSSFinalBlazarResponse;

@interface QSSSpeechTranslationStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SpeechTranslationStreamingResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) QSSSpeechTranslationPartialRecognitionResponse *contentAsQSSSpeechTranslationPartialRecognitionResponse;
@property (readonly, nonatomic) QSSSpeechTranslationFinalRecognitionResponse *contentAsQSSSpeechTranslationFinalRecognitionResponse;
@property (readonly, nonatomic) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (readonly, nonatomic) QSSSpeechTranslationMtResponse *contentAsQSSSpeechTranslationMtResponse;
@property (readonly, nonatomic) QSSSpeechTranslationTextToSpeechResponse *contentAsQSSSpeechTranslationTextToSpeechResponse;
@property (readonly, nonatomic) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;
@property (readonly, nonatomic) QSSRecognitionProgress *contentAsQSSRecognitionProgress;
@property (readonly, nonatomic) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (readonly, nonatomic) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (readonly, nonatomic) QSSServerEndpointFeatures *contentAsQSSServerEndpointFeatures;
@property (readonly, nonatomic) QSSClientSetupInfo *contentAsQSSClientSetupInfo;
@property (readonly, nonatomic) QSSSpeechTranslationServerEndpointFeatures *contentAsQSSSpeechTranslationServerEndpointFeatures;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::SpeechTranslationStreamingResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationStreamingResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationStreamingResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
