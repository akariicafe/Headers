@interface CAMPortraitLightingEffectStrengthCommand : CAMCaptureCommand

@property (readonly, nonatomic) double effectStrength;

- (void)encodeWithCoder:(id)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEffectStrength:(double)a0;

@end
