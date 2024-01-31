@interface FCTaskScheduler : NSObject

+ (void)executeOptionalPrefetchBlock:(id /* block */)a0;
+ (id)backgroundDownloadOperationQueue;
+ (void)disableOptionalPrefetching;
+ (void)scheduleLowPriorityAsyncBlock:(id /* block */)a0;
+ (id)lowPriorityOperationQueue;
+ (void)pushHighPriorityTaskInFlight;
+ (void)popHighPriorityTaskInFlight;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)a0;
+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (id)lowPriorityQueue;
+ (void)scheduleLowPriorityBlock:(id /* block */)a0;
+ (void)scheduleLowPriorityOperation:(id)a0;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)a0;

@end
