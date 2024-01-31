@interface INNoteResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithNoteToConfirm:(id)a0;
+ (id)disambiguationWithNotesToDisambiguate:(id)a0;
+ (id)successWithResolvedNote:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
