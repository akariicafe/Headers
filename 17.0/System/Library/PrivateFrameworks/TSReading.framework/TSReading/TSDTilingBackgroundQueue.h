@class TSKAccessController, NSObject;
@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface TSDTilingBackgroundQueue : NSObject {
    NSObject<OS_dispatch_semaphore> *mCanEnqueueReaders;
    NSObject<OS_dispatch_group> *mInFlightReaders;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } mReaderSpinLock;
    unsigned long long mReaderCount;
    NSObject<OS_dispatch_semaphore> *mReadLockSignal;
    long long mShutdownToken;
    TSKAccessController *mAccessController;
}

@property (getter=isShuttingDown) BOOL shuttingDown;

+ (BOOL)isHoldingReadLockFromBackgroundQueue;
+ (id)p_sharedLimitedQueue;

- (void)shutdown;
- (id)init;
- (void)dealloc;
- (void)performAsync:(id /* block */)a0;
- (void)drainAndPerformSync:(id /* block */)a0;
- (id)initWithAccessController:(id)a0;
- (void)p_readLock;
- (void)p_readUnlock;

@end
