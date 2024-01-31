@class NSURL, BrowserController, NSString;

@interface MemoryAndIOTestRunner : NSObject {
    BrowserController *_browserController;
    NSString *_testName;
    id /* block */ _completionHandler;
    unsigned long long _tabsLoadedCount;
    unsigned long long _liveTabs;
    unsigned long long _type;
    int writesAtStart;
    unsigned long long _totalTabsToLoad;
}

@property (readonly, nonatomic) NSURL *testPageURL;

- (void).cxx_destruct;
- (unsigned long long)_collectCurrentLiveTabs;
- (void)_collectIOUsageInfo:(id)a0;
- (void)_collectMemoryUsageInfo:(id)a0;
- (void)_collectTestResults;
- (void)_openNewTabAndLoadTestURL;
- (id)initWithTestName:(id)a0 browserController:(id)a1 type:(unsigned long long)a2;
- (void)runTestWithCompletion:(id /* block */)a0;

@end
