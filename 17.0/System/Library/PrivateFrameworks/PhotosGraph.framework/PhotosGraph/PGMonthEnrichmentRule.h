@class NSString, PGGraphMomentNodeCollection, NSObject;
@protocol PGHighlightItemModelReader, OS_os_log;

@interface PGMonthEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule> {
    PGGraphMomentNodeCollection *_momentNodesAtWork;
}

@property (readonly, nonatomic) id<PGHighlightItemModelReader> modelReader;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_momentNodesAtWorkWithGraph:(id)a0;
- (id)bestItemsFromSortedItemsByWeekOfMonth:(id)a0 previouslySelectedItemsCountByWeek:(id)a1 maximumNumberOfItems:(unsigned long long)a2 sortDescriptors:(id)a3;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)a0 sharingFilter:(unsigned short)a1 withGraph:(id)a2 neighborScoreComputer:(id)a3 usingBlock:(id /* block */)a4;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)a0 sharingFilter:(unsigned short)a1 withGraph:(id)a2 neighborScoreComputer:(id)a3 usingBlock:(id /* block */)a4 maximumNumberOfVisibleItems:(unsigned long long)a5 maximumNumberOfVisibleRegularItems:(unsigned long long)a6;
- (id)fallbackKeyAssetWithHighlightItemList:(id)a0 sharingFilter:(unsigned short)a1;
- (id)initWithModelReader:(id)a0 loggingConnection:(id)a1;
- (id)keyAssetForHighlightItemList:(id)a0 sharingFilter:(unsigned short)a1;
- (double)promotionScoreForHighlightItemList:(id)a0;
- (id)sortedItemsByWeekOfMonthFromItems:(id)a0 sortDescriptors:(id)a1;

@end
