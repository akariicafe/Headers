@class ATXSuggestionDeduplicator, ATXInformationStore;

@interface ATXDegenerateStackAnalyzer : NSObject {
    ATXInformationStore *_informationStore;
    ATXSuggestionDeduplicator *_deduplicator;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)_hasWidgetHadTimelineDonations:(id)a0 startDate:(id)a1;
- (BOOL)_isWidgetEligibleForHeuristicFallback:(id)a0;
- (id)_simulatedInfoSuggestionForWidget:(id)a0;
- (BOOL)_wouldBlendingDeduplicateWidget:(id)a0 inStack:(id)a1 againstOtherWidgetsOnPage:(id)a2;
- (BOOL)areAllSmartStacksPossiblyDegenerateInPages:(id)a0 usingTimelineEntriesSinceDate:(id)a1;
- (id)initWithInformationStore:(id)a0;
- (BOOL)isSmartStackPossiblyDegenerate:(id)a0 onPage:(id)a1 usingTimelineEntriesSinceDate:(id)a2;

@end
