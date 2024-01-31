@class QSSTextToSpeechResponseDevData, NSString, NSArray, NSData, QSSTextToSpeechFeature, QSSAudioDescription, QSSTextToSpeechMeta;

@interface QSSMutableTextToSpeechResponse : QSSTextToSpeechResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (nonatomic) long long audio_type;
@property (nonatomic) int sample_rate;
@property (copy, nonatomic) NSData *audio;
@property (copy, nonatomic) QSSAudioDescription *decoder_description;
@property (copy, nonatomic) QSSAudioDescription *playback_description;
@property (copy, nonatomic) NSArray *word_timing_info;
@property (copy, nonatomic) QSSTextToSpeechMeta *meta_info;
@property (copy, nonatomic) QSSTextToSpeechFeature *feature;
@property (copy, nonatomic) QSSTextToSpeechResponseDevData *dev_data;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)audio:(id /* block */)a0;

@end
