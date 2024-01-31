@class NSSet, NSMapTable, HUQuickControlCollectionViewLayout, HFItemManager, HUQuickControlCollectionViewControllerLayoutOptions, HUQuickControlContentCharacteristicWritingUpdateAdapter, NSString;
@protocol HULayoutAnchorProviding, HUQuickControlCollectionItemManaging, HUQuickControlContentCharacteristicWritingDelegate, HUQuickControlContentHosting;

@interface HUQuickControlCollectionViewController : HUItemCollectionViewController <HUQuickControlCollectionViewDelegateLayout, HUQuickControlItemUpdating, HFAccessoryObserver, HUQuickControlContentHelper, HUQuickControlInteractiveContentContaining, HUQuickControlContentCharacteristicWriting, HUQuickControlTouchContinuing>

@property (readonly, nonatomic) NSMapTable *viewControllersKeyedByItem;
@property (retain, nonatomic) HUQuickControlCollectionViewLayout *collectionViewLayout;
@property (readonly, nonatomic) HFItemManager<HUQuickControlCollectionItemManaging> *itemManager;
@property (readonly, nonatomic) HUQuickControlContentCharacteristicWritingUpdateAdapter *characteristicWritingAdapter;
@property (retain, nonatomic) id<HULayoutAnchorProviding> preferredFrameLayoutGuide;
@property (retain, nonatomic) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions;
@property (nonatomic) BOOL disableItemUpdatesForOverrideCharacteristicValueChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUQuickControlContentHosting> quickControlHost;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (weak, nonatomic) id<HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate;
@property (readonly, copy, nonatomic) NSSet *affectedCharacteristics;

- (void)viewLayoutMarginsDidChange;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void)accessoryDidUpdateControllable:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)viewForTouchContinuation;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (id)_allViewControllers;
- (id)overrideValueForCharacteristic:(id)a0;
- (void)viewWillDismiss;
- (id)_allContentViewControllers;
- (id)_controlItemsForItem:(id)a0;
- (id)_createCellContainerForViewController:(id)a0 forItem:(id)a1;
- (unsigned long long)_determineReachabilityForIndexPath:(id)a0;
- (void)_fetchReachabilityStateForMediaAccessory:(id)a0 accessType:(unsigned long long)a1 itemSectionIdentifier:(id)a2;
- (void)_handleCoordinationReachableStatusChanged:(id)a0;
- (void)_propagateInteractiveContentStateForChildViewControllers:(id)a0;
- (void)_reconfigureLayoutOptions;
- (void)_setReachabilityForHeaderForIdentifier:(id)a0 to:(BOOL)a1;
- (unsigned long long)_titlePositionForItem:(id)a0;
- (id)_viewControllerForItem:(id)a0;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)diffableDataItemManager:(id)a0 didUpdateItems:(id)a1 addItems:(id)a2 removeItems:(id)a3;
- (double)heightForSupplementaryViewAtIndexPath:(id)a0;
- (id)initWithItemManager:(id)a0;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (id)intrinsicSizeDescriptorForItemAtIndexPath:(id)a0 itemSize:(unsigned long long)a1;
- (void)invalidateContentViewLayout;
- (void)itemManager:(id)a0 didRemoveItem:(id)a1 atIndexPath:(id)a2;
- (void)itemManager:(id)a0 didUpdateResultsForItem:(id)a1 atIndexPath:(id)a2;
- (void)quickControlItemHost:(id)a0 didUpdateVisibility:(BOOL)a1;
- (void)shouldHideQuickControlHeaderButton:(BOOL)a0 forSectionIdentifier:(id)a1;
- (void)shouldHideQuickControlHeaderText:(BOOL)a0 forSectionIdentifier:(id)a1;

@end
