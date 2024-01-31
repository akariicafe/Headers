@interface CoreKnowledge.CKUserDefaultsWriteBatch : CoreKnowledge.CKAbstractWriteBatch <CKKnowledgeStoreWriteBatch>

- (void)writeWithCompletionHandler:(id /* block */)a0;
- (BOOL)writeAndReturnError:(id *)a0;

@end
