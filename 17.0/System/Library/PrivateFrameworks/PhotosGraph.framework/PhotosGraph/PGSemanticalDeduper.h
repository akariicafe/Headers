@interface PGSemanticalDeduper : PGDeduper

@property (nonatomic) BOOL usesAdaptiveSimilarStacking;

- (id)deduplicatedItemsWithItems:(id)a0 debugInfo:(id)a1 progressBlock:(id /* block */)a2;
- (id)itemsNeedingSceneprintInTimeClusters:(id)a0;
- (id)sceneprintByItemIdentifierWithItems:(id)a0;

@end
