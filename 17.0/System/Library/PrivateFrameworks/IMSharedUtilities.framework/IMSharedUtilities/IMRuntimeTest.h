@class IMRuntimeTestRun;

@interface IMRuntimeTest : NSObject

@property (retain) IMRuntimeTestRun *testRun;
@property (copy) id /* block */ completion;

+ (id)testName;
+ (id)logHandle;
+ (void)testLog:(id)a0;

- (id)testName;
- (id)logHandle;
- (void)setUp;
- (void)tearDown;
- (void)startTest;
- (void).cxx_destruct;
- (void)dispatchAfter:(double)a0 block:(id /* block */)a1;
- (void)finishTest;
- (void)finishTestAfterInterval:(double)a0;
- (void)runTest:(id /* block */)a0;
- (void)testLog:(id)a0;
- (Class)testRunClass;

@end
