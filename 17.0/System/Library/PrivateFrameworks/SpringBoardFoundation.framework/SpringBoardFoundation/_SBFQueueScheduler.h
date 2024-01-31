@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _SBFQueueScheduler : NSObject <SBFScheduler> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (id)performCancelableBlock:(id /* block */)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)performBlock:(id /* block */)a0;

@end
