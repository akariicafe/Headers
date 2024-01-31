@interface INSpeedResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithSpeedToConfirm:(id)a0;
+ (id)disambiguationWithSpeedToDisambiguate:(id)a0;
+ (id)successWithResolvedSpeed:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
