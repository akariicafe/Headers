@class AVWeakReferencingDelegateStorage, AVWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface AVSampleBufferVideoOutputInternal : NSObject {
    AVWeakReference *weakReference;
    struct OpaqueFigVisualContext { } *vc;
    struct OpaqueVTPixelBufferConformer { } *pixelBufferConformer;
    NSObject<OS_dispatch_queue> *stateQueue;
    AVWeakReferencingDelegateStorage *delegateStorage;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } lastImageTime;
}

@end
