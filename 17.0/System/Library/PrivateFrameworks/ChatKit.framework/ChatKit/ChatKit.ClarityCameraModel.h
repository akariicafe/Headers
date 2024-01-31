@interface ChatKit.ClarityCameraModel : NSObject <AVCapturePhotoCaptureDelegate, AVCaptureFileOutputRecordingDelegate> {
    void /* unknown type, empty encoding */ captureSession;
    void /* unknown type, empty encoding */ videoOutput;
    void /* unknown type, empty encoding */ captureSessionRuntimeErrorSubscription;
    void /* unknown type, empty encoding */ videoDeviceInput;
    void /* unknown type, empty encoding */ videoRecordCompletionBlock;
    void /* unknown type, empty encoding */ videoRecordingWasCanceled;
    void /* unknown type, empty encoding */ _currentVideoURL;
}

- (id)init;
- (void)captureOutput:(id)a0 didFinishRecordingToOutputFileAtURL:(id)a1 fromConnections:(id)a2 error:(id)a3;
- (void).cxx_destruct;

@end
