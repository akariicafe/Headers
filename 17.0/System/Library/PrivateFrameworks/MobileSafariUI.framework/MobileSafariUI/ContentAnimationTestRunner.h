@class NSMutableDictionary;

@interface ContentAnimationTestRunner : PurplePageLoadTestRunner {
    NSMutableDictionary *_outputData;
    double _testDuration;
}

- (void).cxx_destruct;
- (void)writeOutputData;
- (id)finalStatusForPage:(id)a0;
- (void)finishedTestPage:(id)a0;
- (void)finishedTestRunner;
- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (id)outputDataForPage:(id)a0;
- (BOOL)performActionForPage:(id)a0;
- (BOOL)startPageAction:(id)a0;

@end
