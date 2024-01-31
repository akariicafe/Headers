@interface FMScheduler : NSObject

+ (id)mainThreadScheduler;
+ (id)serialDispatchQueueSchedulerWithName:(id)a0;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)a0;
+ (id)immediateScheduler;
+ (id)globalAsyncScheduler;
+ (id)schedulerWithDispatchQueue:(id)a0;

@end
