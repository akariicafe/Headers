@class NSMutableArray, NSString, MTLResourceListPool, MTLSharedEventListener, NSObject;
@protocol OS_dispatch_queue, MTLDevice, MTLSharedEvent, OS_dispatch_semaphore, MTLCommandQueue, MTLIOScratchBufferAllocator;

@interface _MTLIOCommandQueue : _MTLObjectWithLabel <MTLIOCommandQueueSPI> {
    long long _type;
    long long _priority;
    NSObject<OS_dispatch_queue> *_commitQueue;
    unsigned long long _maxWorkerThreads;
    MTLResourceListPool *_resourceListPool;
    NSObject<OS_dispatch_semaphore> *_commandBufferSemaphore;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } cmdCvar;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } cmdMutex;
    NSObject<OS_dispatch_queue> *_followonQueue;
    unsigned long long _labelTraceID;
    struct MTLIOCommandQueueCommandList { struct { struct MTLIOCommandQueueCommand *tqh_first; struct MTLIOCommandQueueCommand **tqh_last; } activeq; struct _opaque_pthread_mutex_t *lock; struct _opaque_pthread_cond_t *cond; _MTLIOCommandQueue *queue; BOOL exit; } _commandList;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _completeQueueMutex;
    NSMutableArray *_completeQueue;
    BOOL _usesPooledScratchBufferAllocator;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) id<MTLCommandQueue> gpuQueue;
@property (readonly) id<MTLSharedEvent> gpuEvent;
@property (readonly) MTLSharedEventListener *eventSignalListener;
@property (readonly) id<MTLIOScratchBufferAllocator> scratchBufferAllocator;
@property (readonly, nonatomic) unsigned long long globalTraceObjectID;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (void)commit:(id)a0;
- (void)barrier;
- (void)didComplete:(id)a0 withStatus:(long long)a1;
- (void)enqueueBarrier;
- (void)kickAllocatorCleanupQueue;
- (void)launchIOWorkerThreads;
- (void)returnActiveScratchBuffersToPool;

@end
