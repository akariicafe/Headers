@class CAMStillImageCaptureRequest;

@interface CAMStillImageCaptureCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMStillImageCaptureRequest *_request;

- (void)encodeWithCoder:(id)a0;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_videoOrientationForCaptureOrientation:(long long)a0;

@end
