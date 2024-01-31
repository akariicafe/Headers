@class AVAudioChannelLayout;

@interface PHASEChannelMixer : PHASEMixer

@property (readonly, nonatomic) AVAudioChannelLayout *inputChannelLayout;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 inputChannelLayout:(id)a1;

@end
