@interface CAMVideoStabilizationCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isEnabled) BOOL _enabled;
@property (readonly, nonatomic) long long _strength;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAutomaticVideoStabilizationEnabled:(BOOL)a0 strength:(long long)a1;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
