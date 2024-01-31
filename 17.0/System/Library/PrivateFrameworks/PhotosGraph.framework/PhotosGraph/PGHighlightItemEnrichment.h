@class PGNeighborScoreComputer;
@protocol PGHighlightItemEnrichmentRule, PGHighlightItemListModelWriter;

@interface PGHighlightItemEnrichment : NSObject

@property (readonly, nonatomic) id<PGHighlightItemListModelWriter> modelWriter;
@property (retain, nonatomic) PGNeighborScoreComputer *neighborScoreComputer;
@property (readonly, nonatomic) id<PGHighlightItemEnrichmentRule> rule;

- (void).cxx_destruct;
- (void)_contextualKeyAssetForYearHighlightItemList:(id)a0 sharingFilter:(unsigned short)a1 curationContext:(id)a2 contextualOptions:(id)a3 options:(id)a4 availableContextualRules:(id)a5 progressBlock:(id /* block */)a6;
- (void)contextualKeyAssetForYearHighlightItemLists:(id)a0 withManager:(id)a1 curationContext:(id)a2 options:(id)a3 progressBlock:(id /* block */)a4;
- (void)enrichHighlightItemLists:(id)a0 progressBlock:(id /* block */)a1;
- (id)initWithRule:(id)a0 modelWriter:(id)a1;
- (void)updateVisibilityStateForHighlightItemLists:(id)a0 withManager:(id)a1 progressBlock:(id /* block */)a2;

@end
