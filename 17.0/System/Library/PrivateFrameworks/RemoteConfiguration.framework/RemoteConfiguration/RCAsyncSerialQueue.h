@class NSOperationQueue;

@interface RCAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (nonatomic) BOOL suspended;

- (id)init;
- (void)cancelAllBlocks;
- (void)enqueueBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enqueueBlockForMainThread:(id /* block */)a0;
- (id)initWithQualityOfService:(long long)a0;
- (void)withQualityOfService:(long long)a0 enqueueBlockForMainThread:(id /* block */)a1;
- (void)enqueueOperation:(id)a0;

@end
