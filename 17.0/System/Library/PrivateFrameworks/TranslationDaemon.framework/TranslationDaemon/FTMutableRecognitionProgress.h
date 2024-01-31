@class NSString;

@interface FTMutableRecognitionProgress : FTRecognitionProgress

@property (nonatomic) int processed_audio_duration_ms;
@property (copy, nonatomic) NSString *speech_id;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
