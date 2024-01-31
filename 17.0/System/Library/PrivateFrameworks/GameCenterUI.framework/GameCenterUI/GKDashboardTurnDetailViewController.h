@class NSLayoutConstraint, GKTurnBasedMatch, UILabel, UIView, UIButton;

@interface GKDashboardTurnDetailViewController : GKDetailViewController

@property (nonatomic) UIView *contentVerticalCenteringView;
@property (nonatomic) UIView *turnDetailContentView;
@property (nonatomic) UILabel *playingWithLabel;
@property (nonatomic) UILabel *createdLabel;
@property (nonatomic) UIButton *firstButton;
@property (nonatomic) UIButton *secondButton;
@property (nonatomic) NSLayoutConstraint *secondButtonCenteringConstraint;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (nonatomic) BOOL shouldShowPlay;
@property (nonatomic) BOOL shouldShowQuit;

- (void)acceptInvitation:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)preferredFocusEnvironments;
- (void).cxx_destruct;
- (void)declineInvitation:(id)a0;
- (void)disableButtons;
- (void)turnOK:(id)a0;
- (void)chooseMatch:(id)a0;
- (void)handleTurnBasedEvent:(id)a0;
- (id)initWithTurnBasedMatch:(id)a0;
- (void)quitMatch:(id)a0;
- (void)refreshPresenter;
- (void)removeMatch:(id)a0;

@end
