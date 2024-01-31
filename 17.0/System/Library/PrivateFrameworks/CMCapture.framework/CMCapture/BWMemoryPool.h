@class NSObject, IOSurfaceMemoryPool;
@protocol OS_dispatch_queue;

@interface BWMemoryPool : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    IOSurfaceMemoryPool *_pool;
    unsigned int _flushAssertionCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _flushAssertionLock;
}

@property (class, readonly, nonatomic) BWMemoryPool *sharedMemoryPool;

@property (readonly, nonatomic) unsigned long long poolIdentifier;

+ (void)initialize;

- (void)_addFlushAssertion;
- (id)init;
- (int)enableForCaptureDevice:(id)a0;
- (void)dealloc;
- (void)disable;
- (void)enableForPixelBufferAttributes:(id)a0;
- (int)enableForCaptureStream:(id)a0;
- (void)flush;
- (id)newFlushAssertion:(id)a0;
- (void)ensureMemoryAsyncWithSize:(unsigned long long)a0;
- (id)newMTLBufferWithLength:(unsigned long long)a0 forDevice:(id)a1;
- (int)disableForCaptureDevice:(id)a0;
- (void)disableWithCompletionHandler:(id /* block */)a0;
- (int)disableForCaptureStream:(id)a0;
- (void)_removeFlushAssertion;
- (BOOL)getInUseFootprint:(unsigned long long *)a0 andOutOfUseFootprint:(unsigned long long *)a1;

@end
