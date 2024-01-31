@class NSMutableDictionary, NSString, NSMutableArray, SNTestRun;
@protocol SNTestCase;

@interface SNTestStore : NSObject <SNTestRunFactory>

@property (retain, nonatomic) id<SNTestCase> extendedLaunchTest;
@property (readonly, nonatomic) NSMutableArray *testSuites;
@property (readonly, nonatomic) NSMutableDictionary *testCases;
@property (readonly, nonatomic) SNTestRun *extendedLaunchTestRun;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addTestSuite:(id)a0;
- (void).cxx_destruct;
- (void)addTestCase:(id)a0;
- (id)testRunForTestName:(id)a0;

@end
