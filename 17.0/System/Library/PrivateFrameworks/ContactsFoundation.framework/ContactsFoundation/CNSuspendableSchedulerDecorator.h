@class CNQueue, NSString, NSConditionLock;
@protocol CNScheduler;

@interface CNSuspendableSchedulerDecorator : NSObject <CNScheduler>

@property (readonly, nonatomic) id<CNScheduler> scheduler;
@property (readonly, nonatomic) CNQueue *queue;
@property (readonly, nonatomic) NSConditionLock *lock;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suspendedSchedulerWithScheduler:(id)a0;
+ (id)resumedSchedulerWithScheduler:(id)a0;

- (id)initWithScheduler:(id)a0;
- (void)suspend;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)performCancelableBlock:(id /* block */)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (void)_performFirstQueuedTask;
- (void)resume;
- (void).cxx_destruct;
- (id)_nts_enqueueCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (void)performBlock:(id /* block */)a0;

@end
