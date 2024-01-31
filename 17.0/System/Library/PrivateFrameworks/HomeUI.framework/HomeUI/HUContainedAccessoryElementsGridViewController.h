@class UIViewController, HFItem;
@protocol HFServiceLikeItem, HUPresentationDelegateHost, HFAccessoryRepresentableItem;

@interface HUContainedAccessoryElementsGridViewController : HUControllableItemCollectionViewController <HUCollectionLayoutManagerDelegate, HUDetailsPresentationDelegateHost> {
    void /* unknown type, empty encoding */ isPresentedModally;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionLayoutManager;
    void /* unknown type, empty encoding */ cellBackgroundDisplayStyle;
    void /* unknown type, empty encoding */ shouldGroupByRoom;
    void /* unknown type, empty encoding */ showTilePrefixes;
    void /* unknown type, empty encoding */ cellInsetsLayoutMarginsFromSafeArea;
    void /* unknown type, empty encoding */ dataModelObservationCancelable;
    void /* unknown type, empty encoding */ actionSetDataModel;
}

@property (nonatomic) void /* unknown type, empty encoding */ requiresPresentingViewControllerDismissal;
@property (nonatomic, retain) void /* unknown type, empty encoding */ presentationDelegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ serviceContainingItem;
@property (nonatomic, retain) void /* unknown type, empty encoding */ mediaItem;
@property (nonatomic, weak) void /* unknown type, empty encoding */ serviceGridDelegate;

- (void)doneWithSender:(id)a0;
- (void)editWithSender:(id)a0;
- (id)displayedItemsInSection:(id)a0;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldShowHeaderForSection:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (id)layoutSectionForSection:(long long)a0 layoutEnvironment:(id)a1;
- (void)accessoryControlViewControllerFor:(HFItem<HFAccessoryRepresentableItem, HFServiceLikeItem> *)a0 tileItem:(HFItem *)a1 completionHandler:(void (^)(UIViewController<HUPresentationDelegateHost> *))a2;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)detailsViewControllerForPresentationCoordinator:(id)a0 item:(id)a1;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)initUsingCompositionalLayoutWithItemManager:(id)a0;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (id)initWithMediaItem:(id)a0 isPresentedModally:(BOOL)a1 shouldGroupByRoom:(BOOL)a2 valueSource:(id)a3;
- (id)initWithServiceContainingItem:(id)a0 isPresentedModally:(BOOL)a1 shouldGroupByRoom:(BOOL)a2 valueSource:(id)a3;
- (id)initWithServiceContainingItem:(id)a0 mediaItem:(id)a1 isPresentedModally:(BOOL)a2 shouldGroupByRoom:(BOOL)a3 valueSource:(id)a4;
- (void)itemManagerDidUpdate:(id)a0;

@end
