@class NSTimer, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IMPendingReplicatedMessageCache : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *pendingMessages;
@property (retain, nonatomic) NSTimer *timeoutTimer;

+ (id)sharedCache;

- (id)init;
- (void)_scheduleTimeout;
- (void).cxx_destruct;
- (void)_enforceTimeout;
- (void)_enforceCacheLimit;
- (void)_metricMatchingFailureWithReason:(id)a0;
- (void)_removePendingMessageWithGUID:(id)a0;
- (void)addPendingMessageWithGUID:(id)a0 releaseBlock:(id /* block */)a1;
- (void)clearPendingMessageWithGUID:(id)a0;
- (void)releasePendingMessageWithGUID:(id)a0 completion:(id /* block */)a1;

@end
