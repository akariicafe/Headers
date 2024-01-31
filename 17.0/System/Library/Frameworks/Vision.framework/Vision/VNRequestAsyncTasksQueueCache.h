@interface VNRequestAsyncTasksQueueCache : VNAsyncTasksQueueCache

+ (long long)maximumAllowedTasksInTheQueue;
+ (id)queueLabelWithUniqueAppendix:(id)a0;
+ (id)sharedCache;

@end
