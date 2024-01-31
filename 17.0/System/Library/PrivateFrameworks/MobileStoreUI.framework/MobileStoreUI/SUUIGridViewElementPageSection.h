@class NSString, SUUIGridViewElementPageSectionConfiguration, SUUIGridComponent, IKColor, SUUIViewElementLayoutContext, NSArray;

@interface SUUIGridViewElementPageSection : SUUIStorePageSection <SUUIArtworkRequestDelegate, SUUIGridViewElementPageSectionConfigurationDataSource, SUUICollectionDOMFeatureTargetting> {
    IKColor *_backgroundColor;
    SUUIViewElementLayoutContext *_cellLayoutContext;
    double _cellPaddingInteriorHorizontal;
    double _cellPaddingLeftEdgeHorizontal;
    double _cellPaddingRightEdgeHorizontal;
    SUUIGridViewElementPageSectionConfiguration *_configuration;
    BOOL _editing;
    NSArray *_indexPathsForBackgroundItems;
    long long _lastNeedsMoreCount;
    NSArray *_viewElements;
}

@property (readonly, nonatomic) SUUIGridComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;

- (void)dealloc;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)previewingContext:(id)a0 viewControllerForLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (long long)numberOfCells;
- (void)_setContext:(id)a0;
- (void)reloadCellWithIndexPath:(id)a0 reason:(long long)a1;
- (BOOL)_containsOnlyShelfElements;
- (void)_enumerateVisibleViewElementsUsingBlock:(id /* block */)a0;
- (void)_reloadViewElementProperties;
- (void)_requestLayoutForCells;
- (void)_resetLayoutProperties;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (long long)applyUpdateType:(long long)a0;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)backgroundColorForIndexPath:(id)a0;
- (id)backgroundColorForSection;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidLongPressItemAtIndexPath:(id)a0;
- (void)collectionViewDidSelectItemAtIndexPath:(id)a0;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)a0;
- (BOOL)collectionViewShouldSelectItemAtIndexPath:(id)a0;
- (void)collectionViewWillApplyLayoutAttributes:(id)a0;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (void)collectionViewWillScrollToOffset:(struct CGPoint { double x0; double x1; })a0 visibleRange:(struct SUUIIndexPathRange { long long x0; long long x1; long long x2; long long x3; })a1;
- (void)deselectItemsAnimated:(BOOL)a0;
- (void)expandEditorialForLabelElement:(id)a0 indexPath:(id)a1;
- (void)getModalSourceViewForViewElement:(id)a0 completionBlock:(id /* block */)a1;
- (id)gridViewElementPageSectionConfiguration:(id)a0 viewElementForIndexPath:(id)a1;
- (id)indexPathsForBackgroundItems;
- (id)initWithPageComponent:(id)a0;
- (void)prefetchResourcesWithReason:(long long)a0;
- (void)reloadVisibleCellsWithReason:(long long)a0;
- (BOOL)requestLayoutWithReloadReason:(long long)a0;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)a0 relativeSectionIndex:(long long)a1;
- (BOOL)updateCellWithIndexPath:(id)a0 itemState:(id)a1 animated:(BOOL)a2;
- (void)willAppearInContext:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
