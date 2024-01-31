@interface AFAppContextAggregator : NSObject

- (void)aggregateContextForAppWithBundleIdentifier:(id)a0 contextProvider:(id)a1 completionHandler:(id /* block */)a2;
- (void)aggregateContextForAppWithBundleIdentifier:(id)a0 contextProvider:(id)a1 deliveryHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)aggregateContextWithRawOutputForAppWithBundleIdentifier:(id)a0 contextProvider:(id)a1 deliveryHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
