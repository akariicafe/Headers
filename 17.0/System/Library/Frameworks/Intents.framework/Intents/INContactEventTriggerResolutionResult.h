@interface INContactEventTriggerResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithContactEventTriggerToConfirm:(id)a0;
+ (id)disambiguationWithContactEventTriggersToDisambiguate:(id)a0;
+ (id)successWithResolvedContactEventTrigger:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
