@interface CAMSetVideoOrientationCommand : CAMCaptureCommand

@property (readonly, nonatomic) long long _captureOrientation;

- (void)encodeWithCoder:(id)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_videoOrientationForCaptureOrientation:(long long)a0;
- (id)initWithCaptureOrientation:(long long)a0;

@end
