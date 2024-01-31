@class NSMutableDictionary;

@interface VNTasksQueueCache : NSObject {
    NSMutableDictionary *_queueNameToTasksQueueDictionary;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _queueNameToTasksQueueDictionaryLock;
    long long _maximumTasksCount;
}

@property (class, readonly) VNTasksQueueCache *sharedCache;
@property (class, readonly) long long maximumAllowedTasksInTheQueue;

@property long long maximumTasksCount;

+ (id)queueLabelWithUniqueAppendix:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)releaseQueueWithUniqueAppendix:(id)a0;
- (id)_queueWithUniqueAppendix:(id)a0 queueClass:(Class)a1;
- (id)queueWithUniqueAppendix:(id)a0;
- (void)releaseAllQueues;

@end
