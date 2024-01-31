@class NSObject;
@protocol OS_dispatch_queue;

@interface TROperationQueue : NSOperationQueue

@property (getter=isCancelled) BOOL cancelled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cancellationQ;

- (void)addOperation:(id)a0;
- (void)addOperations:(id)a0 waitUntilFinished:(BOOL)a1;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)addOperationWithBlock:(id /* block */)a0;

@end
