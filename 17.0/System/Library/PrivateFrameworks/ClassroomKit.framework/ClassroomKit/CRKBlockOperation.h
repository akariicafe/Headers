@interface CRKBlockOperation : CATOperation

@property (readonly, nonatomic) id /* block */ operationBlock;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithOperationBlock:(id /* block */)a0;

@end
