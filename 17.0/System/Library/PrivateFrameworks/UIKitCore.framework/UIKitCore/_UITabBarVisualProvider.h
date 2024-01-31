@class NSString, UITabBar;
@protocol _UIBarAppearanceChangeObserver;

@interface _UITabBarVisualProvider : NSObject

@property (readonly, nonatomic) UITabBar *tabBar;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) BOOL useModernAppearance;
@property (readonly, nonatomic) id<_UIBarAppearanceChangeObserver> appearanceObserver;
@property (nonatomic) double minimumWidthForHorizontalLayout;
@property (nonatomic) double backgroundTransitionProgress;

+ (BOOL)shouldDecodeSubviews;

- (void)_shim_setShadowAlpha:(double)a0;
- (void)updateArchivedSubviews:(id)a0;
- (void)updateBackgroundGroupName;
- (double)backgroundTransitionProgress;
- (id)_shim_accessoryView;
- (void)setBackgroundTransitionProgress:(double)a0;
- (void)changeLayout;
- (void)changeItemsTo:(id)a0 removingItems:(id)a1 selectedItem:(id)a2 oldSelectedItem:(id)a3 animate:(BOOL)a4;
- (id)traitCollectionForChild:(id)a0 baseTraitCollection:(id)a1;
- (id)_shim_compatibilityBackgroundView;
- (void)changeAppearance;
- (id)defaultTintColor;
- (void)teardown;
- (void)_shim_setCustomBackgroundView:(id)a0;
- (double)_shim_shadowAlpha;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeGivenSize:(struct CGSize { double x0; double x1; })a0;
- (void)_shim_setAccessoryView:(id)a0;
- (id)preferredFocusedView;
- (void)_shim_updateTabBarItemView:(id)a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)updateConstraints;
- (double)_shim_heightForCustomizingItems;
- (void)changeSelectedItem:(id)a0 fromItem:(id)a1;
- (void)setBackgroundTransitionProgress:(double)a0 forceUpdate:(BOOL)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)prepare;
- (BOOL)_shim_shadowHidden;
- (id)createViewForTabBarItem:(id)a0;
- (void)layoutSubviews;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)_shim_setShadowHidden:(BOOL)a0;
- (id)exchangeItem:(id)a0 withItem:(id)a1;
- (double)defaultAnimationDuration;
- (void)_shim_layoutItemsOnly;
- (id)initWithTabBar:(id)a0;
- (id)_shim_shadowView;
- (void)_shim_updateFocusHighlightVisibility;
- (void)changeItemsTo:(id)a0 removingItems:(id)a1 selectedItem:(id)a2 animate:(BOOL)a3;
- (void)tabBarSizeChanged:(struct CGSize { double x0; double x1; })a0;
- (BOOL)wantsFocus;

@end
