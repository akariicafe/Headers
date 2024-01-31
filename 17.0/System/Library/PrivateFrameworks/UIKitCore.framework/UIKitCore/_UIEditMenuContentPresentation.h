@class _UIEditMenuContainerView, _UIEditMenuPresentationLayout, _UIEditMenuListView, UIEditMenuConfiguration;

@interface _UIEditMenuContentPresentation : _UIEditMenuPresentation <_UIEditMenuListViewDelegate>

@property (retain, nonatomic) UIEditMenuConfiguration *dismissingConfiguration;
@property (readonly, nonatomic) _UIEditMenuListView *currentListView;
@property (retain, nonatomic) _UIEditMenuPresentationLayout *currentMenuLayout;
@property (retain, nonatomic) _UIEditMenuContainerView *containerView;
@property (nonatomic) long long userInterfaceStyle;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuFrameInCoordinateSpace:(id)a0;
- (void).cxx_destruct;
- (void)_displayMenu:(id)a0 reason:(long long)a1;
- (void)_displayPreparedMenu:(id)a0 titleView:(id)a1 reason:(long long)a2 didDismissMenu:(BOOL)a3 configuration:(id)a4;
- (long long)_listViewAxisForTraitCollection:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_preferredContentInsetsForContainerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_queryMenuSourceRectForConfiguration:(id)a0 isValid:(out BOOL *)a1;
- (void)_reloadMenuLayoutWithSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (id)_resolvedLayoutForMenuWithConfiguration:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 axis:(long long)a2;
- (void)_resolvedMenuPositionForArrowDirection:(long long)a0 availableBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 verticalSpaceRequired:(double)a3 menuPosition:(inout struct CGPoint { double x0; double x1; } *)a4 anchorPoint:(inout struct CGPoint { double x0; double x1; } *)a5;
- (BOOL)_shouldReuseVisibleMenu;
- (void)_updateMenuPositionAnimated:(BOOL)a0 forced:(BOOL)a1;
- (BOOL)canPresentEditMenu;
- (id)configureContainerViewWithConfiguration:(id)a0;
- (void)contentSizeCategoryDidChangeInEditMenuListView:(id)a0;
- (void)didTransitionFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)displayMenu:(id)a0 configuration:(id)a1;
- (void)editMenuListView:(id)a0 didSelectMenuElement:(id)a1;
- (void)hideMenuWithReason:(long long)a0;
- (long long)initialUserInterfaceStyle;
- (void)replaceVisibleMenuWithMenu:(id)a0 reason:(long long)a1;
- (void)sourceViewDidUpdateFromTraitCollection:(id)a0;
- (void)teardownContainerView;
- (void)updateMenuPositionAnimated:(BOOL)a0;
- (BOOL)wantsPasteTouchAuthenticationInEditMenuListView:(id)a0;

@end
