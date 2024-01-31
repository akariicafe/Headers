@class _ATXAppLaunchHistogramManager;

@interface ATXRSFilter : NSObject {
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
}

- (id)init;
- (id)initWithAppLaunchHistogramManager:(id)a0;
- (id)_candidatesByUsingAppLaunchHistogramsToFilterCandidates:(id)a0;
- (id)filterCandidatesBySuggestionRequirements:(id)a0;
- (void).cxx_destruct;

@end
