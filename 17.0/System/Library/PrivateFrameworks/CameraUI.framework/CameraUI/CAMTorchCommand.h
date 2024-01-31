@interface CAMTorchCommand : CAMCaptureCommand

@property (readonly, nonatomic) long long _torchMode;
@property (readonly, nonatomic) float _level;

- (void)encodeWithCoder:(id)a0;
- (id)initWithTorchMode:(long long)a0;
- (id)initWithTorchLevel:(float)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
