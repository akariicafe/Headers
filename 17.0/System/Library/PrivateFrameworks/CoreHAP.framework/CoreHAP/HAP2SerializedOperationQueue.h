@class HAP2Lock, NSString, NSOperationQueue, NSOperation;

@interface HAP2SerializedOperationQueue : HAP2LoggingObject

@property (class, readonly, nonatomic) NSOperationQueue *commonOperationQueue;

@property (readonly, nonatomic) HAP2Lock *lock;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (weak, nonatomic) NSOperation *lastOperation;
@property (readonly, nonatomic) NSString *name;

- (void)addOperation:(id)a0;
- (id)init;
- (id)_swapLastOperation:(id)a0;
- (id)initWithName:(id)a0;
- (void)assertCurrentQueue;
- (void)addConcurrentBlock:(id /* block */)a0;
- (id)initWithName:(id)a0 operationQueue:(id)a1;
- (void)addBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addConcurrentOperation:(id)a0;

@end
