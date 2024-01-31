@interface CACVoiceOverShortDescriptionGenerator : NSObject

+ (id)sharedInstance;

- (void)_addToItemShortDescriptionPairs:(id)a0 foritems:(id)a1 keyGenerationBlocks:(id)a2 shortDescriptionGenerationBlocks:(id)a3 lastResortShortDescriptionGenerationBlock:(id /* block */)a4;
- (id)_items:(id)a0 byKeyGeneratedUsingBlock:(id /* block */)a1;
- (id)_lowerPitchForString:(id)a0;
- (id)shortDescriptionsForItems:(id)a0 style:(long long)a1;

@end
