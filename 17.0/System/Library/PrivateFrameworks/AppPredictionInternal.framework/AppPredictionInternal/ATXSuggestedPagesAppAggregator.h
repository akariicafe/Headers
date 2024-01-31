@class NSArray, ATXSuggestedPagesTunableConstants;

@interface ATXSuggestedPagesAppAggregator : NSObject {
    NSArray *_sources;
    ATXSuggestedPagesTunableConstants *_suggestedPagesTunableConstants;
}

- (id)provideAppsForSuggestedPageType:(long long)a0 candidateApps:(id)a1 environment:(id)a2;
- (id)init;
- (void)_validateApps:(id)a0 withAppLaunchCounts:(id)a1;
- (long long)_sortApp1:(id)a0 app2:(id)a1 appLaunchCounts:(id)a2;
- (void).cxx_destruct;
- (id)initWithSources:(id)a0;
- (id)_dockedApps;
- (id)_sortedApps:(id)a0 sortedFirstPageApps:(id)a1 appLaunchCounts:(id)a2;
- (void)_validateApps:(id)a0 pageType:(long long)a1;
- (id)_sortedAppsOnFirstHomeScreenPage;

@end
