@class SKUIColorScheme, SKUIEditorialLayout, SKUIEditorialComponent, SKUIViewElementLayoutContext;

@interface SKUIEditorialPageSection : SKUIStorePageSection {
    SKUIColorScheme *_colorScheme;
    SKUIEditorialLayout *_editorialLayout;
    BOOL _hasValidColorScheme;
    BOOL _isExpanded;
    SKUIViewElementLayoutContext *_layoutContext;
}

@property (readonly, nonatomic) SKUIEditorialComponent *pageComponent;

- (void).cxx_destruct;
- (long long)numberOfCells;
- (id)_colorScheme;
- (void)reloadCellWithIndexPath:(id)a0 reason:(long long)a1;
- (id)_editorialLayout;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (long long)applyUpdateType:(long long)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidSelectItemAtIndexPath:(id)a0;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (id)initWithPageComponent:(id)a0;
- (void)willAppearInContext:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
