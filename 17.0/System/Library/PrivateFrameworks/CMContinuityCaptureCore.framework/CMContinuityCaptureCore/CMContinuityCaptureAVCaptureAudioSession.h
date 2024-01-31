@class AVCaptureSession, NSObject;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureAVCaptureAudioSession : CMContinuityCaptureAVCaptureBaseSession {
    AVCaptureSession *_captureSession;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
    long long _transport;
}

- (id)initWithQueue:(id)a0;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)configureSessionWithInput:(id)a0 andOutput:(id)a1;

@end
