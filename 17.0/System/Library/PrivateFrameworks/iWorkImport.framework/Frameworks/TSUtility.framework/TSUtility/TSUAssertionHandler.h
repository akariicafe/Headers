@interface TSUAssertionHandler : NSObject

@property (class, readonly, nonatomic) BOOL isQAFatalAssertionsEnabled;
@property (class, readonly, nonatomic) BOOL shouldLogAssertionBacktrace;

+ (void)initialize;
+ (void)simulateCrashWithMessage:(id)a0;
+ (void)setDelegate:(id)a0;
+ (id)performBlockIgnoringAssertions:(id /* block */)a0;
+ (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 isFatal:(BOOL)a3 description:(const char *)a4;
+ (void)logBacktraceThrottled;
+ (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 isFatal:(BOOL)a3 format:(id)a4 args:(char *)a5;
+ (void)logFullBacktrace;
+ (id)packedBacktraceStringWithReturnAddresses:(id)a0;
+ (int)_atomicIncrementAssertCount;
+ (id)p_performBlockIgnoringAssertions:(id /* block */)a0 onlyFatal:(BOOL)a1;
+ (id)performBlockIgnoringFatalAssertions:(id /* block */)a0;
+ (void)_logBacktraceWithCallStackSymbols:(id)a0;
+ (id)packedBacktraceString;
+ (id)performBlockIgnoringAssertionsAndReturnList:(id /* block */)a0;
+ (id)performBlockIgnoringQAFatalAssertions:(id /* block */)a0;

@end
