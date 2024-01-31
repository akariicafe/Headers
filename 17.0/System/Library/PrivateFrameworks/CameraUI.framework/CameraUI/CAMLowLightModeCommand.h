@interface CAMLowLightModeCommand : CAMCaptureCommand

@property (readonly, nonatomic) long long _lowLightMode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithLowLightMode:(long long)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
