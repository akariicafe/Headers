@class UIColor, IKViewElementStyle, SKUIViewElementLayoutContext, UICollectionView, SKUIShelfLayoutData, SKUIStorePageSectionContext;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, SKUIShelfPageSectionConfigurationDataSource;

@interface SKUIShelfPageSectionConfiguration : NSObject {
    long long _lockupType;
    UICollectionView *_shelfCollectionView;
}

@property (retain, nonatomic) SKUIViewElementLayoutContext *cellLayoutContext;
@property (weak, nonatomic) id<SKUIShelfPageSectionConfigurationDataSource> dataSource;
@property (readonly, nonatomic) UICollectionView *existingShelfCollectionView;
@property (nonatomic) BOOL needsShelfCollectionViewReload;
@property (nonatomic) BOOL needsShelfCollectionViewLayout;
@property (readonly, nonatomic) unsigned long long numberOfIterations;
@property (retain, nonatomic) SKUIStorePageSectionContext *pageSectionContext;
@property (nonatomic) BOOL rendersWithParallax;
@property (nonatomic) BOOL rendersWithPerspective;
@property (nonatomic) long long sectionIndex;
@property (readonly, nonatomic) UICollectionView *shelfCollectionView;
@property (retain, nonatomic) UIColor *shelfCollectionViewBackgroundColor;
@property (nonatomic) id<UICollectionViewDataSource> shelfCollectionViewDataSource;
@property (nonatomic) id<UICollectionViewDelegate> shelfCollectionViewDelegate;
@property (readonly, nonatomic) SKUIShelfLayoutData *shelfLayoutData;
@property (retain, nonatomic) IKViewElementStyle *shelfViewElementStyle;
@property (nonatomic, getter=isTopSection) BOOL topSection;
@property (readonly, nonatomic) BOOL wantsZoomingShelfLayout;
@property (readonly, nonatomic) double zoomingShelfLayoutFocusedItemHorizontalCenterOffset;
@property (readonly, nonatomic) double zoomingShelfLayoutInterItemSpacing;
@property (readonly, nonatomic) double zoomingShelfLayoutItemWidth;
@property (readonly, nonatomic) double zoomingShelfLayoutScaledItemWidth;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (Class)_cellClassForEffectiveShelfItemViewElement:(id)a0;
- (double)_columnSpacingForShelfItemViewElements:(id)a0;
- (id)_dequeueCellForLockup:(id)a0 collectionView:(id)a1 indexPath:(id)a2;
- (Class)_lockupCellClassWithLockup:(id)a0;
- (double)_perspectiveHeightForContentSize:(double)a0;
- (id)_reloadShelfLayoutDataWithNumberOfShelfItems:(long long)a0;
- (id)_shelfItemViewElementAtIndex:(long long)a0;
- (id)_styledShelfCollectionViewLayoutForExistingLayout:(id)a0;
- (void)_updateShelfLayoutDataContentInset;
- (id)actualIndexPathOfShelfItemClosestToVisibleBoundsForNormalizedIndexPath:(id)a0 numberOfShelfItems:(unsigned long long)a1;
- (id)backgroundColorForShelfViewElement:(id)a0;
- (id)cellForShelfItemViewElement:(id)a0 indexPath:(id)a1;
- (id)cellForShelfViewElement:(id)a0 indexPath:(id)a1;
- (struct CGSize { double x0; double x1; })cellSizeForShelfViewElement:(id)a0 indexPath:(id)a1 numberOfShelfItems:(long long)a2;
- (void)collectionViewWillApplyLayoutAttributes:(id)a0;
- (id)effectiveViewElementForShelfItemViewElement:(id)a0;
- (long long)lockupTypeForLockup:(id)a0;
- (id)normalizedShelfItemIndexPathFromActualIndexPath:(id)a0 numberOfShelfItems:(unsigned long long)a1;
- (unsigned long long)numberOfCellsForNumberOfShelfItems:(unsigned long long)a0;
- (long long)numberOfSectionCells;
- (BOOL)prefetchResourcesForShelfItemViewElement:(id)a0 reason:(long long)a1;
- (void)registerReusableClassesForCollectionView:(id)a0;
- (void)reloadLockupTypeForShelfViewElement:(id)a0;
- (void)reloadShelfLayoutDataForShelfViewElement:(id)a0 withShelfItemViewElements:(id)a1 requestCellLayouts:(BOOL)a2 numberOfShelfItems:(long long)a3;
- (void)requestCellLayoutForViewElement:(id)a0 withColumnWidth:(double)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInsetAdjustedFromValue:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forShelfViewElement:(id)a1 withSectionIndex:(long long)a2;
- (void)shelfItemsCollectionView:(id)a0 willApplyLayoutAttributes:(id)a1 forViewElement:(id)a2 withItemIndex:(long long)a3;
- (BOOL)supportsDuplicateShelfItems;

@end
