@class SBKTransactionController;

@interface SBKSimpleTransactionRequestHandler : SBKRequestHandler

@property (readonly, nonatomic) SBKTransactionController *transactionController;
@property (readonly, nonatomic) BOOL canceled;

- (id)initWithBagContext:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)cancelWithError:(id)a0;
- (void)timeout;
- (void)scheduleTransaction:(id)a0 finishedBlock:(id /* block */)a1;

@end
