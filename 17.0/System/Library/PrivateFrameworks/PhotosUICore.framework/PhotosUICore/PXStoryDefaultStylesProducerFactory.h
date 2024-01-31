@interface PXStoryDefaultStylesProducerFactory : NSObject <PXStoryStylesProducerFactory>

- (id)initialStyleProducerForAssetCollection:(id)a0;
- (id)initialStyleProducerForPersistableRecipe:(id)a0 songResource:(id)a1 autoEditDecisionList:(id)a2;
- (id)stylesProducerForAutoEditDecisionLists:(id)a0;

@end
