@class NSString, NSObject;
@protocol OS_dispatch_queue, NAScheduler;

@interface _HKSPQueueBackedScheduler : NSObject <HKSPQueueBackedScheduler>

@property (readonly, nonatomic) id<NAScheduler> scheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)suspend;
- (id)performCancelableBlock:(id /* block */)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)initWithScheduler:(id)a0 queue:(id)a1;
- (void)resume;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;

@end
