@class AVCaptureSession, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureInputInternal : NSObject {
    AVCaptureSession *session;
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    struct OpaqueFigCaptureSession { } *figCaptureSession;
}

- (id)init;
- (void)dealloc;

@end
