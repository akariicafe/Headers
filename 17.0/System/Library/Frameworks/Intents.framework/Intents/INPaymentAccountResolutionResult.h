@interface INPaymentAccountResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithPaymentAccountToConfirm:(id)a0;
+ (id)disambiguationWithPaymentAccountsToDisambiguate:(id)a0;
+ (id)successWithResolvedPaymentAccount:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
