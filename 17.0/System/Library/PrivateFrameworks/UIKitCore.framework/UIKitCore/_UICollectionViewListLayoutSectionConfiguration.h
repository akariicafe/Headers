@class UIColor, NSArray, UICollectionView, NSString, _UIListSeparatorConfiguration;
@protocol NSCollectionLayoutEnvironment_Private, UITableConstants;

@interface _UICollectionViewListLayoutSectionConfiguration : NSObject <NSCopying>

@property (readonly, weak, nonatomic, getter=_collectionView) UICollectionView *collectionView;
@property (readonly, nonatomic, getter=_layoutEnvironment) id<NSCollectionLayoutEnvironment_Private> layoutEnvironment;
@property (readonly, nonatomic, getter=_constants) id<UITableConstants> constants;
@property (readonly, nonatomic, getter=_separatorConfigurationNoCopy) _UIListSeparatorConfiguration *_separatorConfigurationNoCopy;
@property (readonly, nonatomic, getter=_wantsSwipeActions) BOOL wantsSwipeActions;
@property (nonatomic, getter=_isAPIVersion) BOOL _apiVersion;
@property (copy, nonatomic, getter=_itemHeights, setter=_setItemHeights:) NSArray *itemHeights;
@property (copy, nonatomic) NSString *_headerElementKind;
@property (copy, nonatomic) NSString *_footerElementKind;
@property (retain, nonatomic) UIColor *_backgroundColor;
@property (copy, nonatomic, getter=_itemSeparatorHandler, setter=_setItemSeparatorHandler:) id /* block */ _itemSeparatorHandler;
@property (nonatomic) long long appearanceStyle;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL stylesFirstItemAsHeader;
@property (nonatomic) double rowHeight;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic) double sectionFooterHeight;
@property (nonatomic) double estimatedRowHeight;
@property (nonatomic) double estimatedSectionHeaderHeight;
@property (nonatomic) double estimatedSectionFooterHeight;
@property (nonatomic) double headerTopPadding;
@property (copy, nonatomic, getter=_separatorConfiguration, setter=_setSeparatorConfiguration:) _UIListSeparatorConfiguration *_separatorConfiguration;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } separatorInset;
@property (copy, nonatomic) id /* block */ separatorInsetProvider;
@property (copy, nonatomic) id /* block */ leadingSwipeActionsConfigurationProvider;
@property (copy, nonatomic) id /* block */ trailingSwipeActionsConfigurationProvider;
@property (copy, nonatomic) id /* block */ willBeginSwipingHandler;
@property (copy, nonatomic) id /* block */ didEndSwipingHandler;

+ (id)new;

- (id)_traitCollection;
- (double)_topContentInsetForGroupedAppearance;
- (id)_createSwipeActionsContainer;
- (id)init;
- (double)_separatorHeight;
- (id)initWithCollectionView:(id)a0;
- (BOOL)_shouldPinSupplementaries;
- (double)_defaultRowHeight;
- (BOOL)_usesSectionBackgroundDecoration;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_sectionContentInsetsForAppearanceStyleWithDefaultInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)_createSeparatorForBottom:(BOOL)a0;
- (long long)_defaultSeparatorStyleForAppearanceStyle:(long long)a0;
- (id)initWithAppearanceStyle:(long long)a0 layoutEnvironment:(id)a1;
- (double)_topContentInsetForPaddingAboveHeader;
- (void)_addSupplementaryItemsToLayout:(id)a0;
- (BOOL)_hasSupplementaryAsHeader;
- (double)_effectiveEstimatedSectionHeaderHeight;
- (long long)_defaultContentInsetsReference;
- (void).cxx_destruct;
- (BOOL)_hasHeaderOrFirstItemStyledAsHeader;
- (BOOL)_shouldDrawThickSeparators;
- (double)_defaultSectionHeaderHeight;
- (id)_generateLayoutGroup:(id)a0;
- (BOOL)_hasFooter;
- (double)_effectiveEstimatedRowHeight;
- (BOOL)_shouldSupplementariesFollowSectionInsets;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_sectionContentInsetsForVerticallySeparatedSectionsWithDefaultInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (double)_effectiveEstimatedSectionFooterHeight;
- (double)_defaultSectionFooterHeight;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
