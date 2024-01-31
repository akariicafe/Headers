@interface OITSUAssertionHandler : NSObject

+ (void)simulateCrashWithMessage:(id)a0;
+ (id)performBlockIgnoringAssertions:(id /* block */)a0;
+ (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 isFatal:(BOOL)a3 description:(const char *)a4;
+ (void)logBacktraceThrottled;
+ (int)_atomicIncrementAssertCount;
+ (void)logBacktrace;
+ (void)logBacktraceWithCallStackSymbols:(id)a0;
+ (id)p_performBlockIgnoringAssertions:(id /* block */)a0 onlyFatal:(BOOL)a1;
+ (id)performBlockIgnoringFatalAssertions:(id /* block */)a0;

@end
