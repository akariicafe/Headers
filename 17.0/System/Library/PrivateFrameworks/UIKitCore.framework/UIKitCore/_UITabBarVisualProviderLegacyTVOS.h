@class _UIBarBackground, UIMotionEffect, UIView, UIScrollView, _UIBarBackgroundLayoutLegacy;

@interface _UITabBarVisualProviderLegacyTVOS : _UITabBarVisualProvider {
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    UIView *_customBackgroundView;
    UIView *_accessoryView;
    UIScrollView *_itemsScrollView;
    UIView *_focusedItemHighlightView;
    UIMotionEffect *_focusedItemHighlightMotionEffect;
}

- (void)_shim_setShadowAlpha:(double)a0;
- (void)updateArchivedSubviews:(id)a0;
- (void)updateBackgroundGroupName;
- (id)_shim_accessoryView;
- (void)changeLayout;
- (void)changeItemsTo:(id)a0 removingItems:(id)a1 selectedItem:(id)a2 oldSelectedItem:(id)a3 animate:(BOOL)a4;
- (id)_shim_compatibilityBackgroundView;
- (void)changeAppearance;
- (void)teardown;
- (void)_shim_setCustomBackgroundView:(id)a0;
- (double)_shim_shadowAlpha;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateAccessoryView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_shadowFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 height:(double)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeGivenSize:(struct CGSize { double x0; double x1; })a0;
- (void)_shim_setAccessoryView:(id)a0;
- (id)preferredFocusedView;
- (void)_shim_updateTabBarItemView:(id)a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)changeSelectedItem:(id)a0 fromItem:(id)a1;
- (void)_updateBackground;
- (id)_focusedItemHighlightView;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)prepare;
- (BOOL)_shim_shadowHidden;
- (id)createViewForTabBarItem:(id)a0;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutRegion;
- (void)_shim_setShadowHidden:(BOOL)a0;
- (id)exchangeItem:(id)a0 withItem:(id)a1;
- (void)_shim_layoutItemsOnly;
- (void)_configureItems:(id)a0;
- (void)_layoutTabBarItems;
- (void)_applyAppearanceCustomizationsToItem:(id)a0;
- (BOOL)_focusedItemHighlightViewIsVisible;
- (id)_parentViewForItems;
- (void)_setFocusedItemHightlightVisible:(BOOL)a0;
- (void)_shim_updateFocusHighlightVisibility;
- (void)_updateFocusedItemHighlightFrame;
- (void)_updateFocusedItemHighlightViewWithInterfaceStyle:(long long)a0 visible:(BOOL)a1;
- (void)_updateHighlightMotionEffect;

@end
