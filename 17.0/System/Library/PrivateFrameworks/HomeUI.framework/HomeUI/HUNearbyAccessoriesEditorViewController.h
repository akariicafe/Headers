@interface HUNearbyAccessoriesEditorViewController : HUItemCollectionViewController <HUCollectionLayoutManagerDelegate> {
    void /* unknown type, empty encoding */ EmptySetIdentifier;
    void /* unknown type, empty encoding */ NearbyAccessoryCustomUUIDStrings;
    void /* unknown type, empty encoding */ accessoryElementModule;
    void /* unknown type, empty encoding */ instructionModule;
    void /* unknown type, empty encoding */ selectionController;
    void /* unknown type, empty encoding */ layoutManager;
    void /* unknown type, empty encoding */ primaryAccessory;
    void /* unknown type, empty encoding */ completionHandler;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)layoutSectionForSection:(long long)a0 layoutEnvironment:(id)a1;
- (id)buildItemModuleControllerForModule:(id)a0;
- (void)cancelEditingWithSender:(id)a0;
- (void)dismissEditorWithSender:(id)a0;
- (id)displayedItemsInSection:(id)a0;
- (id)hu_preloadContent;
- (id)initUsingCompositionalLayoutWithItemManager:(id)a0;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (id)initWithPrimaryAccessory:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldShowHeaderForSection:(id)a0;

@end
