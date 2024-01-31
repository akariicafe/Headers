@class AVCaptureMovieFileOutput, AVCaptureVideoPreviewLayer, NSURL, AVCaptureStillImageOutput, NSString, AVCaptureSession, AVCaptureDevice, NSObject, AVCaptureDeviceInput;
@protocol OS_dispatch_queue, CKVideoRecorderDelegate;

@interface CKVideoRecorder : UIViewController <AVCaptureFileOutputRecordingDelegate> {
    long long _currentDevice;
    BOOL _previousStatusBarHidden;
    AVCaptureDevice *_frontFacingCamera;
    AVCaptureDevice *_rearFacingCamera;
    NSObject<OS_dispatch_queue> *_avCaptureSessionDispatchQueue;
}

@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureDeviceInput *rearVideoInput;
@property (retain, nonatomic) AVCaptureDeviceInput *frontVideoInput;
@property (retain, nonatomic) AVCaptureDeviceInput *audioInput;
@property (retain, nonatomic) AVCaptureMovieFileOutput *videoOutput;
@property (retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput;
@property (nonatomic) BOOL canceled;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer;
@property (nonatomic) long long cameraDevice;
@property (weak, nonatomic) id<CKVideoRecorderDelegate> delegate;
@property (copy, nonatomic) NSURL *outputFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)captureOutput:(id)a0 didStartRecordingToOutputFileAtURL:(id)a1 fromConnections:(id)a2;
- (void)loadView;
- (void)captureOutput:(id)a0 didFinishRecordingToOutputFileAtURL:(id)a1 fromConnections:(id)a2 error:(id)a3;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)startVideoCapture;
- (void)stopVideoCapture;
- (void)takePicture;
- (id)_cameraWithPosition:(long long)a0;
- (id)_configureFrontVideoInput;
- (id)_configureRearVideoInput;
- (id)audioDevice;
- (id)frontFacingCamera;
- (id)rearFacingCamera;
- (void)setupCamera:(id)a0;

@end
