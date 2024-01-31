@interface HUNearbyAccessoriesViewController : HUControllableItemCollectionViewController <HUPresentationDelegateHost, HUCollectionLayoutManagerDelegate> {
    void /* unknown type, empty encoding */ nearbyAccessoriesDelegate;
    void /* unknown type, empty encoding */ currentAccessory;
    void /* unknown type, empty encoding */ supportsQuickControls;
    void /* unknown type, empty encoding */ layoutManager;
    void /* unknown type, empty encoding */ userInfoConstraints;
    void /* unknown type, empty encoding */ _userInfoDescription;
    void /* unknown type, empty encoding */ _userInfoHeading;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ presentationDelegate;

- (void)updateViewConstraints;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)itemManager:(id)a0 didUpdateResultsForSourceItem:(id)a1;
- (void).cxx_destruct;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (id)layoutSectionForSection:(long long)a0 layoutEnvironment:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)displayEditorWithSender:(id)a0;
- (id)displayedItemsInSection:(id)a0;
- (void)doneButtonPressedWithSender:(id)a0;
- (id)initUsingCompositionalLayoutWithItemManager:(id)a0;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (id)initWithSourceItem:(id)a0 supportsQuickControls:(BOOL)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginLongPressPresentationWithContext:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginPresentationWithContext:(id)a1;
- (BOOL)presentationCoordinatorShouldProvideCancellationFeedback:(id)a0;
- (BOOL)shouldShowHeaderForSection:(id)a0;

@end
