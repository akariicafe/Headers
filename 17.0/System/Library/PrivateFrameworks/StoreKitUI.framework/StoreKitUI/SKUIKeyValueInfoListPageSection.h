@class NSString, SKUIViewElementLayoutContext, SKUIInfoListViewElement, NSArray, NSNumber;

@interface SKUIKeyValueInfoListPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUIInfoListViewElement *_infoList;
    NSNumber *_titleColumnWidth;
    NSArray *_viewElements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (long long)numberOfCells;
- (void)reloadCellWithIndexPath:(id)a0 reason:(long long)a1;
- (void)_enumerateVisibleViewElementsUsingBlock:(id /* block */)a0;
- (void)_reloadViewElementProperties;
- (void)_requestCellLayout;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (long long)applyUpdateType:(long long)a0;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)backgroundColorForIndexPath:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (void)entityProvider:(id)a0 didInvalidateWithContext:(id)a1;
- (id)initWithPageComponent:(id)a0;
- (void)willAppearInContext:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
