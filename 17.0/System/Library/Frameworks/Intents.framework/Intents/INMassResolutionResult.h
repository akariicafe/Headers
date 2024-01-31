@interface INMassResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithMassToConfirm:(id)a0;
+ (id)disambiguationWithMassToDisambiguate:(id)a0;
+ (id)successWithResolvedMass:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
