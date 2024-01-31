@class NSString, AVCaptureSession, AVCapturePhotoOutput;
@protocol WFTakePhotoImmediateModeDelegate;

@interface WFTakePhotoImmediateModeManager : NSObject <AVCapturePhotoCaptureDelegate>

@property (nonatomic) long long position;
@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCapturePhotoOutput *output;
@property (weak, nonatomic) id<WFTakePhotoImmediateModeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;
- (void)stop;
- (void).cxx_destruct;
- (void)cameraIsReady:(id)a0;
- (id)captureSessionWithDevice:(id)a0 output:(id)a1 error:(id *)a2;
- (id)configuredCaptureDeviceWithError:(id *)a0;
- (id)initWithCameraPosition:(long long)a0 delegate:(id)a1;
- (void)startSessionWithError:(id *)a0;
- (void)takePhotoWithError:(id *)a0;

@end
