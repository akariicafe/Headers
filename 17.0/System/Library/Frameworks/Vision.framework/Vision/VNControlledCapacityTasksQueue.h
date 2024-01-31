@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_queue_attr, OS_dispatch_semaphore;

@interface VNControlledCapacityTasksQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    long long _maximumTasksCount;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (class, readonly) NSObject<OS_dispatch_queue_attr> *dispatchQueueAttribute;
@property (class) long long tasksTimeout;

@property long long maximumTasksCount;

- (id)description;
- (void).cxx_destruct;
- (BOOL)currentQueueIsSynchronizationQueue;
- (void)dispatchGroupAsyncByPreservingQueueCapacity:(id)a0 block:(id /* block */)a1;
- (BOOL)dispatchGroupWait:(id)a0 error:(id *)a1;
- (void)dispatchReportBlockCompletion;
- (void)dispatchSyncByPreservingQueueCapacity:(id /* block */)a0;
- (id)initWithDispatchQueueLabel:(id)a0 maximumTasksCount:(long long)a1;

@end
