@class UIViewController, HFItem;
@protocol HFServiceLikeItem, HUPresentationDelegateHost, HFAccessoryRepresentableItem;

@interface HUStatusDetailsViewController : HUControllableItemCollectionViewController <HUCollectionLayoutManagerDelegate, HUAboutResidentDeviceViewControllerDelegate, UITextViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionLayoutManager;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ statusDetailsDelegate;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)aboutResidentDeviceViewControllerDidFinish:(id)a0;
- (id)displayedItemsInSection:(id)a0;
- (BOOL)shouldShowHeaderForSection:(id)a0;
- (id)transformWithLayoutOptions:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (id)layoutSectionForSection:(long long)a0 layoutEnvironment:(id)a1;
- (void)doneButtonPressed:(id)a0;
- (void)accessoryControlViewControllerFor:(HFItem<HFAccessoryRepresentableItem, HFServiceLikeItem> *)a0 tileItem:(HFItem *)a1 completionHandler:(void (^)(UIViewController<HUPresentationDelegateHost> *))a2;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)detailsViewControllerForPresentationCoordinator:(id)a0 item:(id)a1;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)initUsingCompositionalLayoutWithItemManager:(id)a0;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (id)initWithStatusItem:(id)a0 delegate:(id)a1;
- (id)prepareToPerformToggleActionForItem:(id)a0 sourceItem:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x0; double x1; })a1 view:(id)a2;
- (void)presentationCoordinator:(id)a0 willBeginPresentationWithContext:(id)a1;

@end
