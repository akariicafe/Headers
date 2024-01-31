@interface LPKPerformanceTestIntermediary : NSObject

+ (long long)_disableKtrace;
+ (long long)_dumpKtraceResult;
+ (long long)_enableKtrace;
+ (id)_generateSharedipadTraceHelperCommand;
+ (void)_removeStoredValues;
+ (BOOL)_startUserSwitchTestForType:(unsigned long long)a0 count:(long long)a1 username:(id)a2 password:(id)a3 isPerformanceTest:(BOOL)a4;
+ (void)disableRestrictionlessLoginWithCompletionHandler:(id /* block */)a0;
+ (void)enableRestrictionlessLoginWithCompletionHandler:(id /* block */)a0;
+ (id)endPerformanceTestAndDumpResults;
+ (BOOL)endUserSwitchTest;
+ (BOOL)startPerformanceTestForType:(unsigned long long)a0 count:(long long)a1 username:(id)a2 password:(id)a3;
+ (BOOL)startUserSwitchTestForType:(unsigned long long)a0 count:(long long)a1 username:(id)a2 password:(id)a3;

@end
