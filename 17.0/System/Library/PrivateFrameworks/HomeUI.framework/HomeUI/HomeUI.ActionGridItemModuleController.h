@interface HomeUI.ActionGridItemModuleController : HUItemModuleController <HUCollectionLayoutManagerDelegate, HUContainedAccessoryElementsGridViewControllerDelegate, HUServiceActionControlsViewControllerDelegate, NSObject> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionLayoutManager;
    void /* unknown type, empty encoding */ presentedServiceGroupDetailsViewController;
}

- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (Class)collectionCellClassForItem:(id)a0;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)a0 layoutEnvironment:(id)a1;
- (id)detailsViewControllerFor:(id)a0 item:(id)a1;
- (id)displayedItemsInSection:(id)a0;
- (BOOL)hasDetailsActionFor:(id)a0 item:(id)a1;
- (void)serviceActionControlsViewController:(id)a0 removeServiceActionItem:(id)a1;
- (BOOL)shouldShowHeaderForSection:(id)a0;
- (id)transformWithLayoutOptions:(id)a0;

@end
