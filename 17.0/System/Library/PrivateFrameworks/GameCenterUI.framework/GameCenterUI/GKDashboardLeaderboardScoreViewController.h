@class GKDashboardLeaderboardScoreHeaderView, GKLeaderboard, GKDashboardLeaderboardScoreDataSource;

@interface GKDashboardLeaderboardScoreViewController : GKDashboardCollectionViewController

@property (retain, nonatomic) GKDashboardLeaderboardScoreHeaderView *headerView;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) GKDashboardLeaderboardScoreDataSource *friendDataSource;
@property (retain, nonatomic) GKDashboardLeaderboardScoreDataSource *globalDataSource;
@property (nonatomic) long long timeScope;

+ (long long)initialTimeScope;
+ (void)setInitialTimeScope:(long long)a0;

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)initWithGameRecord:(id)a0 leaderboard:(id)a1;
- (void)dataUpdated:(BOOL)a0 withError:(id)a1;
- (void)donePressed:(id)a0;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (BOOL)shouldUseTwoColumnLayoutForSize:(struct CGSize { double x0; double x1; })a0;
- (void)timeScopePressed:(id)a0;
- (void)updateColumnLayoutForSize:(struct CGSize { double x0; double x1; })a0;

@end
