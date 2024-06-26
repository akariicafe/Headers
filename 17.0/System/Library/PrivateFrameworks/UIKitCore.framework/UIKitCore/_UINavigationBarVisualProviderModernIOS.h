@class UIBarButtonItem, UILabel, _UINavigationBarTitleRenamerSession, _UIBarBackground, _UINavigationBarTransitionContext, _UINavigationBarModernPromptView, _UINavigationBarLargeTitleView, UIWindowSceneDragInteraction, _UIPointerInteractionAssistant, UIView, NSString, _UINavigationBarContentView, _UIBarCustomizer, _UIBarCustomizationSession, UIFocusContainerGuide, _UINavigationBarTitleRenamer, _UINavigationControllerRefreshControlHost;

@interface _UINavigationBarVisualProviderModernIOS : _UINavigationBarVisualProvider <_UINavigationBarTitleRenamerDelegate, _UIBarCustomizerDelegate, _UINavigationBarContentViewDelegate, _UINavigationItemChangeObserver, _UIBarAppearanceChangeObserver, _UINavigationControllerRefreshControlHostDelegate, _UIBasicAnimationFactory> {
    _UIBarBackground *_backgroundView;
    _UINavigationBarContentView *_contentView;
    _UINavigationBarLargeTitleView *_largeTitleView;
    _UINavigationBarModernPromptView *_promptView;
    _UIPointerInteractionAssistant *_assistant;
    UILabel *_weeTitleLabel;
    _UINavigationBarTransitionContext *_transitionContext;
    struct CGSize { double width; double height; } _previousBarSize;
    double _backgroundAlpha;
    double _titleAlpha;
    double _shadowAlpha;
    BOOL _hasIdiom;
    BOOL _runningPaletteBasedSearchPresentation;
    BOOL _useInlineBackgroundHeightWhenLarge;
    BOOL _backgroundTransparentWhenNotCollapsed;
    BOOL _providesExtraSpaceForExcessiveLineHeights;
    BOOL _isObservingDidEncounterFirstTitleWithExcessiveHeightChanged;
    BOOL _useModernAppearanceAPI;
    BOOL _forceScrollEdgeAppearance;
    long long _appearanceAPIVersion;
    UIBarButtonItem *_staticNavBarButtonItem;
    UIFocusContainerGuide *_contentFocusContainerGuide;
    _UIBarCustomizer *_customizer;
    _UIBarCustomizationSession *_currentCustomizationSession;
    UIView *_customizationContainerView;
    _UINavigationBarTitleRenamer *_titleRenamer;
    _UINavigationBarTitleRenamerSession *_titleRenamerSession;
    UIWindowSceneDragInteraction *_windowDragClientInteraction;
    BOOL _usesBarBackground;
    _UINavigationControllerRefreshControlHost *_refreshControlHost;
}

@property (readonly, nonatomic) double horizontalMarginAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChangeOnSubtree:(id)a0;
- (double)heightForRestoringFromCancelledTransition;
- (void)_installContentClippingView:(id)a0;
- (void)endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (void)_shim_setShadowAlpha:(double)a0;
- (void)_beginRenaming;
- (BOOL)_shouldAnimateAdditivelyForView:(id)a0 withKeyPath:(id)a1;
- (void)prepareForPush;
- (BOOL)_accessibility_shouldBeginHUDGestureAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateArchivedSubviews:(id)a0;
- (void)_layoutInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStaticNavBarButtonItem:(id)a0;
- (BOOL)isContentViewHidden;
- (BOOL)navigationItemIsBackItem:(id)a0;
- (BOOL)shouldFadeStaticNavBarButton;
- (void)updateBackgroundGroupName;
- (void)navigationItemUpdatedTitleContent:(id)a0 animated:(BOOL)a1;
- (BOOL)isInCustomization;
- (id)barCustomizer:(id)a0 parentTraitEnvironmentForSession:(id)a1;
- (BOOL)scrollEdgeAppearanceHasChromelessBehavior;
- (BOOL)shouldSearchControllerDeferPresentationTransitionForNavigationItem:(id)a0;
- (double)_contentBackgroundExtension;
- (void)animateForSearchPresentation:(BOOL)a0;
- (void)appearance:(id)a0 categoriesChanged:(long long)a1;
- (id)_compatibleDefaultTextColor;
- (long long)appearanceAPIVersion;
- (void)refreshSearchSuggestionsMenuAfterGeometryChange;
- (BOOL)wantsLargeTitleDisplayed;
- (BOOL)staticNavBarButtonLingers;
- (id)refreshControlHost;
- (void)changeLayout;
- (unsigned long long)largeTitleStyle;
- (void)presentHostedSearchWithTransitionCoordinator:(id)a0;
- (void)setTitleAlpha:(double)a0;
- (void)deferSearchSuggestionsMenuRefreshForGeometryChange;
- (struct { double x0; double x1; double x2; })layoutHeightsFittingWidth:(double)a0;
- (double)navItemContentLayoutGuideAnimationDistance;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })resolvedLargeTitleMargins;
- (void)setUseInlineBackgroundHeightWhenLarge:(BOOL)a0;
- (id)traitCollectionForChild:(id)a0 baseTraitCollection:(id)a1;
- (struct CGPoint { double x0; double x1; })contentViewLayoutFrameOrigin;
- (BOOL)navigationItemIsTopItem:(id)a0;
- (void)provideViewsForContents:(id)a0 topItem:(id)a1 backItem:(id)a2;
- (id)_shim_compatibilityBackgroundView;
- (void)recordBarSize:(struct CGSize { double x0; double x1; })a0;
- (void)popAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (double)backgroundAlpha;
- (void)_removeContentClippingView;
- (void)_refreshBackButtonMenu;
- (void)navigationItem:(id)a0 appearance:(id)a1 categoriesChanged:(long long)a2;
- (void)setNeedsStaticNavBarButtonUpdate;
- (double)leadingMarginForContentViewsWithContentMargin:(double)a0;
- (BOOL)forceScrollEdgeAppearance;
- (void)removeContentForItem:(id)a0;
- (void)updateSearchBarForPlacementChangeIfApplicable;
- (void)barDidAddSubview:(id)a0;
- (void)changeAppearance;
- (BOOL)useInlineBackgroundHeightWhenLarge;
- (void)navigationBarContentViewDidChangeTintColor:(id)a0;
- (void)navigationItemUpdatedBottomPalette:(id)a0 oldPalette:(id)a1;
- (id)staticNavBarButtonItem;
- (double)titleAlpha;
- (void)setAppearanceAPIVersion:(long long)a0;
- (BOOL)alwaysEvaluateChromelessTransitionProgress;
- (void)navigationItemUpdatedRightBarButtonItems:(id)a0 animated:(BOOL)a1;
- (void)prepareForStackChange;
- (void)setStaticNavBarButtonLingers:(BOOL)a0;
- (void)navigationItemUpdatedContentLayout:(id)a0 animated:(BOOL)a1;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_ensureLayoutsConfiguredForEntry:(id)a0;
- (BOOL)_shim_disableBlurTinting;
- (void)setBackgroundAlpha:(double)a0;
- (long long)statusBarStyle;
- (void)barDidMoveToWindow;
- (void)navigationItemUpdatedBackgroundAppearance:(id)a0;
- (void)navigationItemUpdatedLargeTitleDisplayMode:(id)a0;
- (void)stackDidChangeFrom:(id)a0;
- (void)navigationBarInvalidatedResolvedLayoutMargins;
- (BOOL)topItemHasVariableHeight;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)titleRenamer:(id)a0 didCancelSession:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 defaultViewHit:(id)a1;
- (void)setRefreshControlHost:(id)a0;
- (id)appearanceObserver;
- (void)dismissHostedSearchWithTransitionCoordinator:(id)a0;
- (void)searchScopeBarWillManuallyShowOrHideForNavigationItem:(id)a0;
- (struct CGPoint { double x0; double x1; })promptViewLayoutFrameOrigin;
- (BOOL)isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (void)navigationItemUpdatedLeftBarButtonItems:(id)a0 animated:(BOOL)a1;
- (long long)currentContentSize;
- (void)setForceScrollEdgeAppearance:(BOOL)a0;
- (void)teardown;
- (void)navigationItemUpdatedPromptContent:(id)a0;
- (void)navigationItemUpdatedScrollEdgeProgress:(id)a0;
- (void)navigationItemUpdatedAdditionalOverflowItems:(id)a0;
- (void)_beginCustomization;
- (BOOL)useManualScrollEdgeAppearanceForItem:(id)a0;
- (BOOL)_allowLargeTitleView;
- (void)navigationItemUpdatedBackButtonContent:(id)a0 animated:(BOOL)a1;
- (id)restingHeights;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })resolvedSearchBarMargins;
- (void)navigationItemUpdatedCanvasView:(id)a0;
- (void)prepareForPop;
- (id)_defaultWeeTitleAttributes;
- (BOOL)supportsRefreshControlHosting;
- (void)navigationItemUpdatedCenterBarButtonItems:(id)a0 animated:(BOOL)a1;
- (void)_shim_setDisableBlurTinting:(BOOL)a0;
- (void)_shim_setCustomBackgroundView:(id)a0;
- (void)navigationItemUpdatedLargeTitleContent:(id)a0;
- (void)pushAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_endRenaming;
- (double)_shim_shadowAlpha;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barCustomizer:(id)a0 overflowControlBoundsForSession:(id)a1;
- (void)setShouldFadeStaticNavBarButton:(BOOL)a0;
- (void)navigationItemSearchControllerReadyForDeferredAutomaticShowsScopeBar:(id)a0;
- (BOOL)updateNavItemContentLayoutGuideAnimationConstraintConstant:(double)a0;
- (void)beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (void)navigationItemUpdatedSearchController:(id)a0 oldSearchController:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)_installWindowMoveClientInteractionIfNecessary;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barCustomizer:(id)a0 customizationAreaBoundsForSession:(id)a1;
- (void)_updateTitleViewForLayout:(id)a0;
- (void)_didEncounterFirstTitleWithExcessiveHeightChanged:(id)a0;
- (BOOL)_stackWantsLargeTitleDisplayedForItem:(id)a0 hideLargeTitleForActiveSearch:(BOOL)a1;
- (id)titleRenamer:(id)a0 session:(id)a1 willBeginRenamingWithTitle:(id)a2 selectedRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (BOOL)allowLargeTitleView;
- (void)_upgradeAppearanceAPIForItemIfNecessary:(id)a0;
- (void)_updateWithCompletion:(id /* block */)a0;
- (void)barCustomizer:(id)a0 willEndSession:(id)a1 didReset:(BOOL)a2;
- (void)navigationBarContentViewDidTriggerCustomization:(id)a0;
- (void)_endTransitionCompleted:(BOOL)a0;
- (void)navigationBarContentViewDidChangeDesiredHeight:(id)a0;
- (id)_barCustomizationItemWithBarButtonGroup:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })largeSearchBaseMarginsRequiringNavMinimums:(BOOL)a0;
- (void)applyBarBackground:(id)a0 alpha:(double)a1;
- (id)_backgroundLayoutOfClass:(Class)a0 fromLayout:(id)a1;
- (BOOL)_shouldEnableNestedNavigationPopForTopItem:(id)a0 backItem:(id)a1;
- (void)_ensureLayoutsConfiguredForEntry:(id)a0 forMeasuring:(BOOL)a1;
- (BOOL)_isInnerNavigationBarOfNestedNavigationController;
- (double)_effectiveBackIndicatorLeftMargin;
- (id)_staticNavBarButtonFakeBackMenu;
- (void)_enforceLayoutOrdering;
- (void)_setupAccessibilityLimitsForView:(id)a0;
- (BOOL)_isInInteractiveScroll;
- (void)titleRenamer:(id)a0 session:(id)a1 didEndRenamingWithTitle:(id)a2;
- (void)_updateBackground;
- (id)_adjustedAppearanceTitleAttributes:(id)a0 allowsLargeTitle:(BOOL)a1;
- (void)_updateAugmentedTitleDataSources;
- (BOOL)titleRenamer:(id)a0 session:(id)a1 shouldEndRenamingWithTitle:(id)a2;
- (void)_updateContentForTopItem:(id)a0 backItem:(id)a1;
- (void)_beginOrEndObservingDidEncounterFirstTitleWithExcessiveHeightChangedIfNecessary;
- (BOOL)_shim_hasCustomBackgroundView;
- (void)navigationControllerRefreshControlHostDidUpdateLayout:(id)a0;
- (void)navigationBarContentViewDidTriggerBackAction:(id)a0 fromBackButtonItem:(id)a1;
- (double)alphaForBarBackground:(id)a0 preferredAlpha:(double)a1 navigationItem:(id)a2;
- (double)defaultBarHeightForTraitCollection:(id)a0;
- (void).cxx_destruct;
- (void)_updateLegacyLayout:(id)a0 forNavigationItem:(id)a1;
- (BOOL)_wantsWindowMoveClientInteractionInstalled;
- (id)barCustomizer:(id)a0 containerViewForSession:(id)a1;
- (void)_updateModernLayout:(id)a0 forNavigationItem:(id)a1 compact:(BOOL)a2;
- (BOOL)isContentView:(id)a0;
- (void)_presentOrDismissSearch:(int)a0 withTransitionCoordinator:(id)a1;
- (void)_updateContentForTopItem:(id)a0 backItem:(id)a1 animated:(BOOL)a2;
- (id)presentationSourceForContent:(long long)a0 navigationItem:(id)a1;
- (void)safeAreaInsetsDidChange;
- (id /* block */)_sourceViewProviderForBarButtonItem:(id)a0;
- (id)_backButtonMenu;
- (void)_invalidateIntrinsicContentSizeAndNotifySizeChanged;
- (void)_popToItem:(id)a0;
- (void)prepare;
- (void)titleRenamer:(id)a0 session:(id)a1 fileRenameDidFail:(id)a2;
- (void)navigationBarContentViewDidTriggerTitleRenameAction:(id)a0;
- (BOOL)_stackWantsSearchDisplayedBelowContentViewForItem:(id)a0;
- (BOOL)_stackWantsLargeTitleDisplayedForItem:(id)a0;
- (id)_timingFunctionForAnimationInView:(id)a0 withKeyPath:(id)a1;
- (void)_postDidEncounterFirstTitleWithExcessiveHeightChanged;
- (void)_configureMarginsOnContentViewsAndPalette:(id)a0 withContentMargin:(double)a1;
- (void)_performAnimationWithTransitionCompletion:(id /* block */)a0 transition:(int)a1;
- (void)layoutSubviews;
- (void)_setupTransitionContextForTransition:(int)a0;
- (id)_centerBarButtonGroupWithIdentifier:(id)a0;
- (void)_updatePromptViewAndActuallyHide:(BOOL)a0;
- (id)_barCustomizationItemWithBarButtonItem:(id)a0 identifier:(id)a1;
- (void)_setUpContentFocusContainerGuide;
- (id)_effectiveLegacyTitleAttributes;
- (id)alternateBarBackground;
- (BOOL)_stackWantsBottomPaletteDisplayedForItem:(id)a0;
- (void)titleRenamer:(id)a0 session:(id)a1 fileRenameDidEnd:(id)a2;
- (void)_prepareLayouts;
- (void)_computeProvidesExtraSpaceForExcessiveLineHeightsForTopItem:(id)a0;
- (void)_updateContentPriorities;
- (id)emptyLayout;
- (id)_updateBackgroundLayout:(id)a0 forNavigationItem:(id)a1 compact:(BOOL)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
