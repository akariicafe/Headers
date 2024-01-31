@interface CATBlockCancellable : NSObject <CATCancelable>

@property (copy, nonatomic) id /* block */ cancellationBlock;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCancellationBlock:(id /* block */)a0;
- (id)initWithCancellables:(id)a0;

@end
