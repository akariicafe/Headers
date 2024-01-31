@interface SeymourUI.BrowsingViewController : UINavigationController {
    void /* unknown type, empty encoding */ dynamicOfferCoordinator;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ webUserInterfaceCoordinator;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ navigationRouter;
    void /* unknown type, empty encoding */ pictureInPicturePresenter;
    void /* unknown type, empty encoding */ purchaseHandler;
    void /* unknown type, empty encoding */ rootViewController;
    void /* unknown type, empty encoding */ siriUserActivityHandler;
    void /* unknown type, empty encoding */ _analyticsConsentShowingEnabled;
    void /* unknown type, empty encoding */ _forceAnalayticsConsentAcknowledgement;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ browsingBeganEventState;
    void /* unknown type, empty encoding */ palette;
    void /* unknown type, empty encoding */ paletteViewController;
    void /* unknown type, empty encoding */ planCompletionTracker;
    void /* unknown type, empty encoding */ presentingAnalyticsConsent;
    void /* unknown type, empty encoding */ _welcomeAcknowledgementShowingEnabled;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (id)initWithRootViewController:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)scrollToTop;
- (void)viewDidLoad;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;

@end
