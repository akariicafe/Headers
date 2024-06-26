@class NSMapTable, UIFont, UIVisualEffect, NSDictionary, _UIKeyShortcutHUDShortcutCell, _UIKeyShortcutHUDToolbarSearchCell, NSMutableArray, UIView, UIColor, _UIKeyShortcutHUDToolbarCategoryCell, UITraitCollection, _UIKeyShortcutHUDClientTraits, _UIKeyShortcutHUDMenu, _UIKeyShortcutHUDShortcutColumnMetrics;

@interface UIKeyShortcutHUDMetrics : NSObject

@property (class, weak, nonatomic) UIKeyShortcutHUDMetrics *currentMetrics;

@property (readonly, nonatomic) _UIKeyShortcutHUDShortcutCell *selfSizingShortcutCell;
@property (readonly, nonatomic) _UIKeyShortcutHUDToolbarSearchCell *selfSizingSearchCell;
@property (readonly, nonatomic) _UIKeyShortcutHUDToolbarCategoryCell *selfSizingToolbarCategoryCell;
@property (retain, nonatomic) NSMapTable *shortcutCellMetricsMap;
@property (retain, nonatomic) NSMapTable *shortcutCellIndexPathsMap;
@property (nonatomic) double computedHUDWidthForBaseMenu;
@property (readonly, nonatomic) _UIKeyShortcutHUDMenu *displayedMenu;
@property (readonly, nonatomic, getter=isSearching) BOOL searching;
@property (readonly, nonatomic, getter=areShortcutAndAlternateColumnWidthsCombined) BOOL combinedShortcutAndAlternateColumnWidths;
@property (retain, nonatomic) NSMutableArray *displayedMenuColumnMetrics;
@property (retain, nonatomic) NSMutableArray *displayedMenuCategoryOffsets;
@property (retain, nonatomic) _UIKeyShortcutHUDShortcutColumnMetrics *displayedSearchColumnMetrics;
@property (readonly, nonatomic, getter=isHUDShrunkToFitHorizontally) BOOL hudShrunkToFitHorizontally;
@property (readonly, nonatomic) unsigned long long baseNumberOfVisibleColumns;
@property (readonly, nonatomic) unsigned long long contentSizeAdjustedMaxNumberOfCellsPerColumn;
@property (readonly, nonatomic) double emptyColumnWidth;
@property (readonly, nonatomic) double standardMenuPadding;
@property (readonly, nonatomic) double standardPlatterStrokeWidth;
@property (readonly, nonatomic) double searchModeMaximumMenuPanelHeight;
@property (readonly, nonatomic) double menuBaseVerticalContentInset;
@property (readonly, nonatomic) double searchModeMenuBaseVerticalContentInset;
@property (weak, nonatomic) _UIKeyShortcutHUDMenu *baseMenu;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (weak, nonatomic) _UIKeyShortcutHUDClientTraits *clientTraits;
@property (nonatomic) double availableVerticalSpace;
@property (weak, nonatomic) UIView *selfSizingPlayground;
@property (readonly, nonatomic) unsigned long long maxNumberOfCellsPerColumn;
@property (readonly, nonatomic) unsigned long long numCellsPerColumn;
@property (readonly, nonatomic) double standardHUDWidth;
@property (readonly, nonatomic) double searchModeStandardHUDWidth;
@property (readonly, nonatomic) double standardMenuToolbarSpacing;
@property (readonly, nonatomic) double minimumScreenEdgeDistance;
@property (readonly, nonatomic) double minimumBottomScreenEdgeDistance;
@property (readonly, nonatomic) UIVisualEffect *platterVisualEffect;
@property (readonly, nonatomic) double platterZPosition;
@property (readonly, nonatomic) NSDictionary *platterSeparatedOptions;
@property (readonly, nonatomic) double menuPlatterCornerRadius;
@property (readonly, nonatomic) double toolbarPlatterCornerRadius;
@property (readonly, nonatomic) double platterShadowRadius;
@property (readonly, nonatomic) double platterShadowOpacity;
@property (readonly, nonatomic) double standardMenuPanelHeight;
@property (readonly, nonatomic) double searchModePreferredMenuPanelWidth;
@property (readonly, nonatomic) double searchModePreferredMenuPanelHeight;
@property (readonly, nonatomic) double hiddenMenuPanelWidth;
@property (readonly, nonatomic) double hiddenMenuPanelHeight;
@property (readonly, nonatomic) unsigned long long menuPanelCornerMask;
@property (readonly, nonatomic) double menuPanelStrokeWidth;
@property (readonly, nonatomic) double standardToolbarContentHeight;
@property (readonly, nonatomic) BOOL shouldExtendToolbarThroughSafeArea;
@property (readonly, nonatomic) unsigned long long toolbarPanelCornerMask;
@property (readonly, nonatomic) double toolbarPanelStrokeWidth;
@property (readonly, nonatomic) unsigned long long maxNumberOfCellsInSearchResults;
@property (readonly, nonatomic) BOOL shouldAlignShortcutModifiersAndInputInColumn;
@property (readonly, nonatomic) double menuHorizontalContentInset;
@property (readonly, nonatomic) double menuTopContentInset;
@property (readonly, nonatomic) double menuBottomContentInset;
@property (readonly, nonatomic) double searchModeMenuTopContentInset;
@property (readonly, nonatomic) double searchModeMenuBottomContentInset;
@property (readonly, nonatomic) double menuColumnSpacing;
@property (readonly, nonatomic) double toolbarContentInset;
@property (readonly, nonatomic) BOOL toolbarStylesCategoriesAsPageControl;
@property (readonly, nonatomic) double separatorWidth;
@property (readonly, nonatomic) double menuSeparatorHorizontalMargin;
@property (readonly, nonatomic) UIColor *menuSeparatorColor;
@property (readonly, nonatomic) UIVisualEffect *menuSeparatorVisualEffect;
@property (readonly, nonatomic) double toolbarSeparatorVerticalMargin;
@property (readonly, nonatomic) UIColor *toolbarSeparatorColor;
@property (readonly, nonatomic) UIVisualEffect *toolbarSeparatorVisualEffect;
@property (readonly, nonatomic) double displayedMenuContentWidth;
@property (readonly, nonatomic) double menuCellHorizontalContentMargin;
@property (readonly, nonatomic) double minShortcutNameKeyCombinationSpacing;
@property (readonly, nonatomic) double standardShortcutInputReservedWidth;
@property (readonly, nonatomic) double standardShortcutModifierInputMinimumSpacing;
@property (readonly, nonatomic) double shortcutTitleToSubtitleVerticalPadding;
@property (readonly, nonatomic) double cellFlashDuration;
@property (readonly, nonatomic) double menuCellCornerRadius;
@property (readonly, nonatomic) double toolbarCellCornerRadius;
@property (readonly, nonatomic) double categoryHeaderVerticalTextAdjustment;
@property (readonly, nonatomic) BOOL shouldMirrorShortcutInputs;
@property (readonly, nonatomic) BOOL shouldDisplayEscShortcutAlternative;
@property (readonly, nonatomic) BOOL shouldDisplayGlobeModiferAsGlobeSymbol;
@property (readonly, nonatomic) double minShortcutCellWidth;
@property (readonly, nonatomic) double maxShortcutCellWidth;
@property (readonly, nonatomic) double menuCellHeight;
@property (readonly, nonatomic) double searchButtonWidth;
@property (readonly, nonatomic) double widestToolbarCategoryCellWidth;
@property (readonly, nonatomic) long long hudBlurStyle;
@property (readonly, nonatomic) UIColor *platterStrokeColor;
@property (readonly, nonatomic) UIColor *standardHUDTextColor;
@property (readonly, nonatomic) UIColor *shortcutSubtitleTextColor;
@property (readonly, nonatomic) UIColor *searchHUDTextColor;
@property (readonly, nonatomic) UIFont *standardHUDFont;
@property (readonly, nonatomic) UIFont *shortcutSubtitleFont;
@property (readonly, nonatomic) UIFont *categoryHeaderFont;
@property (readonly, nonatomic) UIFont *keyShortcutModifiersFont;
@property (readonly, nonatomic) UIFont *keyShortcutInputSymbolFont;
@property (readonly, nonatomic) UIFont *keyShortcutInputCharacterFont;
@property (readonly, nonatomic) UIFont *keyShortcutInputWordFont;
@property (readonly, nonatomic) UIFont *cancelButtonFont;
@property (readonly, nonatomic) UIFont *toolbarCategoryRegularFont;
@property (readonly, nonatomic) UIFont *toolbarCategoryVisibleFont;

- (void).cxx_destruct;
- (void)_computeAndStoreCellMetricsForShortcut:(id)a0 indexPath:(id)a1;
- (double)_computedWidthForCategoryAtIndex:(unsigned long long)a0;
- (void)_setDisplayedMenu:(id)a0 searching:(BOOL)a1 combinedShortcutAndAlternateColumnWidths:(BOOL)a2;
- (double)_shortcutWidthAdjustmentForMetrics:(id)a0 shortcutWidth:(double)a1;
- (double)_toolbarContentToWindowBottomEdgeSpacing;
- (double)_toolbarDistanceFromBottomOfWindow;
- (double)_toolbarHeight;
- (void)_updateBaseMenuMetrics;
- (void)_updateDisplayedMenuMetrics;
- (void)_updateDisplayedSearchMenuMetrics;
- (void)_updateDisplayedStandardMenuMetrics;
- (unsigned long long)categoryIndexAtHorizontalOffset:(double)a0;
- (double)cellWidthForShortcut:(id)a0;
- (void)computeOneTimeMetrics;
- (double)contentSizeScaledMetric:(double)a0;
- (double)headerWidthForCategory:(id)a0;
- (double)horizontalOffsetForCategoryAtIndex:(unsigned long long)a0;
- (double)inputWidthForShortcut:(id)a0;
- (double)modifiersWidthForShortcut:(id)a0;
- (void)setDisplayedMenu:(id)a0 searching:(BOOL)a1;

@end
