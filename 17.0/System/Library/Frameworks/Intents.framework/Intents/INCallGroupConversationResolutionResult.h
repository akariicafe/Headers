@interface INCallGroupConversationResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithCallGroupConversationToConfirm:(id)a0;
+ (id)disambiguationWithCallGroupConversationsToDisambiguate:(id)a0;
+ (id)successWithResolvedCallGroupConversation:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
