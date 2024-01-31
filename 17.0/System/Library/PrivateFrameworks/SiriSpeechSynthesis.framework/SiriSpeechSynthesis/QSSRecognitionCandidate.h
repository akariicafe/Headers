@class QSSLatnnMitigatorResult, NSString, NSMutableDictionary, QSSRecognitionResult, NSData, QSSAudioAnalytics;

@interface QSSRecognitionCandidate : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecognitionCandidate { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) QSSRecognitionResult *recognition_result;
@property (readonly, nonatomic) NSString *result_id;
@property (readonly, nonatomic) double snr;
@property (readonly, nonatomic) long long fingerprint_detection;
@property (readonly, nonatomic) QSSAudioAnalytics *audio_analytics;
@property (readonly, nonatomic) long long watermark_detection;
@property (readonly, nonatomic) double watermark_peak_average;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) QSSLatnnMitigatorResult *latnn_mitigator_result;
@property (readonly, nonatomic) NSString *request_locale;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::RecognitionCandidate> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionCandidate { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionCandidate { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
