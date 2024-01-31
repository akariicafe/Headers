@interface INMediaItemResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithMediaItemToConfirm:(id)a0;
+ (id)disambiguationWithMediaItemsToDisambiguate:(id)a0;
+ (id)successWithResolvedMediaItem:(id)a0;
+ (id)successesWithResolvedMediaItems:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
