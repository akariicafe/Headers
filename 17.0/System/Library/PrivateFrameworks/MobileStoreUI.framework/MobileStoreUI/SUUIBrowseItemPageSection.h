@class SUUIViewElementLayoutContext, SUUIBrowseItemComponent;

@interface SUUIBrowseItemPageSection : SUUIStorePageSection {
    SUUIViewElementLayoutContext *_layoutContext;
}

@property (readonly, nonatomic) SUUIBrowseItemComponent *pageComponent;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (long long)numberOfCells;
- (id)_imageForImageViewElement:(id)a0 styleColor:(id)a1;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidSelectItemAtIndexPath:(id)a0;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (id)initWithPageComponent:(id)a0;
- (void)willAppearInContext:(id)a0;

@end
