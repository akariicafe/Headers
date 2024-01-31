@interface MDMBlockOperation : CATOperation

@property (copy, nonatomic) id /* block */ block;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;

@end
