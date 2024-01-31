@class FTAudioDescription, NSString, FTTextToSpeechMeta;

@interface FTMutableTextToSpeechCacheMetaInfo : FTTextToSpeechCacheMetaInfo

@property (copy, nonatomic) FTTextToSpeechMeta *meta_info;
@property (nonatomic) long long audio_type;
@property (nonatomic) BOOL enable_word_timing_info;
@property (copy, nonatomic) FTAudioDescription *decoder_description;
@property (copy, nonatomic) FTAudioDescription *playback_description;
@property (nonatomic) int audio_length;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *original_session_id;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
