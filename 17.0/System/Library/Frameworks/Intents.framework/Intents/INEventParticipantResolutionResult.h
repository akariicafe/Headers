@interface INEventParticipantResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithEventParticipantToConfirm:(id)a0;
+ (id)disambiguationWithEventParticipantsToDisambiguate:(id)a0;
+ (id)successWithResolvedEventParticipant:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
