@class ATXContextHeuristics, ATXContextHeuristicsScheduler;

@interface ATXContextHeuristicsServer : NSObject <ATXContextHeuristicsDelegate> {
    ATXContextHeuristics *_heuristics;
    ATXContextHeuristicsScheduler *_sportsScheduler;
}

+ (id)sharedInstance;

- (id)init;
- (id)initWithHeuristics:(id)a0;
- (void)_updateBlendingLayerWithSuggestionsFromContextHeuristics:(id)a0;
- (void)contextHeuristics:(id)a0 didUpdateSpotlightRecents:(id)a1;
- (void)_updateBlendingLayerWithSuggestionsFromSpotlightRecents:(id)a0;
- (void).cxx_destruct;
- (id)_cachedContextsFromSuggestions:(id)a0;
- (id)_retrieveOldContextHeuristicsSuggestions;
- (void)_updateContextHeuristicsBiomeStreamWithNewSuggestions:(id)a0 oldSuggestions:(id)a1;
- (void)contextHeuristics:(id)a0 didUpdateSuggestions:(id)a1;
- (id)_contextHeuristicsClientModel;

@end
