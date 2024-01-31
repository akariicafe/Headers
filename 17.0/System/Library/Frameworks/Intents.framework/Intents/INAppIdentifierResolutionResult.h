@interface INAppIdentifierResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithAppIdentifierToConfirm:(id)a0;
+ (id)disambiguationWithAppIdentifiersToDisambiguate:(id)a0;
+ (id)successWithResolvedAppIdentifier:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
