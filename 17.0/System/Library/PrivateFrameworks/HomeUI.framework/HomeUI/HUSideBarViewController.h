@class HMHome, NSString, UIView, HUSideBarItemManager;
@protocol HUSideBarDelegate;

@interface HUSideBarViewController : HUItemCollectionViewController <UICollectionViewDelegate, UIViewControllerTransitioningDelegate, UICollectionViewDropDelegate, HFItemManagerDelegate, HFHomeObserver>

@property (retain, nonatomic) UIView *blurView;
@property (weak, nonatomic) id<HUSideBarDelegate> sideBarDelegate;
@property (retain, nonatomic) HUSideBarItemManager *itemManager;
@property (retain, nonatomic) HMHome *home;
@property (nonatomic) BOOL hideRoomSection;
@property (nonatomic) BOOL shouldUseDashboardEffects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateNavigationBar;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)a1 atCurrentIndexPath:(id)a2 toProposedIndexPath:(id)a3;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)_selectItemAtIndexPath:(id)a0;
- (void)_updateAppearance;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)homeDidUpdateApplicationData:(id)a0;
- (void)homeDidUpdateToROAR:(id)a0;
- (void)_updateBlurView;
- (void)_sendSideBarInteractionEventForItem:(id)a0;
- (void)_updateShouldUseDashboardEffects;
- (void)_updateSplitViewSeparator;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)didReorderItemWithSortedItemsBySectionID:(id)a0;
- (void)diffableDataItemManager:(id)a0 didUpdateItems:(id)a1 addItems:(id)a2 removeItems:(id)a3;
- (id)initWithDelegate:(id)a0 forHome:(id)a1;
- (void)refreshSideBarSelection;
- (void)switchToDiscover;
- (void)switchToSelectedHome:(id)a0;
- (void)updateSelectionToItem:(id)a0;

@end
