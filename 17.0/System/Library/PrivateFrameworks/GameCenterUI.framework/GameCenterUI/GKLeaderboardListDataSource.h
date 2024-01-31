@class GKLeaderboardSet, NSTimer, UICollectionView, NSDictionary, NSMutableArray;

@interface GKLeaderboardListDataSource : GKLeaderboardCollectionDataSource

@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;
@property (retain, nonatomic) NSMutableArray *leaderboards;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSDictionary *assetNames;

- (void)setupTimer;
- (long long)itemCount;
- (void)dealloc;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)title;
- (void)prepareCell:(id)a0 forItemAtIndexPath:(id)a1;
- (void)removeLeaderboardsWithoutImages;
- (void)handleSelectionInCollectionView:(id)a0 forItemAtIndexPath:(id)a1;
- (id)initWithGameRecord:(id)a0 leaderboardSet:(id)a1;
- (id)itemForIndexPath:(id)a0;
- (void)setupCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })standardCellSizeForCollectionView:(id)a0;
- (void)updateHighlightsInSectionHeader:(id)a0;

@end
