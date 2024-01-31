@class NSString, AVCaptureSession, NSObject;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureAVCaptureBaseSession : NSObject <CMContinuityCaptureAVCaptureSession> {
    AVCaptureSession *_captureSession;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
    long long _transport;
    long long _clientDeviceModel;
}

@property long long transport;
@property long long clientDeviceModel;
@property (readonly) long long state;
@property (readonly) struct OpaqueCMClock { } *synchronizationClock;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, retain) AVCaptureSession *captureSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)didConfigure;
- (void)handleCaptureSessionNotification:(id)a0;
- (id)initWithCaptureSession:(id)a0 queue:(id)a1;
- (void)willConfigure;

@end
