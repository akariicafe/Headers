@class AVCaptureSession, NSString, AVCaptureDeviceInput, AVCaptureVideoPreviewLayer, NSObject;
@protocol OS_dispatch_queue, BKUIVideoCaptureSesssionDelegate;

@interface BKUIPearlVideoCaptureSession : NSObject <BKUIPearlVideoCaptureSessionType> {
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    unsigned long long _captureSessionRestarts;
    BOOL _captureSessionInterrupted;
    NSObject<OS_dispatch_queue> *_captureQueue;
}

@property (weak, nonatomic) id<BKUIVideoCaptureSesssionDelegate> delegate;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (readonly, nonatomic) double additionalPreviewScalingAllowedByCameraFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)startCapture;
- (id)_frontCamera;
- (void)_captureSessionInterrupted:(id)a0;
- (void)_captureSessionStarted:(id)a0;
- (void)_captureSessionStopped:(id)a0;
- (void)_setupCaptureStack;
- (void)_stopSessionAndTearDown;
- (BOOL)_synchronizedCaptureSessionInterrupted;
- (void)endCapture;

@end
