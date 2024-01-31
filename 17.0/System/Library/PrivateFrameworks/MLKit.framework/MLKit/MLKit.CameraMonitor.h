@interface MLKit.CameraMonitor : NSObject <AVCapturePhotoCaptureDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    void /* unknown type, empty encoding */ captureSession;
    void /* unknown type, empty encoding */ camera;
    void /* unknown type, empty encoding */ cameraInput;
    void /* unknown type, empty encoding */ videoOutput;
    void /* unknown type, empty encoding */ photoOutput;
    void /* unknown type, empty encoding */ sessionQueue;
    void /* unknown type, empty encoding */ liveVideoFeedQueue;
    void /* unknown type, empty encoding */ authSetupResult;
    void /* unknown type, empty encoding */ monitorObject;
}

- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
