@class GKNoContentView, UICollectionView, NSDictionary, GKGameLayerCollectionDataSource;

@interface GKLeaderboardListViewController : GKLoadingViewController

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL showingLeaderboardSets;
@property (retain, nonatomic) GKNoContentView *noContentView;
@property (nonatomic) BOOL canSegueToScores;
@property (retain, nonatomic) GKGameLayerCollectionDataSource *dataSource;
@property (retain, nonatomic) NSDictionary *leaderboardSetAssetNames;
@property (retain, nonatomic) NSDictionary *leaderboardAssetNames;
@property (nonatomic) long long preferredLargeTitleDisplayMode;

- (void)clearSelection;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)isLoading;
- (void)updateLayout;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)contentScrollView;
- (BOOL)hasData;
- (void)viewWillDisappear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)title;
- (void)setHorizontalLayout:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)loadData;
- (void)setNeedsRefresh;
- (void)_gkRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)configureCloseButton;
- (void)dataUpdated:(BOOL)a0 withError:(id)a1;
- (void)didEnterLoadingState;
- (void)didEnterRefreshingState;
- (void)didExitRefreshingState;
- (void)donePressed:(id)a0;
- (void)hideNoContentPlaceholder;
- (id)initWithGameRecord:(id)a0 leaderboardSet:(id)a1;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (void)setupVisualEffect;
- (void)showNoContentPlaceholderForError:(id)a0;
- (void)updateLargeTitleInsets;

@end
