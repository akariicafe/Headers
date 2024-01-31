@class UIColor, NSArray, SKUIViewElementLayoutContext, SKUIStorePageSectionContext;
@protocol SKUIGridViewElementPageSectionConfigurationDataSource;

@interface SKUIGridViewElementPageSectionConfiguration : NSObject {
    long long _cardVerticalSpacingStyle;
    double _cellContentWidth;
    BOOL _cellPaddingNeedsReloading;
    double _cellPaddingInteriorHorizontal;
    double _cellPaddingLeftEdgeHorizontal;
    double _cellPaddingRightEdgeHorizontal;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _gridViewElementStyleElementPadding;
    double _gridViewElementStyleItemWidth;
    BOOL _gridViewElementStyleItemWidthIsPercentage;
    BOOL _gridIsEdgeToEdge;
    BOOL _hasGridViewElementStyle;
    BOOL _hasHeader;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _separatorMargins;
    long long _lockupType;
    double _minimumCellHeight;
    unsigned long long _numberOfGridItems;
    NSArray *_positions;
    UIColor *_separatorColor;
    long long _separatorStyle;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _separatorWidths;
    NSArray *_viewElements;
    struct { unsigned char configurePositionForItemAtIndexPath : 1; } _dataSourceRespondsToSelectorFlags;
}

@property (retain, nonatomic) SKUIViewElementLayoutContext *cellLayoutContext;
@property (readonly, nonatomic) double columnContentWidth;
@property (readonly, nonatomic) double columnWidth;
@property (nonatomic) long long numberOfColumns;
@property (retain, nonatomic) SKUIStorePageSectionContext *pageSectionContext;
@property (nonatomic) BOOL rendersWithPerspective;
@property (readonly, nonatomic) BOOL showsEditMode;
@property (weak, nonatomic) id<SKUIGridViewElementPageSectionConfigurationDataSource> dataSource;

- (void).cxx_destruct;
- (double)_cellPaddingRightEdgeHorizontal;
- (long long)_numberOfColumnsForWidth:(double)a0 style:(id)a1;
- (id)_cardArtworkBoundingSizeForIndexPath:(id)a0;
- (Class)_cardCellClassForCard:(id)a0;
- (double)_cellContentWidth;
- (double)_cellHeightForViewElement:(id)a0 width:(double)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_cellInsetsForViewElement:(id)a0 indexPath:(id)a1;
- (double)_cellPaddingInteriorHorizontal;
- (double)_cellPaddingLeftEdgeHorizontal;
- (double)_columnContentWidthPaddingForWidth:(double)a0;
- (void)_enumerateViewElementsForRowOfIndexPath:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_isContainedWithinExploreTemplateWithGridViewElement:(id)a0;
- (id)_lockupCellReuseIdentifierWithLockup:(id)a0;
- (long long)_lockupTypeForLockup:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_normalizedContentInsetForViewElement:(id)a0 indexPath:(id)a1;
- (void)_reloadCellPaddingIfNeeded;
- (BOOL)_useOrdinalPadding;
- (id)backgroundColorForViewElement:(id)a0;
- (Class)cellClassForViewElement:(id)a0;
- (id)cellForViewElement:(id)a0 indexPath:(id)a1;
- (struct CGSize { double x0; double x1; })cellSizeForViewElement:(id)a0 indexPath:(id)a1;
- (void)collectionViewWillApplyLayoutAttributes:(id)a0;
- (void)configureCell:(id)a0 forViewElement:(id)a1 indexPath:(id)a2;
- (Class)lockupCellClassWithLockup:(id)a0;
- (long long)positionForIndexPath:(id)a0;
- (void)registerReusableClassesForCollectionView:(id)a0;
- (void)reloadCellWithIndexPath:(id)a0 forViewElement:(id)a1 reason:(long long)a2;
- (void)requestCellLayoutForViewElement:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInsetAdjustedFromValue:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forGridViewElement:(id)a1;
- (void)updateLayoutPropertiesForGridViewElement:(id)a0;
- (void)updateStylePropertiesForGridViewElement:(id)a0 gridItemViewElements:(id)a1 numberOfGridItems:(unsigned long long)a2;
- (BOOL)viewElementIsStandardCard:(id)a0;

@end
