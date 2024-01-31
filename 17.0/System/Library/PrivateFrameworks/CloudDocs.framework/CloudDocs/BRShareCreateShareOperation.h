@interface BRShareCreateShareOperation : BRShareOperation

@property (copy) id /* block */ shareCreateCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithItemID:(id)a0;

@end
