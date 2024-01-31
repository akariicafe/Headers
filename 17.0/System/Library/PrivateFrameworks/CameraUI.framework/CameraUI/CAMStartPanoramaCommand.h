@class CAMPanoramaCaptureRequest;

@interface CAMStartPanoramaCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMPanoramaCaptureRequest *_request;

- (void)encodeWithCoder:(id)a0;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
