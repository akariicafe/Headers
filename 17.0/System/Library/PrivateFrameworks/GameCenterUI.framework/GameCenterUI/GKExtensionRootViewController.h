@class UINavigationController, NSString, UIVisualEffectView, NSLayoutConstraint, UIViewController;

@interface GKExtensionRootViewController : UIViewController <GKDaemonProxyDataUpdateDelegate, GKExtensionProtocol, GKExtensionHostProtocol, GKDashboardServiceInterface, UINavigationControllerDelegate>

@property (nonatomic) BOOL hasInitialData;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) NSLayoutConstraint *effectBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *effectTopConstraint;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (nonatomic) BOOL alwaysShowDoneButton;
@property (nonatomic) double statusBarHeight;
@property (nonatomic) BOOL requiresNavigationController;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (nonatomic) int hostPID;
@property (nonatomic) long long hostUserInterfaceIdiom;
@property (nonatomic) BOOL adjustTopConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)finish;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (id)daemonProxy;
- (void)viewDidAppear:(BOOL)a0;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (void)clientDidCancel;
- (void)clientDidFinish;
- (id)hostObjectProxy;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_gkAdditionalSafeAreaInset;
- (BOOL)_useBackdropViewForWindowBackground;
- (void)addDoneButtonToViewController:(id)a0;
- (void)addVisualEffectViewForView:(id)a0;
- (void)clientWillTerminate;
- (void)configureContentViewController;
- (void)constructContentViewController;
- (void)donePressed:(id)a0;
- (void)extensionIsCanceling;
- (void)extensionIsFinishing;
- (void)logOnceGameControllerUsedInGameLayer;
- (void)messageFromClient:(id)a0;
- (void)messageFromExtension:(id)a0;
- (void)scrollToTopPressed:(id)a0;
- (void)sendMessageToClient:(id)a0;
- (void)setInitialState:(id)a0 withReply:(id /* block */)a1;
- (void)setToDarkBackground;
- (void)setToLightBackground;
- (void)setupVisualEffects;
- (BOOL)shouldAddScrollToTopView;
- (void)updateScrollToTopViewConstraints;

@end
