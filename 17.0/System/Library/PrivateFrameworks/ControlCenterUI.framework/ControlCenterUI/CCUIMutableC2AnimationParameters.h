@interface CCUIMutableC2AnimationParameters : CCUIC2AnimationParameters

@property (nonatomic, getter=isInteractive) BOOL interactive;
@property (nonatomic) double tension;
@property (nonatomic) double friction;
@property (nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } frameRateRange;
@property (nonatomic) unsigned int highFrameRateReason;

- (void)setTension:(double)a0;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0;
- (void)setInteractive:(BOOL)a0;
- (void)setHighFrameRateReason:(unsigned int)a0;
- (void)setFriction:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
