@interface INPaymentAmountResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithPaymentAmountToConfirm:(id)a0;
+ (id)disambiguationWithPaymentAmountsToDisambiguate:(id)a0;
+ (id)successWithResolvedPaymentAmount:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
