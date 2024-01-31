@class NSOperationQueue, NSOperation;

@interface VSTimeoutOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (readonly, nonatomic) NSOperation *operation;
@property (readonly, nonatomic) double timeout;

- (id)init;
- (void)executionDidBegin;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithOperation:(id)a0 timeout:(double)a1;

@end
