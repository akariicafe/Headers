@interface AVCaptureDeviceControlRequest : NSObject

@property (readonly, copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) int requestID;
@property (nonatomic) int errorCode;

+ (id)deviceControlRequestWithCompletionBlock:(id /* block */)a0;

- (void)dealloc;
- (id)_initWithCompletionBlock:(id /* block */)a0;

@end
