@class NSString, QSSAudioDescription, QSSTextToSpeechMeta;

@interface QSSMutableBeginTextToSpeechStreamingResponse : QSSBeginTextToSpeechStreamingResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *stream_id;
@property (nonatomic) long long audio_type;
@property (copy, nonatomic) QSSAudioDescription *decoder_description;
@property (copy, nonatomic) QSSAudioDescription *playback_description;
@property (copy, nonatomic) QSSTextToSpeechMeta *meta_info;
@property (nonatomic) float streaming_playback_buffer_size_in_seconds;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
