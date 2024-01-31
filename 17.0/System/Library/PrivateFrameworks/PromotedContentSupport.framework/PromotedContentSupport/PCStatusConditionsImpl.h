@interface PCStatusConditionsImpl : NSObject <APStatusConditions_XPC>

- (id)_setupXPCConnection;
- (void)clearStatusCondition:(id)a0 completionHandler:(id /* block */)a1;
- (void)isStatusConditionRegistered:(id)a0 bundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setStatusCondition:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isConditionRateLimited:(id)a0 onOperation:(long long)a1;
- (BOOL)operationWithCondition:(id)a0 forType:(long long)a1;
- (void)cleanupExpiredConditionsInBuffer;

@end
