@interface UserVoiceProfile : NSObject

@property (nonatomic) float pitch_mean;
@property (nonatomic) float pitch_std;
@property (nonatomic) float energy_mean;
@property (nonatomic) float energy_std;
@property (nonatomic) float duration_mean;
@property (nonatomic) float duration_std;

- (id)init;
- (id)initWithJson:(id)a0;

@end
