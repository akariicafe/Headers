@class NSString, SKUIAccountButtonsViewController, SKUIAccountButtonsComponent;

@interface SKUIAccountButtonsSection : SKUIStorePageSection <SKUIAccountButtonsDelegate> {
    SKUIAccountButtonsViewController *_accountButtonsViewController;
}

@property (readonly, nonatomic) SKUIAccountButtonsComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)numberOfCells;
- (id)_accountButtonsViewController;
- (void)accountButtonsViewControllerDidSignIn:(id)a0;
- (void)accountButtonsViewControllerDidSignOut:(id)a0;
- (void)accountButtonsViewControllerDidTapECommerceLink:(id)a0;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (id)backgroundColorForIndexPath:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (id)initWithPageComponent:(id)a0;
- (void)willAppearInContext:(id)a0;

@end
