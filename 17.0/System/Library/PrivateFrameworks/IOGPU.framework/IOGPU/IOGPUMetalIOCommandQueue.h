@class IOGPUMetalCommandQueue, NSObject, NSMutableArray, IOGPUMetalDevice;
@protocol MTLDevice, OS_dispatch_source, MTLCommandQueue, OS_dispatch_queue;

@interface IOGPUMetalIOCommandQueue : _MTLIOCommandQueue {
    IOGPUMetalDevice<MTLDevice> *_device;
    struct __IOGPUIOCommandQueue { } *_ioCommandQueueRef;
    IOGPUMetalCommandQueue<MTLCommandQueue> *_gpuQueue;
    NSMutableArray *_pendingQueue;
    NSMutableArray *_submittedQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _pendingQueueLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _submittedQueueLock;
    NSObject<OS_dispatch_queue> *_submissionQueueDispatch;
    NSObject<OS_dispatch_queue> *_completionQueueDispatch;
    NSObject<OS_dispatch_source> *_commandQueueEventSource;
    NSObject<OS_dispatch_queue> *_ioThreadDispatch;
    NSObject<OS_dispatch_queue> *_decompressionQueue;
    unsigned long long _globalTraceObjectID;
}

- (unsigned long long)globalTraceObjectID;
- (void)dealloc;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (void)setLabel:(id)a0;
- (long long)getPriority;
- (void)enqueueCommandBuffer:(id)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (void)barrier;
- (void)didComplete:(id)a0 withStatus:(long long)a1;
- (void)enqueueBarrier;
- (void)launchIOWorkerThreads;
- (void)_submitAvailableCommands:(void *)a0;
- (void)commandBufferComplete;
- (void)commitCommandBuffer:(id)a0;
- (id)getDecompressionQueue;
- (void)launchIOGPUIOThreads;
- (void)submitAvailableCommands;

@end
