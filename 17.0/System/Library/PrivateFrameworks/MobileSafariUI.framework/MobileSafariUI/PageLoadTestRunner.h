@class NSOutputStream, NSString, NSMutableArray, BrowserController;
@protocol PageLoadTestRunnerDelegate;

@interface PageLoadTestRunner : NSObject {
    BOOL _started;
    BOOL _measureTime;
    NSMutableArray *_pagesNeedingMemoryWarningSent;
    NSMutableArray *_pageLoadArray;
    unsigned int _version;
    double _allSubresourcesFinishedLoadingDelay;
    double _savedDefaultTimeoutInterval;
    unsigned int _currentTestIteration;
    unsigned int _testIterations;
    double _initialDelay;
    NSOutputStream *_logStream;
}

@property (copy, nonatomic) NSString *testName;
@property (retain, nonatomic) NSString *logFile;
@property (retain, nonatomic) NSString *outputFilename;
@property (retain, nonatomic) NSString *suiteName;
@property (nonatomic) unsigned long long skipCount;
@property (nonatomic) BOOL disableProgressBar;
@property (nonatomic) BOOL failFast;
@property (nonatomic) BOOL resetsZoomBetweenPages;
@property (nonatomic) double pageTimeout;
@property (nonatomic) double pageActionInterval;
@property (nonatomic) double pageRestInterval;
@property (nonatomic) int cacheClearDirective;
@property (nonatomic) BOOL collectHeapStatistics;
@property (nonatomic) BOOL checkForWorldLeaks;
@property (weak, nonatomic) id<PageLoadTestRunnerDelegate> delegate;
@property (nonatomic) unsigned long long tabCount;
@property (nonatomic) BOOL loadURLInNewTab;
@property (readonly, nonatomic) BrowserController *browserController;

+ (void)addLeakToArray:(id)a0 count:(int)a1 name:(id)a2;
+ (BOOL)closingBrowserWindowsForWorldLeakTest;
+ (struct { int x0; int x1; })heapStatistics;
+ (id)worldLeaksString;

- (void)dealloc;
- (void)finish;
- (void)start;
- (void).cxx_destruct;
- (void)log:(id)a0;
- (void)setTestOptions:(id)a0;
- (void)_checkRedirect:(id)a0;
- (void)_closeLogStream;
- (void)_handleActionTimer:(id)a0;
- (id)_pageLoadForTabDocument:(id)a0;
- (void)_pageRestExpired:(id)a0;
- (void)_pageTimeoutExpired:(id)a0;
- (void)_startNextPageNow;
- (void)_updatePageLoad:(id)a0 stats:(id)a1;
- (void)addPageURL:(id)a0 withProcessSwap:(BOOL)a1;
- (BOOL)checkForWorldLeaksNow;
- (void)checkForWorldLeaksSoon;
- (void)clearCacheWithURL:(id)a0;
- (void)closeBrowserWindows;
- (void)closeBrowserWindowsAndFinishCheckingForWorldLeaks;
- (BOOL)finishCheckingForWorldLeaks;
- (void)finishPage:(id)a0 stats:(id)a1 error:(id)a2;
- (void)finishedTestPage:(id)a0;
- (void)finishedTestRunner;
- (void)finishedTestRunnerIteration;
- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (BOOL)loadTestSuiteFile:(id)a0;
- (BOOL)performActionForPage:(id)a0;
- (void)removeURLsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setExistingProperty:(id)a0 to:(id)a1;
- (void)startNextPage;
- (BOOL)startPageAction:(id)a0;
- (void)startingTestPage:(id)a0;
- (void)startingTestRunner;

@end
