@class GKLeaderboard, GKScore, UILabel, GKDashboardPlayerPhotoView, UIButton;

@interface GKDashboardLeaderboardDetailViewController : GKDetailViewController

@property (nonatomic) GKDashboardPlayerPhotoView *playerView;
@property (nonatomic) UILabel *nameLabel;
@property (nonatomic) UILabel *descriptionLabel;
@property (nonatomic) UILabel *earnedOnLabel;
@property (nonatomic) UILabel *infoLabel;
@property (nonatomic) UIButton *firstButton;
@property (nonatomic) UIButton *secondButton;
@property (nonatomic) UIButton *reportProblemButton;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) GKScore *score;

- (void)viewDidLoad;
- (id)preferredFocusEnvironments;
- (void)share:(id)a0;
- (void).cxx_destruct;
- (void)report:(id)a0;
- (void)challenge:(id)a0;
- (void)configureForScore;
- (id)initWithScore:(id)a0 leaderboard:(id)a1;

@end
