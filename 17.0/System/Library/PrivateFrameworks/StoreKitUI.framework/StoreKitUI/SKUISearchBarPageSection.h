@class SKUISearchBarController;

@interface SKUISearchBarPageSection : SKUIStorePageSection {
    SKUISearchBarController *_searchBarController;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (long long)numberOfCells;
- (id)_searchBarController;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (id)backgroundColorForIndexPath:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (void)willAppearInContext:(id)a0;

@end
