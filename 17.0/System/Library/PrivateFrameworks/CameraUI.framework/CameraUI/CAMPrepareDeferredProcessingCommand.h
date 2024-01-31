@class PLCameraDeferredProcessingCoordinator, CAMStillImageCaptureRequest;

@interface CAMPrepareDeferredProcessingCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMStillImageCaptureRequest *_request;
@property (readonly, nonatomic) PLCameraDeferredProcessingCoordinator *_deferredProcessingCoordinator;

- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequest:(id)a0 coordinator:(id)a1;

@end
