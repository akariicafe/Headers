@interface QSSMutableTextToSpeechUserVoiceProfile : QSSTextToSpeechUserVoiceProfile

@property (nonatomic) float pitch_mean;
@property (nonatomic) float pitch_std;
@property (nonatomic) float energy_mean;
@property (nonatomic) float energy_std;
@property (nonatomic) float duration_mean;
@property (nonatomic) float duration_std;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
