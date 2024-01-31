@class ATXComplicationSuggestionScorer, NSString, ATXPosterConfigurationCache, ATXComplicationSuggestionParameters, ATXComplicationSet, ATXComplicationSuggestionCache, ATXWidgetDescriptorCache;

@interface ATXComplicationSuggestionGenerator : NSObject <ATXFaceGalleryLayoutGeneratorComplicationProviding> {
    ATXWidgetDescriptorCache *_descriptorCache;
    ATXComplicationSuggestionCache *_complicationSuggestionCache;
    ATXComplicationSuggestionScorer *_complicationScorer;
    ATXComplicationSuggestionParameters *_parameters;
    ATXPosterConfigurationCache *_posterConfigurationCache;
}

@property (readonly, nonatomic) ATXComplicationSet *inlineSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)landscapeModularSetsWithWidgetDescriptorsAdditionalData:(id)a0;
- (id)_rectangularComplicationFromComplications:(id)a0;
- (id)init;
- (void)refreshComplicationCache;
- (id)_scoredModularComplicationDescriptorsWithWidgetDescriptorsAdditionalData:(id)a0;
- (BOOL)_complicationIsAlreadyAdded:(id)a0 alreadyAddedComplications:(id)a1;
- (id)inputDescriptionForComplicationSuggestionSignal:(id)a0;
- (id)_modularLayoutTypesGivenRecentsLayoutType:(long long)a0;
- (id)_inlineSetDescriptors_ShouldRefresh:(BOOL)a0;
- (id)_recentLandscapeComplicationsWithPresetDictionary:(id)a0;
- (id)_landscapeModularSetDescriptors_ShouldRefresh:(BOOL)a0 widgetDescriptorsAdditionalData:(id)a1;
- (id)_setWithDesiredLayout:(long long)a0 complicationDescriptors:(id)a1 unusedRecentsComplications:(id)a2 alreadyAddedComplications:(id)a3;
- (id)_complicationsFromFallbackSet:(id)a0 alreadyAddedDescriptors:(id)a1;
- (id)modularSetsWithWidgetDescriptorsAdditionalData:(id)a0;
- (id)descriptionForScoredSet:(id)a0;
- (id)scoredComplicationsDescription;
- (id)modularSetsWithDesiredLayouts:(id)a0 unusedRecentComplications:(id)a1 alreadyAddedComplications:(id)a2 widgetDescriptorsAdditionalData:(id)a3;
- (void).cxx_destruct;
- (BOOL)_layoutIsValidGivenComplications:(id)a0 allowedComplicationPersonalities:(id)a1;
- (id)landscapeModularSetsWithWidgetDescriptorsAdditionalData:(id)a0 presetPortraitComplications:(id)a1;
- (id)modelDescription;
- (id)_getComplicationsOfFamily:(long long)a0 descriptors:(id)a1 alreadyAddedDescriptors:(id)a2 presetComplications:(id)a3 limit:(unsigned long long)a4;
- (id)landscapeModularSetsDictsWithWidgetDescriptorsAdditionalData:(id)a0 portraitSets:(id)a1;
- (id)_presetLandscapeComplicationsFromPortraitSet:(id)a0;
- (id)_recentInlineComplications;
- (id)_modularFallbackSets;
- (id)_circularComplicationFromComplications:(id)a0;
- (id)_modularDescriptors_ShouldRefresh:(BOOL)a0 widgetDescriptorsAdditionalData:(id)a1;
- (id)_landscapeModularFallbackSets;
- (long long)_layoutTypeForSet:(id)a0;
- (id)_recentsComplications_unusedComplications:(id)a0;
- (id)_recentsSet_unusedComplications:(id)a0;
- (id)_scoredInlineComplicationDescriptors;

@end
