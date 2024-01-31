@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface DTXResourceTracker : NSObject {
    unsigned long long _total;
    unsigned long long _maxChunk;
    unsigned long long _used;
    unsigned int _waiting;
    unsigned int _acquireNum;
    int _suspendCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_acqSem;
    DTXResourceTracker *_parentTracker;
}

@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) unsigned long long maxChunkSize;
@property (nonatomic) BOOL log;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)acquireSize:(unsigned long long)a0;
- (void)forceAcquireSize:(unsigned long long)a0;
- (void)releaseSize:(unsigned long long)a0;
- (void)resumeLimits;
- (void)suspendLimits;

@end
