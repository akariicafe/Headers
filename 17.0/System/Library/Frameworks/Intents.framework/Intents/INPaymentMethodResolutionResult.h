@interface INPaymentMethodResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithPaymentMethodToConfirm:(id)a0;
+ (id)disambiguationWithPaymentMethodsToDisambiguate:(id)a0;
+ (id)successWithResolvedPaymentMethod:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
