@interface WFInterchangeActionProvider : WFActionProvider

- (void)deleteCache;
- (id)actionWithInterchangeAction:(id)a0 serializedParameters:(id)a1;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)a0 forceLocalActionsOnly:(BOOL)a1;
- (void)fetchRemoteConfiguration:(id /* block */)a0;

@end
