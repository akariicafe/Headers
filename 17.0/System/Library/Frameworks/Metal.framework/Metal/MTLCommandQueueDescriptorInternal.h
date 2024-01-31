@class NSObject;
@protocol OS_dispatch_queue;

@interface MTLCommandQueueDescriptorInternal : MTLCommandQueueDescriptor {
    unsigned long long _maxCommandBufferCount;
    unsigned long long _qosLevel;
    NSObject<OS_dispatch_queue> *_commitQueue;
    BOOL _commitSynchronously;
    NSObject<OS_dispatch_queue> *_completionQueue;
    BOOL _disableCrossQueueHazardTracking;
    BOOL _disableAsyncCompletionDispatch;
    unsigned long long _devicePartition;
}

@property BOOL isOpenGLQueue;
@property (nonatomic) BOOL disableIOFencing;
@property (nonatomic) BOOL enableLowLatencySignalSharedEvent;
@property (nonatomic) BOOL enableLowLatencyWaitSharedEvent;
@property (nonatomic) BOOL lockParameterBufferSizeToMax;

- (id)formattedDescription:(unsigned long long)a0;
- (void)setCommitQueue:(id)a0;
- (void)setCompletionQueue:(id)a0;
- (id)init;
- (id)completionQueue;
- (BOOL)commitSynchronously;
- (unsigned long long)devicePartition;
- (void)setCommitSynchronously:(BOOL)a0;
- (void)setDevicePartition:(unsigned long long)a0;
- (BOOL)disableCrossQueueHazardTracking;
- (unsigned long long)maxCommandBufferCount;
- (id)description;
- (void)setQosLevel:(unsigned long long)a0;
- (unsigned long long)qosLevel;
- (BOOL)disableAsyncCompletionDispatch;
- (void)setMaxCommandBufferCount:(unsigned long long)a0;
- (id)commitQueue;
- (void)setDisableAsyncCompletionDispatch:(BOOL)a0;
- (void)setDisableCrossQueueHazardTracking:(BOOL)a0;

@end
