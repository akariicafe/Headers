@interface FTMutableTextToSpeechRequestProsodyControlConfig : FTTextToSpeechRequestProsodyControlConfig

@property (nonatomic) float global_rate;
@property (nonatomic) float global_pitch;
@property (nonatomic) float global_energy;
@property (nonatomic) float global_sent_pitch;
@property (nonatomic) float global_sent_pitchrange;
@property (nonatomic) float global_sent_duration;
@property (nonatomic) float global_sent_energy;
@property (nonatomic) float global_sent_tilt;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
