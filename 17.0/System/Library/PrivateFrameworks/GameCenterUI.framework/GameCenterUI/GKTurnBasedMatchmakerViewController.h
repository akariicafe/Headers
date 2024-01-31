@class GKMatchRequest, UIAlertController, NSString, GKTurnBasedMatchmakerHostViewController;
@protocol GKTurnBasedMatchmakerViewControllerDelegate;

@interface GKTurnBasedMatchmakerViewController : UINavigationController <GKLocalPlayerListener, GKTurnBasedEventListener, GKExtensionParentViewControllerProtocol>

@property (retain, nonatomic) GKTurnBasedMatchmakerHostViewController *remoteViewController;
@property (retain, nonatomic) GKMatchRequest *matchRequest;
@property (retain, nonatomic) UIAlertController *alertController;
@property (weak, nonatomic) id<GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate;
@property (nonatomic) BOOL showExistingMatches;
@property (nonatomic) long long matchmakingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)cancel;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)finishWithError:(id)a0;
- (BOOL)shouldShowQuitForTurnBasedMatch;
- (BOOL)shouldShowPlayForTurnBasedMatch;
- (void)_setupChildViewController;
- (void)_setupRemoteViewController;
- (void)authenticationChanged:(id)a0;
- (void)extensionDidFinishWithError:(id)a0;
- (void)finishWithMatch:(id)a0;
- (id)initWithMatchRequest:(id)a0;
- (void)player:(id)a0 receivedTurnEventForMatch:(id)a1 didBecomeActive:(BOOL)a2;
- (void)playerQuitMatch:(id)a0;

@end
