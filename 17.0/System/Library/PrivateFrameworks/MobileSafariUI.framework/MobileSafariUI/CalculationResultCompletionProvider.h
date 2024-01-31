@class WBSCalculationResultProvider;

@interface CalculationResultCompletionProvider : CompletionProvider {
    WBSCalculationResultProvider *_calcuationResultProvider;
}

- (id)init;
- (void).cxx_destruct;
- (void)setQueryToComplete:(id)a0;

@end
