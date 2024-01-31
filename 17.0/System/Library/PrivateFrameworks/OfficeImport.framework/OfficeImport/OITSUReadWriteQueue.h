@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;

@interface OITSUReadWriteQueue : NSObject {
    NSObject<OS_dispatch_semaphore> *mCanEnqueueReaders;
    NSObject<OS_dispatch_queue> *mGlobalQueue;
    NSObject<OS_dispatch_group> *mInFlightReaders;
    NSObject<OS_dispatch_group> *mInFlightWriters;
}

- (id)initWithIdentifier:(id)a0;
- (void)dealloc;
- (void)performAsyncWrite:(id /* block */)a0;
- (void)performSyncRead:(id /* block */)a0;
- (void)performSyncWrite:(id /* block */)a0;
- (void)waitOnInFlightWriters;

@end
