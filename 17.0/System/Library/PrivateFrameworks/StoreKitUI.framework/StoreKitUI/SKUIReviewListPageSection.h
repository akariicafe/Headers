@class SKUIReviewListPageComponent, NSMutableDictionary, SKUIViewElementLayoutContext;

@interface SKUIReviewListPageSection : SKUIStorePageSection {
    SKUIViewElementLayoutContext *_cellLayoutContext;
}

@property (copy, nonatomic) NSMutableDictionary *contextActionsRegistration;
@property (readonly, nonatomic) SKUIReviewListPageComponent *pageComponent;

- (void).cxx_destruct;
- (long long)numberOfCells;
- (void)reloadCellWithIndexPath:(id)a0 reason:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetForReviewIndex:(long long)a0;
- (id)_contextActionRegistrationKeyWithCell:(id)a0 indexPath:(id)a1;
- (void)_requestCellLayout;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidSelectItemAtIndexPath:(id)a0;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)a0;
- (void)collectionViewWillApplyLayoutAttributes:(id)a0;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (void)entityProvider:(id)a0 didInvalidateWithContext:(id)a1;
- (id)initWithPageComponent:(id)a0;
- (void)registerContextActionsForCell:(id)a0 indexPath:(id)a1 viewController:(id)a2;
- (void)unregisterContextActionsForCell:(id)a0 indexPath:(id)a1 viewController:(id)a2;
- (void)willAppearInContext:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
