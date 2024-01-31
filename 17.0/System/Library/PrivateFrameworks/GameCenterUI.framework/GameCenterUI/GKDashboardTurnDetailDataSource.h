@class GKTurnBasedMatch;

@interface GKDashboardTurnDetailDataSource : GKCollectionDataSource

@property (retain, nonatomic) GKTurnBasedMatch *match;

- (long long)itemCount;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)initWithMatch:(id)a0;
- (id)itemForIndexPath:(id)a0;
- (double)preferredCollectionHeight;
- (id)sectionHeaderText;
- (void)setupCollectionView:(id)a0;

@end
