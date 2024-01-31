@class NSArray;

@interface NewsFeed.WebEmbedViewController : UIViewController <TSTabBarSplitViewAutoObserver> {
    void /* unknown type, empty encoding */ layoutIdentifier;
    void /* unknown type, empty encoding */ onReuse;
    void /* unknown type, empty encoding */ webLinkPresentingViewController;
    void /* unknown type, empty encoding */ contentFrame;
    void /* unknown type, empty encoding */ resizingProvider;
    void /* unknown type, empty encoding */ onEmbedInteraction;
    void /* unknown type, empty encoding */ showsLoadingSpinner;
    void /* unknown type, empty encoding */ interactionProvider;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ contentFrameChanged;
    void /* unknown type, empty encoding */ preferredContentSizeCategoryOnPopulate;
    void /* unknown type, empty encoding */ embedURL;
    void /* unknown type, empty encoding */ dataFeedURL;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ sourceURL;
    void /* unknown type, empty encoding */ feedConfiguration;
    void /* unknown type, empty encoding */ viewportSize;
    void /* unknown type, empty encoding */ isResizable;
    void /* unknown type, empty encoding */ webContentViewController;
    void /* unknown type, empty encoding */ errorProvider;
    void /* unknown type, empty encoding */ presentationManager;
    void /* unknown type, empty encoding */ configurationProvider;
    void /* unknown type, empty encoding */ pictureInPictureState;
    void /* unknown type, empty encoding */ sportsEventManager;
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ sportsDataVisualization;
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ errorState;
    void /* unknown type, empty encoding */ loadedState;
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ errorView;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ _lastDatastoreUpdate;
    void /* unknown type, empty encoding */ debugLoadView;
    void /* unknown type, empty encoding */ debugSportsView;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

- (void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)handleTapWithRecognizer:(id)a0;

@end
