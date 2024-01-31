@class NSString;
@protocol CAMPerformanceTestHarnessDelegate;

@interface CAMPerformanceTestHarness : NSObject

@property (nonatomic, getter=isRunningTest) BOOL runningTest;
@property (readonly, copy, nonatomic) NSString *testName;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ startHandler;
@property (weak, nonatomic) id<CAMPerformanceTestHarnessDelegate> delegate;
@property (nonatomic) BOOL isSetupHarness;

- (void)stopTesting;
- (void).cxx_destruct;
- (void)startTesting;
- (void)failedTestWithReason:(id)a0;
- (id)initWithTestName:(id)a0;
- (void)startSubtestWithName:(id)a0;
- (void)startSubtestWithName:(id)a0 withMetrics:(id)a1;
- (void)stopSubtestWithName:(id)a0;

@end
