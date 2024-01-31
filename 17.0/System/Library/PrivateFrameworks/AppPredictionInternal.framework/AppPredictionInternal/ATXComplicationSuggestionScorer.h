@class ATXComplicationAppBundleIdsScorer, ATXComplicationSuggestionHeuristics;

@interface ATXComplicationSuggestionScorer : NSObject {
    ATXComplicationAppBundleIdsScorer *_bundleIdsScorer;
    ATXComplicationSuggestionHeuristics *_heuristics;
}

- (id)init;
- (id)complicationDescriptorsForInlineSetGivenComplicationDescriptors:(id)a0;
- (id)complicationDescriptorsForModularSetGivenComplicationDescriptors:(id)a0 widgetDescriptorsAdditionalData:(id)a1;
- (id)_appBundleIdsForComplicationDescriptors:(id)a0;
- (id)_decaySubsequentScoresFromSameBundleId:(id)a0 decayFactor:(double)a1;
- (id)_scoredComplicationsForInlineSetGivenDescriptors:(id)a0;
- (BOOL)_isNewlyInstalledWidget:(id)a0 additionalData:(id)a1;
- (void).cxx_destruct;
- (id)modelDescription;
- (BOOL)_modularSetIsSuggestibleGivenAppScoreDictionary:(id)a0;
- (id)scoredComplicationDescriptorsForModularSetGivenComplicationDescriptors:(id)a0 widgetDescriptorsAdditionalData:(id)a1 checkEligibility:(BOOL)a2;
- (id)inputDescriptionForSignal:(id)a0 complicationDescriptors:(id)a1;
- (id)_scoredComplicationsForModularSetGivenDescriptors:(id)a0 appBundleIdScores:(id)a1 heuristicScores:(id)a2 widgetDescriptorsAdditionalData:(id)a3;
- (id)scoredComplicationDescriptorsForInlineSetGivenComplicationDescriptors:(id)a0;

@end
