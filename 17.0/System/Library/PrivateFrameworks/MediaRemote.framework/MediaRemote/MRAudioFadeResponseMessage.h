@interface MRAudioFadeResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) long long fadeDuration;

- (unsigned long long)type;
- (id)initWithFadeDuration:(long long)a0 error:(id)a1;

@end
