@interface BWDeferredCaptureControllerRequest : BWStillImageProcessorControllerRequest

@property (nonatomic) int err;

- (BOOL)readyForProcessing;

@end
