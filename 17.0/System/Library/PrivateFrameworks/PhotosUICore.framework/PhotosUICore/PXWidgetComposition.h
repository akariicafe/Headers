@class NSArray, PXTilingController, PXWidgetCompositionSpec, NSString, PXScrollViewController;
@protocol PXWidgetCompositionDelegate;

@interface PXWidgetComposition : PXTilingControllerComposition <PXWidgetCompositionElementObserver, PXWidgetCompositionElementDelegate, PXScrollViewControllerObserver> {
    struct { BOOL respondsToHasContentAbove; BOOL respondsToShouldUseEdgeToEdgeLayoutForWidget; BOOL respondsToLoadingPriorityForWidget; BOOL respondsToWidgetTransitionToViewControllerWithTransitionType; BOOL respondsToRequestViewControllerDismissalAnimated; BOOL respondsToDidUpdateCompositionWithDefaultAnimationOptions; BOOL respondsToPresentationEnvironment; } _delegateFlags;
    BOOL _isPerformingWidgetLoadingChange;
    struct { BOOL elementsToLoad; } _needsUpdateFlags;
}

@property (copy, nonatomic, setter=_setElements:) NSArray *_elements;
@property (retain, nonatomic, setter=_setFocusedTilingController:) PXTilingController *_focusedTilingController;
@property (nonatomic, setter=_setDidLayoutWidgets:) BOOL _didLayoutWidgets;
@property (nonatomic, setter=_setLastContentAdjustmentOffset:) struct CGPoint { double x; double y; } _lastContentAdjustmentOffset;
@property (readonly, weak, nonatomic) PXScrollViewController *scrollViewController;
@property (weak, nonatomic) id<PXWidgetCompositionDelegate> delegate;
@property (copy, nonatomic) NSArray *widgets;
@property (retain, nonatomic) PXWidgetCompositionSpec *spec;
@property (nonatomic) long long minimumWidgetLoadingPriority;
@property (nonatomic) BOOL shouldLoadVisibleWidgets;
@property (nonatomic) BOOL shouldLoadAllWidgets;
@property (nonatomic) BOOL shouldUnloadAllWidgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)scrollViewControllerDidScroll:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldFocusOnTilingController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForWidget:(id)a0;
- (void)_updateElements;
- (void)_invalidateElements;
- (void)_invalidateElementsSpec;
- (void)_invalidateElementsToLoad;
- (long long)_loadingPriorityForElement:(id)a0;
- (void)_setNeedsUpdateWidgetLoading;
- (BOOL)_shouldUseEdgeToEdgeLayoutForWidget:(id)a0;
- (void)_updateElementsSpec;
- (void)_updateElementsToLoadIfNeeded;
- (void)_updateFocusedTilingController;
- (void)_updateWidgetLoadingIfNeeded;
- (BOOL)element:(id)a0 requestViewControllerDismissalAnimated:(BOOL)a1;
- (BOOL)element:(id)a0 transitionToViewController:(id)a1 withTransitionType:(long long)a2;
- (void)elementHasLoadedContentDataDidChange:(id)a0;
- (void)elementNeedsLayout:(id)a0 preferredAnimationOptions:(id)a1 originatingTilingController:(id)a2;
- (id)elementUndoManager:(id)a0;
- (id)elementViewController:(id)a0;
- (id)footerTilingControllerForWidget:(id)a0;
- (id)headerTilingControllerForWidget:(id)a0;
- (id)initWithScrollViewController:(id)a0;
- (void)invalidateFocusedTilingController;
- (void)invalidatePreferredContentHeightForAllWidgets;
- (void)performWidgetLoadingChange:(id /* block */)a0;
- (id)presentationEnvironmentForElement:(id)a0;
- (id)tilingControllers;
- (void)updateComposition;
- (id)widgetAtLocation:(struct CGPoint { double x0; double x1; })a0;

@end
