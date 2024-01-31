@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MCMTestLocks : NSObject {
    long long _lockCount[13];
    NSObject<OS_dispatch_queue> *_lockQueue[13];
    NSObject<OS_dispatch_semaphore> *_lockSemaphore[13];
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) BOOL enabled;

+ (id)sharedInstance;

- (id)init;
- (void)_stateQueue_acquireLock:(unsigned long long)a0;
- (void)_stateQueue_updateCountForLock:(unsigned long long)a0 byCount:(long long)a1;
- (void)_stateQueue_releaseLock:(unsigned long long)a0;
- (void)waitOnLock:(unsigned long long)a0;
- (void)releaseLock:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)releaseAllLocks;
- (void)acquireLock:(unsigned long long)a0;

@end
