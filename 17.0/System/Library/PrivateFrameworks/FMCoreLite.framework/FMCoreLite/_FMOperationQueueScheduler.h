@class NSString, NSOperationQueue;

@interface _FMOperationQueueScheduler : NSObject <FMScheduler> {
    NSOperationQueue *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)performCancelableBlock:(id /* block */)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)initWithMaxConcurrentOperationCount:(long long)a0;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;

@end
