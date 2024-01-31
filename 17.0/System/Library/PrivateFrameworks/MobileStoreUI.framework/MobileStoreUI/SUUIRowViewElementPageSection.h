@class SUUIRowComponent, NSString, SUUIViewElementLayoutContext;

@interface SUUIRowViewElementPageSection : SUUIStorePageSection <SUUIArtworkRequestDelegate> {
    SUUIViewElementLayoutContext *_cellLayoutContext;
}

@property (readonly, nonatomic) SUUIRowComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (long long)numberOfCells;
- (Class)_cellClassForLockupViewElement:(id)a0;
- (id)_reuseIdentifierForViewElement:(id)a0;
- (Class)_cellClassForCardViewElement:(id)a0;
- (Class)_cellClassForViewElement:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetForIndexPath:(id)a0;
- (void)_enumerateViewElementsUsingBlock:(id /* block */)a0;
- (id)_firstChildForColumn:(id)a0;
- (double)_interiorColumnSpacing;
- (void)_requestLayoutForCells;
- (id)_reuseIdentifierForCardViewElement:(id)a0;
- (id)_reuseIdentifierForLockupViewElement:(id)a0;
- (double)_singleColumnWidth;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)backgroundColorForIndexPath:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidSelectItemAtIndexPath:(id)a0;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)a0;
- (BOOL)collectionViewShouldSelectItemAtIndexPath:(id)a0;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (void)entityProvider:(id)a0 didInvalidateWithContext:(id)a1;
- (id)initWithPageComponent:(id)a0;
- (void)prefetchResourcesWithReason:(long long)a0;
- (BOOL)updateCellWithIndexPath:(id)a0 itemState:(id)a1 animated:(BOOL)a2;
- (void)willAppearInContext:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
