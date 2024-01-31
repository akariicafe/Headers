@interface CRMockAsyncCard : CRBasicCard

- (BOOL)asynchronous;
- (void)loadCardWithCompletion:(id /* block */)a0;

@end
