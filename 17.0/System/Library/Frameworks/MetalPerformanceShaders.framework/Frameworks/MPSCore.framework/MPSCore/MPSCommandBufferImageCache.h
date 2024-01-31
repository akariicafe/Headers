@protocol MTLCommandBuffer, MPSHeapProvider;

@interface MPSCommandBufferImageCache : NSObject {
    void *_device;
    long long _debugMode;
    struct HeapNode *_freeList[65];
    struct CacheFrame { struct CacheFrame *x0; struct ResourceNode *x1; struct HeapNodeBlock *x2; } *_frameList;
    struct ResourceNode { struct ResourceNode *x0; id x1; } *_retainedResources;
    struct MPSAutoCache { id x0; id x1; struct CacheFrame *x2; } *_userCacheFrame;
    unsigned long long _minimumBin;
    BOOL _needsRetain;
    unsigned long long _totalAllocationBytes;
    unsigned long long _cacheDelay;
    struct atomic<long> { struct __cxx_atomic_impl<long, std::__cxx_atomic_base_impl<long>> { _Atomic long long __a_value; } __a_; } _commandBufferCount;
    BOOL _isMPSCommandBuffer;
}

@property (readonly, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (nonatomic) unsigned long long batchSizeHint;
@property (retain, nonatomic) id<MPSHeapProvider> heapProvider;

- (void)dealloc;
- (id)newHeapBlock:(unsigned long long)a0 protections:(unsigned long long)a1;
- (id)initWithCommandBuffer:(id)a0;
- (id)debugDescription;
- (void)releaseHeapBlock:(id)a0 heapProvider:(id)a1;
- (void)addHandlerToCommandBuffer:(id)a0;

@end
