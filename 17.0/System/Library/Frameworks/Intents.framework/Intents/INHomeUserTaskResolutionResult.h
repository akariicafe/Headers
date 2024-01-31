@interface INHomeUserTaskResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithHomeUserTaskToConfirm:(id)a0;
+ (id)disambiguationWithHomeUserTasksToDisambiguate:(id)a0;
+ (id)successWithResolvedHomeUserTask:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
