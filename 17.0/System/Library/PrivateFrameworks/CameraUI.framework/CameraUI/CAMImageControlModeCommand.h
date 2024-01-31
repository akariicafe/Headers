@interface CAMImageControlModeCommand : CAMCaptureCommand

@property (readonly, nonatomic) long long _captureMode;
@property (readonly, nonatomic) BOOL _capturing;

- (id)initWithCaptureMode:(long long)a0 capturing:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
