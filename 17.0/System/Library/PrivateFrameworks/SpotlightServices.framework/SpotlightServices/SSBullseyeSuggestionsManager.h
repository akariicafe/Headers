@class SRResources, NSString, SSCoreMLInterface, NSDictionary, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface SSBullseyeSuggestionsManager : NSObject {
    NSDictionary *_defaultOptions;
    SSCoreMLInterface *_blendingModel;
}

@property (readonly, nonatomic) SRResources *resources;
@property (readonly, nonatomic) SSCoreMLInterface *blendingModel;
@property (readonly, nonatomic) NSString *blendingModelPath;
@property (readonly, nonatomic) NSDictionary *modelFeatureNames;
@property (readonly, nonatomic) BOOL enabledSuggestionsOverrides;
@property (readonly, nonatomic) BOOL enabledSuggestionsBlending;
@property (readonly, nonatomic) BOOL enabledFullSuggestionsBlending;
@property (readonly, nonatomic) BOOL enabledAboveFoldResults;
@property (readonly, nonatomic) BOOL ignoreMaxCount;
@property (readonly, nonatomic) NSNumber *serverSuggestionThreshold;
@property (readonly, nonatomic) NSNumber *localSuggestionThreshold;
@property (readonly, nonatomic) long long maxTotalSuggestionCount;
@property (readonly, nonatomic) long long maxTotalSuggestionCountForAboveFoldResults;
@property (readonly, nonatomic) long long maxServerSuggestionCount;
@property (readonly, nonatomic) long long maxLocalSuggestionCount;
@property (readonly, nonatomic) unsigned long long localDisplayPosition;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedSuggestionsManager;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)_filterSuggestionResultsWithQueryContext:(id)a0 filters:(id)a1 entityFilters:(id)a2 contactFilters:(id)a3 contactSuggestionResults:(id)a4 localSuggestionResults:(id)a5 serverSuggestionResults:(id)a6 options:(id)a7;
- (id)_getScoreForSuggestionResult:(id)a0 options:(id)a1;
- (id)_rankedSuggestionsResultsWithQueryContext:(id)a0 serverSuggestionResults:(id)a1 localSuggestionResults:(id)a2 options:(id)a3;
- (void)clearBlendingModel;
- (id)dawnburst_blendingByPolicyWithQueryContext:(id)a0 filters:(id)a1 entityFilters:(id)a2 contactFilters:(id)a3 userSuggestion:(id)a4 userWebSuggestion:(id)a5 actionSuggestionResults:(id)a6 contactSuggestionResults:(id)a7 serverSuggestionResults:(id)a8 localSuggestionResults:(id)a9 options:(id)a10;
- (id)dawnburst_blendingWithQueryContext:(id)a0 filters:(id)a1 entityFilters:(id)a2 contactFilters:(id)a3 userSuggestion:(id)a4 userWebSuggestion:(id)a5 shortcutSuggestionResults:(id)a6 actionSuggestionResults:(id)a7 contactSuggestionResults:(id)a8 serverSuggestionResults:(id)a9 localSuggestionResults:(id)a10 options:(id)a11;
- (void)loadBlendingModelWithPath:(id)a0 forceLoad:(BOOL)a1;
- (void)loadDefaultsWithOptions:(id)a0;
- (id)orderedSuggestionsWithQueryContext:(id)a0 filters:(id)a1 entityFilters:(id)a2 contactFilters:(id)a3 userSuggestion:(id)a4 userWebSuggestion:(id)a5 shortcutSuggestionResults:(id)a6 actionSuggestionResults:(id)a7 contactSuggestionResults:(id)a8 serverSuggestionResults:(id)a9 localSuggestionResults:(id)a10 options:(id)a11;
- (void)setBlendingModel:(id)a0;
- (id)suggestionKeyWithCompletion:(id)a0;
- (id)sydro_blendingByPolicyWithQueryContext:(id)a0 filters:(id)a1 entityFilters:(id)a2 contactFilters:(id)a3 userSuggestion:(id)a4 userWebSuggestion:(id)a5 shortcutSuggestionResults:(id)a6 actionSuggestionResults:(id)a7 contactSuggestionResults:(id)a8 serverSuggestionResults:(id)a9 localSuggestionResults:(id)a10 options:(id)a11;
- (void)updateDefaultsWithOptions:(id)a0;

@end
