@class NSString, __end_cap_, _MTLIOCommandQueue, NSError, MTLResourceList, __end_;
@protocol MTLIOScratchBuffer;

@interface _MTLIOCommandBuffer : _MTLObjectWithLabel <MTLIOCommandBufferSPI> {
    id<MTLIOScratchBuffer> _currentStagingBuffer;
    unsigned long long _currentStagingBufferRemainingBytes;
    unsigned long long _currentStagingBufferOffset;
    MTLResourceList *_resourceList;
    BOOL _retained;
    BOOL _enqueued;
    unsigned long long _labelTraceID;
    _MTLIOCommandQueue *_queue;
    struct MTLIOCommandList { struct MTLIOCommand *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; struct os_unfair_lock_s { unsigned int x0; } x5; BOOL x6; BOOL x7; BOOL x8; id x9; id x10; id x11; id x12; } *commandList;
    struct MTLIODispatch { struct MTLIODispatch *x0; id /* block */ x1; } *_completedDispatchList;
    struct MTLIODispatch { struct MTLIODispatch *x0; id /* block */ x1; } *_completedDispatchListTail;
    BOOL _completedCallbacksDone;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _cond;
    unsigned int _pendingCommands;
    struct vector<id<MTLIOScratchBuffer>, std::allocator<id<MTLIOScratchBuffer>>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<id<MTLIOScratchBuffer> *, std::allocator<id<MTLIOScratchBuffer>>> { id *__value_; } x1; } _activeScratchBuffers;
    struct vector<id<MTLIOScratchBuffer>, std::allocator<id<MTLIOScratchBuffer>>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<id<MTLIOScratchBuffer> *, std::allocator<id<MTLIOScratchBuffer>>> { id *__value_; } x1; } _poolScratchBuffers;
}

@property (readonly, nonatomic) unsigned long long globalTraceObjectID;
@property (copy) NSString *label;
@property (readonly) long long status;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)waitUntilCompleted;
- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)commit;
- (void)tryCancel;
- (void)encodeSignalEvent:(id)a0 value:(unsigned long long)a1;
- (void)addCompletedHandler:(id /* block */)a0;
- (void)pushDebugGroup:(id)a0;
- (void)enqueue;
- (id).cxx_construct;
- (BOOL)isCommitted;
- (void).cxx_destruct;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)barrier;
- (void)popDebugGroup;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)addBarrier;
- (void)clearScratchBufferLists;
- (void)copyStatusToBuffer:(id)a0 offset:(unsigned long long)a1;
- (void)createCommandListWithResourcePool:(id)a0;
- (void)didCompleteWithStatus:(long long)a0;
- (struct MTLIOCommandList { struct MTLIOCommand *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; struct os_unfair_lock_s { unsigned int x0; } x5; BOOL x6; BOOL x7; BOOL x8; id x9; id x10; id x11; id x12; } *)getCommandList;
- (id)getReusableScratchBuffer:(unsigned long long)a0;
- (id)initWithQueue:(id)a0 resourceList:(id)a1 retained:(BOOL)a2;
- (void)loadBuffer:(id)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2 handle:(id)a3 handleOffset:(unsigned long long)a4;
- (void)loadBuffer:(id)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2 sourceHandle:(id)a3 sourceHandleOffset:(unsigned long long)a4;
- (void)loadBytes:(void *)a0 size:(unsigned long long)a1 sourceHandle:(id)a2 sourceHandleOffset:(unsigned long long)a3;
- (void)loadTexture:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 bytesPerRow:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5 dstOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a6 handle:(id)a7 handleOffset:(unsigned long long)a8;
- (void)loadTexture:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 sourceBytesPerRow:(unsigned long long)a4 sourceBytesPerImage:(unsigned long long)a5 destinationOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a6 sourceHandle:(id)a7 sourceHandleOffset:(unsigned long long)a8;
- (void)reuseActiveScratchBuffers;
- (void)signalEvent:(id)a0 value:(unsigned long long)a1;

@end
