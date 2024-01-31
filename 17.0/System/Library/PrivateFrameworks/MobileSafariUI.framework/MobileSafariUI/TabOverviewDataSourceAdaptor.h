@class WBTabGroup, TabOverview, TabController, TabOverviewItem;

@interface TabOverviewDataSourceAdaptor : NSObject {
    TabOverviewItem *_currentItem;
}

@property (readonly, nonatomic) TabController *tabController;
@property (readonly, nonatomic) WBTabGroup *tabGroup;
@property (retain, nonatomic) TabOverview *tabOverview;

- (void)tabCollectionViewDidDismiss:(id)a0;
- (void)tabCollectionViewWillPresent:(id)a0;
- (void)tabCollectionView:(id)a0 didSelectItem:(id)a1;
- (void)tabOverviewDidChangeAllowsInteractivePresentation:(id)a0;
- (void)tabCollectionViewWillDismiss:(id)a0;
- (void)tabCollectionViewDidCancelDismissal:(id)a0;
- (id)currentItemForTabOverview:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)tabOverview:(id)a0 willInteractivelyCloseItem:(id)a1;
- (void)tabCollectionView:(id)a0 item:(id)a1 didProduceNavigationIntent:(id)a2;
- (void)tabCollectionView:(id)a0 closeItem:(id)a1;
- (void)tabCollectionViewDidPresent:(id)a0;
- (void)tabOverviewWillUpdateInteractivePresentation:(id)a0;
- (void)tabCollectionViewDidUpdateItemVisibilityOrder:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)tabOverview:(id)a0 closeItems:(id)a1;
- (id)undoManagerForTabCollectionView:(id)a0;
- (void)tabCollectionView:(id)a0 closeCloudTab:(id)a1 onDevice:(id)a2;
- (void).cxx_destruct;
- (id)itemsToKeepVisibleForTabOverview:(id)a0;
- (id)tabCollectionView:(id)a0 borrowContentViewForItem:(id)a1 withTopBackdropView:(id *)a2 ofHeight:(double)a3;
- (void)tabCollectionViewEndIgnoringUserInteraction:(id)a0 reason:(id)a1;
- (void)tabCollectionView:(id)a0 relinquishBorrowedContentView:(id)a1 forItem:(id)a2;
- (void)tabCollectionViewBeginIgnoringUserInteraction:(id)a0 reason:(id)a1;
- (void)tabCollectionView:(id)a0 didMoveItem:(id)a1 overItem:(id)a2;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithTabGroup:(id)a0 tabController:(id)a1;
- (void)configureTabOverviewFromTabGroup;

@end
