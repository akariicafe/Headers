@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface PLConcurrencyLimiter : NSObject {
    NSObject<OS_dispatch_queue> *_userInitiatedQueueA;
    NSObject<OS_dispatch_queue> *_backgroundAndUtilityQueue;
    NSObject<OS_dispatch_queue> *_highQOSAssetIngestQueue;
    NSObject<OS_dispatch_queue> *_exclusiveMomentsQueue;
    NSObject<OS_dispatch_queue> *_sharedUtilityQueue;
    NSObject<OS_dispatch_queue> *_sharedBackgroundQueue;
    NSObject<OS_dispatch_workloop> *_sharedWorkloop;
}

+ (id)debugDescriptionOfEnqueuedBlocksOnQueue:(id)a0;
+ (void)configureListTrackingForDispatchQueue:(id)a0;
+ (void)reportBlockDequeuedOnQueue:(id)a0;
+ (id)sharedLimiter;
+ (BOOL)isRunningUnderLimiter;
+ (void)reportBlockEnqueued:(id /* block */)a0 onQueue:(id)a1 forLibrary:(id)a2;

- (id)sharedBackgroundQueue;
- (id)init;
- (void)_async:(id /* block */)a0 identifyingBlock:(id /* block */)a1 libraryRole:(unsigned long long)a2 libraryForTelemetry:(id)a3;
- (void /* function */ *)_callOutForQoS:(unsigned int)a0 fromQueue:(id)a1;
- (void)_syncPerformBlockNotOnAnyQueue:(id /* block */)a0;
- (void)_sync:(id /* block */)a0 identifyingBlock:(id /* block */)a1 libraryRole:(unsigned long long)a2 libraryForTelemetry:(id)a3;
- (void)_handleUnexpectedQoSClass:(unsigned int)a0;
- (void).cxx_destruct;
- (long long)maxConcurrency;
- (void)sync:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;
- (id)debugDescription;
- (void)asyncPerformOnContext:(id)a0 identifyingBlock:(id /* block */)a1 block:(id /* block */)a2;
- (id)_queuesTrackingBlocks;
- (id)_nextQueueForQoS:(unsigned int)a0 libraryRole:(unsigned long long)a1;
- (void)dispatchAsync:(id)a0 block:(id /* block */)a1;
- (id)sharedUtilityQueue;
- (void)async:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;

@end
