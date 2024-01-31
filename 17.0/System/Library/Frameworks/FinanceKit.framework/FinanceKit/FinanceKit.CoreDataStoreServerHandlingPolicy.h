@interface FinanceKit.CoreDataStoreServerHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy

- (id)init;
- (id)allowableClassesForClientWithContext:(id)a0;
- (BOOL)shouldAcceptConnectionsFromClientWithContext:(id)a0;

@end
