@interface FPDExtensionIndexer : FPDDomainIndexer

- (void)indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (void)dropIndexForDomainRemoval:(BOOL)a0 completion:(id /* block */)a1;

@end
