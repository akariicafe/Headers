@interface BRFetchQuotaOperation : BROperation

@property (copy) id /* block */ fetchQuotaCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
