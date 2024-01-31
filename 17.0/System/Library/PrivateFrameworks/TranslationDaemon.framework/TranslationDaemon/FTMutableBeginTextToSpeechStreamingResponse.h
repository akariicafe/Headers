@class NSString, FTTextToSpeechMeta, FTAudioDescription;

@interface FTMutableBeginTextToSpeechStreamingResponse : FTBeginTextToSpeechStreamingResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *stream_id;
@property (nonatomic) long long audio_type;
@property (copy, nonatomic) FTAudioDescription *decoder_description;
@property (copy, nonatomic) FTAudioDescription *playback_description;
@property (copy, nonatomic) FTTextToSpeechMeta *meta_info;
@property (nonatomic) float streaming_playback_buffer_size_in_seconds;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
