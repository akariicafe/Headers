@class NSOperationQueue;

@interface SCKAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (getter=isSuspended) BOOL suspended;

- (id)init;
- (void)enqueueBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)waitUntilEmpty;

@end
