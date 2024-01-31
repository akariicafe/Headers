@class _UIButtonBarSpacerLayout, UILayoutGuide, NSMapTable, UIBarButtonItemGroup, NSMutableArray, _UIButtonBarLayout;

@interface _UIButtonBarItemGroupLayout : _UIButtonBarLayout {
    NSMapTable *_itemLayoutMap;
    NSMutableArray *_itemLayouts;
    NSMutableArray *_configuredItemLayouts;
    _UIButtonBarLayout *_representativeLayout;
    _UIButtonBarSpacerLayout *_leadingSpacerLayout;
}

@property (readonly, nonatomic) UIBarButtonItemGroup *group;
@property (readonly, nonatomic) UILayoutGuide *groupSizeGuide;
@property (nonatomic) BOOL critical;
@property (nonatomic) BOOL fixed;
@property (nonatomic) BOOL compact;
@property (nonatomic) BOOL spilled;
@property (nonatomic) BOOL useGroupSizing;
@property (nonatomic) BOOL suppressSpacing;
@property (nonatomic) BOOL suppressCustomSpacing;
@property (nonatomic) long long leadingSpacerType;
@property (copy, nonatomic) id /* block */ itemViewGenerator;
@property (readonly, nonatomic) double compactWidth;
@property (readonly, nonatomic) double expandedWidth;

- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)a0;
- (BOOL)isSpaceLayout;
- (void)_configure;
- (void)_addConstraintsToActivate:(id)a0 toDeactivate:(id)a1;
- (void)_addLayoutViews:(id)a0;
- (BOOL)isGroupLayout;
- (void)dirtyLayoutForPlainAppearanceChange:(BOOL)a0 doneAppearanceChanged:(BOOL)a1;
- (void)_addLayoutGuides:(id)a0;
- (id)initWithLayoutMetrics:(id)a0;
- (id)layoutForBarButtonItem:(id)a0;
- (id)subLayouts;
- (BOOL)shouldHorizontallyCenterView:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)layoutsForSpacerItem:(id)a0;
- (id)initWithLayoutMetrics:(id)a0 barButtonItemGroup:(id)a1;
- (void)recalculateLayoutWidthsGivenItemSpaceWidth:(double)a0;
- (id)_newLayoutForBarButtonItem:(id)a0 useGroupSizing:(BOOL)a1;
- (void)_iterateConfiguredLayouts:(id /* block */)a0;
- (id)_representativeLayout;
- (id)_itemLayouts;

@end
