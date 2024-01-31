@class NSArray;

@interface SeymourUI.TVRootViewController : UIViewController {
    void /* unknown type, empty encoding */ resignActiveObserver;
    void /* unknown type, empty encoding */ engagementPresentability;
    void /* unknown type, empty encoding */ visibility;
    void /* unknown type, empty encoding */ accountProvider;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ avatarFetcher;
    void /* unknown type, empty encoding */ contentAvailabilityClient;
    void /* unknown type, empty encoding */ engagementPresentationCoordinator;
    void /* unknown type, empty encoding */ marketingMetricFieldsProvider;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ remoteBrowsingSource;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ timerProvider;
    void /* unknown type, empty encoding */ dynamicOfferCoordinator;
    void /* unknown type, empty encoding */ purchaseCoordinator;
    void /* unknown type, empty encoding */ purchaseHandler;
    void /* unknown type, empty encoding */ webUserInterfaceCoordinator;
    void /* unknown type, empty encoding */ workoutPlanClient;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ rootMenuPresenter;
    void /* unknown type, empty encoding */ lastFocusedIndexPath;
    void /* unknown type, empty encoding */ settlingTimer;
    void /* unknown type, empty encoding */ shouldSendBrowsingBegan;
    void /* unknown type, empty encoding */ currentPlanIdentifier;
    void /* unknown type, empty encoding */ historicWorkoutPlanCompletionShown;
    void /* unknown type, empty encoding */ newPlanCellFocusTimer;
    void /* unknown type, empty encoding */ planCompletionTracker;
    void /* unknown type, empty encoding */ workoutDetailOpened;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ menuView;
    void /* unknown type, empty encoding */ workoutPlanCreationCoordinator;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)handleSignInTapped;
- (void)handleSignOutButtonLongPress;
- (void)handleSignOutTapped;
- (void)handleUpNextQueueButton;

@end
