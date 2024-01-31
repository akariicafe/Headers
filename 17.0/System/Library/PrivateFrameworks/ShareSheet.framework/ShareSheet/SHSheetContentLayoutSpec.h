@class UIColor, UIImageSymbolConfiguration, UITraitCollection;

@interface SHSheetContentLayoutSpec : NSObject

@property (nonatomic) double horizontalCellWidth;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } topContentSectionHeaderInsets;
@property (nonatomic) double customViewSectionHeight;
@property (nonatomic) double customViewVerticalInset;
@property (readonly, nonatomic) double estimatedHeaderHeight;
@property (readonly, nonatomic) double estimatedFooterHeight;
@property (readonly, nonatomic) double horizontalSectionBottomInset;
@property (readonly, nonatomic) double peopleSectionHeight;
@property (readonly, nonatomic) double peopleIconWidth;
@property (readonly, nonatomic) double sharingAppIconWidth;
@property (readonly, nonatomic) double actionInterGroupInset;
@property (readonly, nonatomic) double estimatedActionFooterHeight;
@property (readonly, nonatomic) double heroActionItemSpacing;
@property (readonly, nonatomic) BOOL isAccessibilityContentSize;
@property (readonly, nonatomic) UIColor *editTintColor;
@property (readonly, nonatomic) UIColor *footerBackgroundColor;
@property (readonly, nonatomic) UIImageSymbolConfiguration *activityImageSymbolConfiguration;

- (void).cxx_destruct;
- (id)actionsLayoutSectionConfigurationWithEnvironment:(id)a0;
- (double)horizontalCellWidthForContentWidth:(double)a0 sizeOffset:(double)a1;
- (id)initWithTraitCollection:(id)a0 tintColor:(id)a1;
- (long long)numberOfHorizontalItemsPerGroupForContentWidth:(double)a0;
- (BOOL)shouldUseNarrowLayoutForHeroActionsWithContainerWidth:(double)a0;

@end
