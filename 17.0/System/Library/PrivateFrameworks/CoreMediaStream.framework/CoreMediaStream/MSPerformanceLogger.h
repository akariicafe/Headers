@interface MSPerformanceLogger : MSASModelBase

+ (id)sharedLogger;
+ (void)nukeCompletionBlock:(id /* block */)a0;

- (id)init;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)a0 currentVersion:(int)a1;
- (void)_logSqliteErrorLine:(int)a0;
- (void)dbQueueDiscardOperation:(id)a0 itemGUID:(id)a1;
- (void)discardOperation:(id)a0 itemGUID:(id)a1;
- (void)startOperation:(id)a0 itemGUID:(id)a1;
- (void)stopOperation:(id)a0 itemGUID:(id)a1;
- (void)summarizeOperation:(id)a0 itemGUID:(id)a1 formatBlock:(id /* block */)a2;

@end
