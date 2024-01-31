@class NSString, UIAlertController, GKGame, GKLeaderboard, GKDashboardHostViewController;
@protocol GKGameCenterControllerDelegate;

@interface GKGameCenterViewController : UINavigationController <GKExtensionParentViewControllerProtocol, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) GKDashboardHostViewController *remoteViewController;
@property (retain, nonatomic) NSString *leaderboardIdentifier;
@property (retain, nonatomic) NSString *leaderboardTitle;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) NSString *achievementIdentifier;
@property (retain, nonatomic) NSString *activityIdentifier;
@property (retain, nonatomic) NSString *playerIdentifier;
@property (retain, nonatomic) NSString *playerAlias;
@property (retain, nonatomic) NSString *gameBundleID;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) NSString *leaderboardCategory;
@property (nonatomic) long long leaderboardTimeScope;
@property (nonatomic) long long leaderboardPlayerScope;
@property (nonatomic) long long viewState;
@property (nonatomic) BOOL isArcade;
@property (nonatomic) long long restrictionMode;
@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (retain, nonatomic) GKGame *actualGame;
@property (nonatomic) int actualHostPID;
@property (weak, nonatomic) id<GKGameCenterControllerDelegate> gameCenterDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)_preventsAppearanceProxyCustomization;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (double)transitionDuration:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)loadView;
- (void)animateTransition:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithState:(long long)a0;
- (void).cxx_destruct;
- (void)animationEnded:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_commonInit;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)checkArcadeStateWithCompletion:(id /* block */)a0;
- (BOOL)shouldShowQuitForTurnBasedMatch;
- (BOOL)shouldShowPlayForTurnBasedMatch;
- (void)_setupChildViewController;
- (void)_setupRemoteViewController;
- (void)extensionDidFinishWithError:(id)a0;
- (id)initWithAchievementID:(id)a0;
- (id)initWithGame:(id)a0 hostPID:(int)a1 restrictionMode:(long long)a2 deeplink:(id)a3;
- (id)initWithLeaderboard:(id)a0 playerScope:(long long)a1;
- (id)initWithLeaderboardID:(id)a0 playerScope:(long long)a1 timeScope:(long long)a2;
- (id)leaderboardCategory;
- (void)notifyDelegateOnWillFinish;
- (void)setLeaderboardCategory:(id)a0;
- (void)setLeaderboardIdentifierFromExtension:(id)a0;
- (void)setLeaderboardPlayerScopeFromExtension:(long long)a0;
- (void)setLeaderboardTimeScopeFromExtension:(long long)a0;
- (void)setViewStateFromExtension:(long long)a0;
- (BOOL)shouldShowPlayForChallenge;

@end
