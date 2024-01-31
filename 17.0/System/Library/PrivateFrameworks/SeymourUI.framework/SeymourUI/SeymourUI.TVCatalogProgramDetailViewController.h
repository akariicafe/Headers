@class NSArray;

@interface SeymourUI.TVCatalogProgramDetailViewController : UIViewController {
    void /* unknown type, empty encoding */ visibility;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ resignActiveObserver;
    void /* unknown type, empty encoding */ purchaseCoordinator;
    void /* unknown type, empty encoding */ purchaseHandler;
    void /* unknown type, empty encoding */ dynamicOfferCoordinator;
    void /* unknown type, empty encoding */ webUserInterfaceCoordinator;
    void /* unknown type, empty encoding */ lastFocusedIndexPath;
    void /* unknown type, empty encoding */ settlingTimer;
    void /* unknown type, empty encoding */ timerProvider;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ shroudView;
    void /* unknown type, empty encoding */ bottomBlurView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ ellipsisButton;
    void /* unknown type, empty encoding */ menu;
    void /* unknown type, empty encoding */ gradientMaskLayer;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
