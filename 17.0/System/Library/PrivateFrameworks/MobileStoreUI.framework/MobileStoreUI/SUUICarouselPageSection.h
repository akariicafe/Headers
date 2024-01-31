@class NSString, NSArray, SUUIMissingItemLoader, SUUICarouselPageComponent, SUUIProgressIndicatorViewElement, NSObject, UICollectionView, SUUIViewElementLayoutContext, NSIndexPath;
@protocol OS_dispatch_source;

@interface SUUICarouselPageSection : SUUIStorePageSection <SUUIArtworkRequestDelegate, SUUIMissingItemDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_carouselCollectionView;
    long long _cellCount;
    SUUIViewElementLayoutContext *_cellLayoutContext;
    NSObject<OS_dispatch_source> *_cycleTimer;
    struct CGSize { double width; double height; } _itemSize;
    double _itemSpacing;
    SUUIMissingItemLoader *_missingItemLoader;
    NSArray *_modelObjects;
    BOOL _needsHeightCalculation;
    BOOL _needsReload;
    double _itemWidth;
    long long _progressIndicatorCellIndex;
    SUUIProgressIndicatorViewElement *_progressIndicatorElement;
    NSIndexPath *_reloadIndexPath;
}

@property (readonly, nonatomic) SUUICarouselPageComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)dealloc;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfCells;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)_currentPageIndex;
- (void)_fireCycleTimer;
- (struct CGSize { double x0; double x1; })_legacyItemSize;
- (double)_actualContentWidth;
- (void)_addImpressionForIndex:(long long)a0 toSession:(id)a1;
- (void)_cancelCycleTimer;
- (id)_carouselCollectionView;
- (Class)_cellClassForLockup:(id)a0;
- (Class)_cellClassForViewElement:(id)a0;
- (id)_dequeueCellForLockup:(id)a0 collectionView:(id)a1 indexPath:(id)a2;
- (id)_dequeueCellForViewElement:(id)a0 collectionView:(id)a1 indexPath:(id)a2;
- (BOOL)_indexPathIsProgressIndicator:(id)a0;
- (BOOL)_isItemEnabledAtIndexPath:(id)a0;
- (double)_legacyItemSpacing;
- (void)_loadMissingItemsFromIndex:(long long)a0 withReason:(long long)a1;
- (id)_missingItemLoader;
- (void)_reloadLegacySizing;
- (void)_reloadViewElementProperties;
- (void)_scrollToItemAtIndexPath:(id)a0 animated:(BOOL)a1;
- (void)_startCycleTimerIfNecessary;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (long long)applyUpdateType:(long long)a0;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)backgroundColorForIndexPath:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)collectionView:(id)a0 carouselLayout:(id)a1 willApplyLayoutAttributes:(id)a2;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (long long)defaultItemPinningStyle;
- (void)entityProvider:(id)a0 didInvalidateWithContext:(id)a1;
- (id)initWithPageComponent:(id)a0;
- (void)invalidateCachedLayoutInformation;
- (void)missingItemLoader:(id)a0 didLoadItems:(id)a1 invalidItemIdentifiers:(id)a2;
- (void)prefetchResourcesWithReason:(long long)a0;
- (void)willAppearInContext:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
