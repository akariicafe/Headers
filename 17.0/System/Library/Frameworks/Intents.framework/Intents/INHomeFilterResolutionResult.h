@interface INHomeFilterResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithHomeFilterToConfirm:(id)a0;
+ (id)disambiguationWithHomeFiltersToDisambiguate:(id)a0;
+ (id)successWithResolvedHomeFilter:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
