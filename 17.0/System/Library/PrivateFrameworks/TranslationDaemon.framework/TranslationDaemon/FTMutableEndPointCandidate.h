@class NSString;

@interface FTMutableEndPointCandidate : FTEndPointCandidate

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (nonatomic) int end_point_likelihood;
@property (nonatomic) int processed_audio_duration_ms;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
