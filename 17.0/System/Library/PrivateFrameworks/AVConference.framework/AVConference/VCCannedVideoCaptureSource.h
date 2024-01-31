@class VCWeakObjectHolder, NSObject;
@protocol OS_dispatch_queue, VCCannedVideoFrameFeeder;

@interface VCCannedVideoCaptureSource : VCObject {
    struct _tagVCCannedVideoCaptureSourceContext { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } attributeMutex; _Atomic int frameRate; struct OpaqueCMClock *hostClock; struct OpaqueFigThread *producerThread; BOOL producerThreadCanceled; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } producerMutex; struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } producerConditional; struct OpaqueFigThread *consumerThread; BOOL consumerThreadCanceled; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } consumerMutex; struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } consumerConditional; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } frameRingBufferMutex; struct Frame *frameRingBuffer; int frameRingBufferIndex; NSObject<OS_dispatch_queue> *helperQueue; } _context;
    id<VCCannedVideoFrameFeeder> _frameFeeder;
    NSObject<OS_dispatch_queue> *_captureSessionQueue;
    VCWeakObjectHolder *_weakCallbackContext;
    void /* function */ *_frameCallback;
    BOOL _enableTxTimestampAlignmentLogs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

- (void)dealloc;
- (int)start;
- (int)stop;
- (void)setFrameRate:(int)a0;
- (int)frameRate;
- (void)setWidth:(int)a0 height:(int)a1;
- (id)initWithVideo:(id)a0 callbackContext:(id)a1 frameCallback:(void /* function */ *)a2;

@end
