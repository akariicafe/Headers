@class NSString, _HKSPOrderPreservingScheduler;

@interface _HKSPImmediateScheduler : NSObject <HKSPScheduler>

@property (readonly, nonatomic) _HKSPOrderPreservingScheduler *backingScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)suspend;
- (id)performCancelableBlock:(id /* block */)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)resume;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;

@end
