@interface HMMTROperationWithPriority : NSOperation

@property (readonly, nonatomic) id /* block */ operationBlock;

- (void)main;
- (void).cxx_destruct;
- (id)initWithQueuePriority:(long long)a0 block:(id /* block */)a1;

@end
