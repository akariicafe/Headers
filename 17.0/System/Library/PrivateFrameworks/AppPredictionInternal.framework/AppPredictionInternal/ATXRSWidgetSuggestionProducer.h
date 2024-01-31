@class ATXRSFilter, _PASSimpleCoalescingTimer, ATXClientModelSuggestionReceiver, LNMetadataProvider, NSObject, ATXRSRelevanceMonitor, ATXWidgetSuggestionAbuseGuard, _ATXDuetHelper, ATXWidgetDescriptorCache, NSString, ATXInformationFeatureWeights, ATXInformationFeaturizer, ATXInfoToBlendingConfidenceMapper, ATXInformationDescendingStartDateRanker;
@protocol OS_dispatch_queue;

@interface ATXRSWidgetSuggestionProducer : NSObject <ATXRSRelevanceMonitorDelegate> {
    _ATXDuetHelper *_duetHelper;
    ATXWidgetDescriptorCache *_descriptorCache;
    ATXRSRelevanceMonitor *_relevanceMonitor;
    ATXRSFilter *_filter;
    ATXWidgetSuggestionAbuseGuard *_abuseGuard;
    ATXInformationFeaturizer *_featurizer;
    ATXInformationFeatureWeights *_featureWeights;
    ATXInformationDescendingStartDateRanker *_ranker;
    ATXInfoToBlendingConfidenceMapper *_confidenceMapper;
    ATXClientModelSuggestionReceiver *_suggestionReceiver;
    LNMetadataProvider *_metadataProvider;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedRefreshRelevantShortcutsOperation;
    int _relevantShortcutRefreshToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)replacementContainerBundleIdForDonationBundleId:(id)a0;
+ (id)_clientModelIdentifier;

- (id)init;
- (void)_refreshRelevantShortcuts;
- (id)_proactiveSuggestionsFromScoredInfoSuggestions:(id)a0;
- (void)_coalescedRefreshRelevantShortcuts:(id)a0;
- (id)_infoSuggestionFromCandidate:(id)a0 suggestionIdentifier:(id)a1;
- (id)initWithDuetHelper:(id)a0 descriptorCache:(id)a1 relevanceMonitor:(id)a2 filter:(id)a3 abuseGuard:(id)a4 featurizer:(id)a5 featureWeights:(id)a6 ranker:(id)a7 confidenceMapper:(id)a8 suggestionReceiver:(id)a9 metadataProvider:(id)a10;
- (BOOL)_areInfoSuggestions:(id)a0 equalToProactiveSuggestions:(id)a1;
- (void)_pushSuggestionsToBlendingIfNecessary:(id)a0;
- (void).cxx_destruct;
- (id)_candidatesFromBundleIdToRelevantIntentsDict:(id)a0;
- (void)relevanceMonitorDidUpdateCurrentlyRelevantCandidates:(id)a0 relevantContexts:(id)a1;
- (id)_candidatesFromRelevantShortcutsFromStartDate:(id)a0;

@end
