@class NSString, NSArray, UINavigationController, UIWindow, NSDictionary, NSMutableDictionary, DSRemoteUILoader, UIViewController, NSMutableSet, LAContext, DSSharingPermissions;

@interface DSNavigationController : OBNavigationController <DSNavigationDelegate, UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) NSDictionary *safetyResetChapters;
@property (retain, nonatomic) NSDictionary *sharingActivityChapters;
@property (retain, nonatomic) NSArray *safetyResetNavigationOrder;
@property (retain, nonatomic) NSArray *sharingActivityNavigationOrder;
@property (retain, nonatomic) DSRemoteUILoader *remoteUILoader;
@property (nonatomic) long long currentFlowType;
@property (nonatomic) Class currentPaneType;
@property (nonatomic) long long currentChapter;
@property (nonatomic) long long currentChapterForAnalytics;
@property (retain, nonatomic) UIViewController *networkErrorController;
@property (nonatomic) BOOL isShowingNetworkError;
@property (retain, nonatomic) NSArray *panesRequiringNetwork;
@property (retain, nonatomic) UINavigationController *connectionErrorNavigation;
@property (retain, nonatomic) NSDictionary *cachedPanes;
@property (retain, nonatomic) UIWindow *obfuscationWindow;
@property (retain, nonatomic) NSMutableDictionary *unsharedResourcesBySource;
@property (retain, nonatomic) NSMutableSet *unsharedPeople;
@property (retain, nonatomic) NSMutableSet *unsharedApps;
@property (retain, nonatomic) NSMutableSet *unsharedPermissions;
@property (retain, nonatomic) LAContext *authContext;
@property (retain, nonatomic) DSSharingPermissions *fetchedSharingPermissions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)popViewControllerAnimated:(BOOL)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isNetworkReachable;
- (void)dealloc;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewDidLoad;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)willEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)didEnterBackground:(id)a0;
- (void)_reachabilityChanged:(id)a0;
- (void)finishFlow;
- (id)paneBeforePane:(id)a0;
- (void)displayNetworkError;
- (id)flowTypeForAnalytics;
- (void)goToCustomizeSharing;
- (void)hideNetworkError;
- (id)initStartingWithEmergencyReset;
- (id)initStartingWithMangeSharing;
- (void)learnMorePressedForController:(id)a0 withURL:(id)a1;
- (id)paneInstanceForType:(Class)a0;
- (void)popToPreviousPane:(id)a0;
- (void)pushNextPane;
- (void)pushPaneAfterPaneType:(Class)a0;
- (void)pushPaneType:(Class)a0;
- (void)pushPaneType:(Class)a0 loadRemoteUI:(BOOL)a1;
- (void)pushPaneWithController:(id)a0 paneType:(Class)a1 shouldShow:(BOOL)a2;
- (void)quickExit;
- (void)resetRemoteUI;
- (void)sendSummaryAnalyticsWithQuickExit:(BOOL)a0 finalScreen:(BOOL)a1;
- (void)setupCancelButtonWithController:(id)a0;
- (void)setupChapterIndicatorWithController:(id)a0;
- (void)setupConnectionError;
- (void)setupQuickExitButtonWithController:(id)a0;
- (BOOL)shouldFinishFlow;
- (void)startFlowWithType:(long long)a0;
- (void)updateCurrentChapterWithPaneType:(Class)a0;

@end
