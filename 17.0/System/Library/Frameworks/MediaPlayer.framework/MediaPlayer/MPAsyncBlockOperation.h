@interface MPAsyncBlockOperation : MPAsyncOperation

@property (readonly, copy, nonatomic) id /* block */ startHandler;

- (id)initWithStartHandler:(id /* block */)a0;
- (void)execute;
- (void).cxx_destruct;

@end
