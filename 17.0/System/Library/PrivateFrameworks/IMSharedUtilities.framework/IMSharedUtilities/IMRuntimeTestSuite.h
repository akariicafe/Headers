@class NSTimer, NSMutableArray, IMRuntimeTest;

@interface IMRuntimeTestSuite : IMRuntimeTest

@property (retain) NSMutableArray *tests;
@property (retain) NSMutableArray *runningTests;
@property (retain) IMRuntimeTest *currentTest;
@property (weak) NSTimer *timer;
@property double testSuiteStartDelay;
@property double testStartDelay;

+ (void)runTestsIfNeededWithRepeatCount:(long long)a0;
+ (void)runTestsIfNeededWithRepeatCount:(long long)a0 withCount:(long long)a1;

- (void)_cancelTimer;
- (id)init;
- (void)startTest;
- (void).cxx_destruct;
- (void)_startNextTest;
- (void)_timerExpired:(id)a0;
- (void)addTest:(id)a0;
- (void)currentTestDidFinish;
- (void)removeTest:(id)a0;

@end
