@interface VNDetectorSyncTasksQueueCache : VNSyncTasksQueueCache

+ (long long)maximumAllowedTasksInTheQueue;
+ (id)queueLabelWithUniqueAppendix:(id)a0;
+ (id)sharedCache;

@end
