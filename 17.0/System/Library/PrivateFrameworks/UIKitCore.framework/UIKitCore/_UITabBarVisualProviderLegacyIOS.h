@class NSString, _UIBarBackgroundLayout, UIPointerInteraction, UIView, _UIBarBackground;

@interface _UITabBarVisualProviderLegacyIOS : _UITabBarVisualProvider <_UIBarAppearanceChangeObserver, UIPointerInteractionDelegate, PTSettingsKeyObserver> {
    UIPointerInteraction *_pointerInteraction;
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_backgroundViewLayout;
    UIView *_customBackgroundView;
    UIView *_accessoryView;
    double _minimumWidthForHorizontalLayout;
    BOOL _useModernAppearance;
    long long _style;
    double _backgroundTransitionProgress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_shim_setShadowAlpha:(double)a0;
- (void)updateArchivedSubviews:(id)a0;
- (void)updateBackgroundGroupName;
- (double)backgroundTransitionProgress;
- (void)appearance:(id)a0 categoriesChanged:(long long)a1;
- (id)_shim_accessoryView;
- (void)setBackgroundTransitionProgress:(double)a0;
- (void)changeLayout;
- (void)changeItemsTo:(id)a0 removingItems:(id)a1 selectedItem:(id)a2 oldSelectedItem:(id)a3 animate:(BOOL)a4;
- (id)traitCollectionForChild:(id)a0 baseTraitCollection:(id)a1;
- (id)_shim_compatibilityBackgroundView;
- (void)changeAppearance;
- (id)appearanceObserver;
- (void)teardown;
- (void)_shim_setCustomBackgroundView:(id)a0;
- (double)_shim_shadowAlpha;
- (void)traitCollectionDidChange:(id)a0;
- (void)setUseModernAppearance:(BOOL)a0;
- (void)_updateAccessoryView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_shadowFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 height:(double)a1;
- (id)_preferredFocusedViewCarplay;
- (void)_updateAppearanceForTransitionFromItem:(id)a0 toItem:(id)a1;
- (void)_updateBackgroundLegacy;
- (long long)_styleForTraitCollection:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeGivenSize:(struct CGSize { double x0; double x1; })a0;
- (void)_shim_setAccessoryView:(id)a0;
- (id)preferredFocusedView;
- (void)_shim_updateTabBarItemView:(id)a0;
- (void)_updateBackgroundModern;
- (void)setSemanticContentAttribute:(long long)a0;
- (double)_shim_heightForCustomizingItems;
- (void)changeSelectedItem:(id)a0 fromItem:(id)a1;
- (void)_updateBackgroundAnimated:(BOOL)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)_preferredFocusedViewiOS;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)setBackgroundTransitionProgress:(double)a0 forceUpdate:(BOOL)a1 animated:(BOOL)a2;
- (id)_focusedItemHighlightView;
- (void).cxx_destruct;
- (void)setMinimumWidthForHorizontalLayout:(double)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (BOOL)useModernAppearance;
- (void)prepare;
- (BOOL)_shim_shadowHidden;
- (id)createViewForTabBarItem:(id)a0;
- (double)minimumWidthForHorizontalLayout;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutRegion;
- (void)_shim_setShadowHidden:(BOOL)a0;
- (id)exchangeItem:(id)a0 withItem:(id)a1;
- (void)_shim_layoutItemsOnly;
- (void)_configureItems:(id)a0;
- (void)_layoutTabBarItems;
- (void)_applyAppearanceCustomizationsToItem:(id)a0;

@end
