@class NSArray, UsageFeed, AnalyticsWorkspace;

@interface PUIReportAppListController : PSListController

@property (retain, nonatomic) NSArray *cachedSpecifiers;
@property (retain, nonatomic) UsageFeed *feed;
@property (retain, nonatomic) AnalyticsWorkspace *workspace;
@property (nonatomic) BOOL alphabeticalSort;

+ (BOOL)appSpecifiersWithLimit:(unsigned long long)a0 completion:(id /* block */)a1;

- (BOOL)shouldReloadSpecifiersOnResume;
- (id)init;
- (void)dealloc;
- (id)specifiers;
- (void).cxx_destruct;
- (void)sortByWasTapped;
- (void)dataDidChange;

@end
