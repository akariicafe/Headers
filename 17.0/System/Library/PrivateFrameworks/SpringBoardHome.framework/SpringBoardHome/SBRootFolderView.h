@class UIViewController, SBFolderScrollAccessoryView, UILabel, SBDockIconListView, SBHHomePullToSearchSettings, NSMutableArray, NSString, _SBRootFolderLayoutWrapperView, SBFParallaxSettings, NSTimer, SBHRootFolderSettings, SBHMinusPageStepper, SBTitledHomeScreenButton, SBFTouchPassThroughView, SBDockView, UIView, _SBRootFolderViewElementBorrowedAssertion, SBSearchGesture, SBHRootFolderVisualConfiguration, SBSearchBackdropView, SBRootFolder, NSHashTable;
@protocol SBHRootFolderCustomViewPresenting, SBIconListViewIconLocationTransitioning, SBRootFolderViewDelegate, BSInvalidatable, SBRootFolderViewLayoutManager, SBHSearchPresenting;

@interface SBRootFolderView : SBFolderView <_UISettingsKeyObserver, SBDockViewDelegate, SBFRemoteBasebandLoggingObserver> {
    SBDockView *_dockView;
    _SBRootFolderLayoutWrapperView *_searchableLeadingCustomWrapperView;
    SBSearchBackdropView *_searchBackdropView;
    SBSearchBackdropView *_trailingCustomBackdropView;
    UIView *_trailingCustomSearchDimmingView;
    double _baseOffsetForDeterminingScrollToSearchThreshold;
    double _pageWidthWhenScrollToSearchBeganDragging;
    BOOL _scrollToSearchIsDraggingOrAnimating;
    double _scrollOffsetWhenScrollingBegan;
    BOOL _wasScrolling;
    BOOL _isLeadingCustomViewBouncing;
    long long _iconListFrameOrientationOverride;
    NSHashTable *_dockOffscreenProgressSettingClients;
    id<BSInvalidatable> _dockStateDumpHandle;
    BOOL _lastEventWasAttemptingToOverscrollFirstPage;
    BOOL _lastEventWasAttemptingToOverscrollLastPage;
}

@property (class, readonly, copy, nonatomic) NSString *dockIconLocation;

@property (nonatomic) _SBRootFolderViewElementBorrowedAssertion *dockBorrowedAssertion;
@property (nonatomic) _SBRootFolderViewElementBorrowedAssertion *scrollAccessoryBorrowedAssertion;
@property (retain, nonatomic) NSMutableArray *pageDotsVisibilityAssertions;
@property (retain, nonatomic) id<BSInvalidatable> scrollingPageDotsVisibilityAssertion;
@property (retain, nonatomic) id<BSInvalidatable> scrubbingPageDotsVisibilityAssertion;
@property (retain, nonatomic) id<BSInvalidatable> editingPageDotsVisibilityAssertion;
@property (retain, nonatomic) id<BSInvalidatable> searchButtonDisabledPageDotsVisibilityAssertion;
@property (retain, nonatomic) id<BSInvalidatable> searchButtonUnsupportedHardwarePageDotsVisibilityAssertion;
@property (retain, nonatomic) id<BSInvalidatable> configuredForSnapshotPageDotsVisibilityAssertion;
@property (retain, nonatomic) NSTimer *pageDotsVisibilityTimer;
@property (retain, nonatomic) SBFTouchPassThroughView *titledButtonsContainerView;
@property (retain, nonatomic) SBTitledHomeScreenButton *doneButton;
@property (retain, nonatomic) SBTitledHomeScreenButton *widgetButton;
@property (retain, nonatomic) id<SBIconListViewIconLocationTransitioning> firstListViewIconLocationTransitionHandler;
@property (nonatomic) double scrollingAdjustment;
@property (nonatomic) BOOL allowsFreeScrollingUntilScrollingEnds;
@property (retain, nonatomic) SBHRootFolderSettings *folderSettings;
@property (readonly, nonatomic) unsigned long long ignoresOverscrollOnFirstPageOrientations;
@property (readonly, nonatomic) unsigned long long ignoresOverscrollOnLastPageOrientations;
@property (nonatomic) BOOL userAttemptedToOverscrollFirstPageDuringCurrentGesture;
@property (nonatomic) BOOL userAttemptedToOverscrollLastPageDuringCurrentGesture;
@property (readonly, nonatomic) UILabel *idleTextView;
@property (readonly, nonatomic) UIViewController<SBHRootFolderCustomViewPresenting> *leadingCustomViewController;
@property (readonly, nonatomic) UIViewController<SBHRootFolderCustomViewPresenting> *trailingCustomViewController;
@property (readonly, nonatomic) _SBRootFolderLayoutWrapperView *searchPulldownWrapperView;
@property (readonly, nonatomic) _SBRootFolderLayoutWrapperView *searchableLeadingCustomWrapperView;
@property (readonly, nonatomic) _SBRootFolderLayoutWrapperView *searchableTrailingCustomWrapperView;
@property (readonly, nonatomic) SBHMinusPageStepper *customPageAnimationStepper;
@property (readonly, nonatomic) SBDockIconListView *dockListView;
@property (readonly, nonatomic) id<SBRootFolderViewLayoutManager> layoutManager;
@property (retain, nonatomic) id<SBRootFolderViewLayoutManager> transitioningNewSpecialLayoutManager;
@property (retain, nonatomic) id<SBRootFolderViewLayoutManager> transitioningOldSpecialLayoutManager;
@property (readonly, nonatomic) unsigned long long folderPageManagementAllowedOrientations;
@property (readonly, nonatomic) UIView *scrollAccessoryAuxiliaryView;
@property (readonly, nonatomic) UIView *scrollAccessoryBackgroundView;
@property (readonly, nonatomic) id<SBHSearchPresenting> searchPresenter;
@property (readonly, nonatomic) UIView *searchPresentableView;
@property (readonly, nonatomic) SBHHomePullToSearchSettings *pullToSearchSettings;
@property (nonatomic) double pullToSearchFadeInThreshold;
@property (nonatomic) double pullToSearchActivationThreshold;
@property (nonatomic) double pullToSearchTranslatesIcons;
@property (readonly, nonatomic) double leadingCustomViewPageScrollOffset;
@property (readonly, nonatomic) double trailingCustomViewPageScrollOffset;
@property (readonly, nonatomic) double maxDockHeight;
@property (readonly, nonatomic) long long leadingCustomViewPageIndex;
@property (readonly, nonatomic) long long trailingCustomViewPageIndex;
@property (readonly, nonatomic) BOOL hidesOffscreenCustomPageViews;
@property (readonly, nonatomic) BOOL shouldFadeDockOutDuringTransitionToLeadingCustomView;
@property (readonly, nonatomic) BOOL shouldFadePageControlOutDuringTransitionToLeadingCustomView;
@property (readonly, nonatomic) SBFolderScrollAccessoryView *scrollAccessoryView;
@property (readonly, nonatomic) BOOL isPageManagementUITransitioningOutOfVisible;
@property (readonly, nonatomic) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration;
@property (retain, nonatomic) id<SBRootFolderViewLayoutManager> specialLayoutManager;
@property (weak, nonatomic) id<SBRootFolderViewDelegate> delegate;
@property (retain, nonatomic) SBRootFolder *folder;
@property (readonly, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (nonatomic) unsigned long long dockEdge;
@property (readonly, nonatomic) double dockHeight;
@property (readonly, nonatomic, getter=isDockExternal) BOOL dockExternal;
@property (readonly, copy, nonatomic) NSString *dockIconLocation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } enterEditingTouchRect;
@property (readonly, nonatomic, getter=isDockVisible) BOOL dockVisible;
@property (retain, nonatomic) SBSearchGesture *searchGesture;
@property (readonly, nonatomic) double currentDockOffscreenFraction;
@property (readonly, nonatomic) SBDockView *dockView;
@property (nonatomic) BOOL allowsAutoscrollToLeadingCustomView;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) BOOL showsAddWidgetButton;
@property (nonatomic) double titledButtonsAlpha;
@property (readonly, nonatomic) UIView *leadingCustomView;
@property (readonly, nonatomic) UIView *pullDownSearchView;
@property (readonly, nonatomic) UIView *trailingCustomView;
@property (readonly, nonatomic, getter=isOnLeadingCustomPage) BOOL onLeadingCustomPage;
@property (readonly, nonatomic, getter=isOnTrailingCustomPage) BOOL onTrailingCustomPage;
@property (nonatomic, getter=isLeadingCustomViewPageHidden) BOOL leadingCustomViewPageHidden;
@property (nonatomic, getter=isLeadingCustomViewBouncing) BOOL leadingCustomViewBouncing;
@property (nonatomic, getter=isSearchHidden) BOOL searchHidden;
@property (nonatomic) BOOL shiftsPullDownSearchForVisibility;
@property (readonly, nonatomic) UIView *leadingCustomViewWrapperView;
@property (readonly, nonatomic) SBSearchBackdropView *searchBackdropView;
@property (readonly, nonatomic) SBSearchBackdropView *trailingCustomBackdropView;
@property (readonly, nonatomic) UIView *trailingCustomSearchDimmingView;
@property (nonatomic) double leadingCustomViewVisibilityProgress;
@property (nonatomic) double trailingCustomViewVisibilityProgress;
@property (nonatomic) double pullDownSearchVisibilityProgress;
@property (readonly, nonatomic, getter=isPageManagementUIVisible) BOOL pageManagementUIVisible;
@property (nonatomic, getter=isOccludedByOverlay) BOOL occludedByOverlay;
@property (nonatomic) double todayViewVisibilityProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_getTopLeadingButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 topTrailingButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 forListLayout:(id)a3 withTranslationOffset:(double)a4 inRTL:(BOOL)a5;
+ (void)_getTopLeadingButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 topTrailingButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 forVisualConfiguration:(id)a3 includingContentEdgeInsets:(BOOL)a4 withTranslationOffset:(double)a5 inRTL:(BOOL)a6;
+ (id)defaultIconLocation;
+ (void)_editButtonLayoutFramesInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forVisualConfiguration:(id)a1 withTranslationOffset:(double)a2 inRTL:(BOOL)a3 doneButton:(id)a4 addWidgetButton:(id)a5 doneButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a6 addWidgetButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a7;

- (void)cleanUpAfterTransition;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)widgetButtonTriggered:(id)a0;
- (void)pageControlDidEndScrubbing:(id)a0;
- (void)_setupTrailingCustomDimmingViewIfNecessary;
- (void)setSpecialLayoutManager:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareForTransition;
- (void)layoutSearchableViewsWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; double x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x9; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x10; } *)a0;
- (void)remoteBasebandLogCollectionStateDidChange:(BOOL)a0;
- (void)_setupIdleTextPrivacyDisclosures;
- (double)_minimumHomeScreenScale;
- (void)tearDownListViews;
- (void)_doPageManagementEducation;
- (void)_cleanUpAfterScrolling;
- (void)_updateParallaxSettings;
- (BOOL)shouldScrollPageControlDuringTransitionToLeadingCustomView;
- (void)updatePageControlConfiguration;
- (void)_flashPageDotsForReason:(id)a0;
- (void)_willScrollToPageIndex:(long long)a0 animated:(BOOL)a1;
- (void)fadeContentForMinificationFraction:(double)a0;
- (struct CGPoint { double x0; double x1; })_scrollView:(id)a0 adjustedOffsetForOffset:(struct CGPoint { double x0; double x1; })a1 translation:(struct CGPoint { double x0; double x1; })a2 startPoint:(struct CGPoint { double x0; double x1; })a3 locationInView:(struct CGPoint { double x0; double x1; })a4 horizontalVelocity:(inout double *)a5 verticalVelocity:(inout double *)a6;
- (void)layoutSearchableViews;
- (void)pageControlDidBeginScrubbing:(id)a0;
- (id)makeTitledButtonOfClass:(Class)a0;
- (void)_updatePageControlToIndex:(long long)a0;
- (void)_updateIconListLegibilitySettings;
- (BOOL)isScrollAccessoryBorrowed;
- (void)_animateViewsForScrollingToLeadingOrTrailingCustomView;
- (void)setIdleText:(id)a0;
- (id)additionalIconListViews;
- (id)newDockBackgroundView;
- (void)setShowsAddWidgetButton:(BOOL)a0 animated:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })_scrollOffsetForContentAtPageIndex:(long long)a0;
- (void)_setupStateDumper;
- (unsigned long long)_leadingCustomPageCount;
- (void)returnScalingView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_iconListFrameForPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1;
- (void)doneButtonTriggered:(id)a0;
- (void)scrollUsingDecelerationAnimationToPageIndex:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)_updateDockOffscreenFractionWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; double x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x9; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x10; } *)a0;
- (double)_spotlightFirstIconRowOffset;
- (void)_updateScrollingState:(BOOL)a0;
- (void)transitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)requirePageDotsVisibilityForReason:(id)a0;
- (id)iconListViewForExtraIndex:(unsigned long long)a0;
- (id)rootListLayout;
- (void)_updatePageControlNumberOfPages;
- (BOOL)iconScrollView:(id)a0 shouldSetAutoscrollContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isModifyingDockOffscreenFraction;
- (id)visibleIconListViews;
- (void)_layoutSubviewsForLeadingCustomViewWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; double x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x9; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x10; } *)a0;
- (void)_captureInitialSearchScrollTrackingState;
- (void)_updateDockBackgroundViewForOcclusionByOverlay;
- (void)_currentPageIndexDidChangeFromPageIndex:(long long)a0;
- (BOOL)iconScrollView:(id)a0 shouldSetContentOffset:(struct CGPoint { double x0; double x1; } *)a1 animated:(BOOL)a2;
- (void)getMetrics:(struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; double x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x9; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x10; } *)a0 dockEdge:(unsigned long long)a1;
- (BOOL)isPageIndexCustomAndRightmost:(long long)a0;
- (void)updateIconListViews;
- (void)_layoutSubviews;
- (id)accessibilityTintColorForDockView:(id)a0;
- (void)pageControlDidReceiveButtonTap:(id)a0;
- (id)_createIconListViewForList:(id)a0;
- (id)newHomeScreenButtonBackgroundView;
- (BOOL)shouldScrollDockDuringTransitionToLeadingCustomView;
- (void)updateDockViewOrientation;
- (void)setShowsDoneButton:(BOOL)a0 animated:(BOOL)a1;
- (unsigned long long)_trailingCustomPageCount;
- (BOOL)isPageControlHidden;
- (void)_reduceMotionStatusDidChange:(id)a0;
- (double)additionalScrollWidthToKeepVisibleInOneDirection;
- (void)updateAccessibilityTintColors;
- (id)highlightingViewForPageControl:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaledBoundsForMinimumHomeScreenScale;
- (void)_overscrollScrollPanGestureRecognizerDidUpdate:(id)a0;
- (void)minimumHomeScreenScaleDidChange;
- (BOOL)isDockViewBorrowed;
- (void)resetIconListViews;
- (void)folderDidChange;
- (id)iconLocationForListsWithNonDefaultSizedIcons;
- (double)internalDockPageControlVerticalMargin;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })statusBarInsetsForDockEdge:(unsigned long long)a0;
- (double)trailingCustomViewPageScrollOffsetUsingPageWidth:(double)a0;
- (void)_resetSearchScrollTrackingState;
- (double)leadingCustomViewPageScrollOffsetUsingPageWidth:(double)a0;
- (void)iconScrollViewDidCancelTouchTracking:(id)a0;
- (void)updateIconListIndexAndVisibility:(BOOL)a0;
- (void)willMoveToWindow:(id)a0;
- (id)iconListViewForIconListModelIndex:(unsigned long long)a0;
- (id)iconListViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)iconListViewAtIndex:(unsigned long long)a0;
- (id)beginModifyingDockOffscreenFractionForReason:(id)a0;
- (void)setPageControlHidden:(BOOL)a0;
- (void)setOrientation:(long long)a0;
- (void)getMetrics:(struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; double x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x9; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x10; } *)a0;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })_scrollOffsetForPageAtIndex:(long long)a0 pageWidth:(double)a1;
- (void)setPageControlAlpha:(double)a0;
- (double)externalDockPageControlVerticalMargin;
- (void)setLegibilitySettings:(id)a0;
- (double)pageControlAlpha;
- (void)setSuppressesEditingStateForListViews:(BOOL)a0;
- (void)_applyPageDotsVisibilityAssertions;
- (void)_cleanupAfterExtraScrollGesturesCompleted;
- (BOOL)_shouldIgnoreOverscrollOnLastPageForOrientation:(long long)a0;
- (void)setContentVisibility:(unsigned long long)a0;
- (void)_forceLayoutPageControl;
- (void)clientDidChangeDockOffScreenFraction:(id)a0;
- (void)_updateEditingStateAnimated:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)didMoveToSuperview;
- (void)_animateViewsForScrollingToLeadingOrTrailingCustomViewWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; double x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x9; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x10; } *)a0;
- (void)_updateIconListIndexSearchableAndLeadingCustomViewsWithLayout:(BOOL)a0;
- (double)scrollableWidthForVisibleColumnRange;
- (void)layoutPageControlWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; double x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x9; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x10; } *)a0;
- (void)layoutIconListsWithAnimationType:(long long)a0 forceRelayout:(BOOL)a1;
- (BOOL)_shouldIgnoreOverscrollOnLastPageForCurrentOrientation;
- (id)borrowDockViewForReason:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)layoutDockViewWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; double x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x9; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x10; } *)a0;
- (void)setContentAlpha:(double)a0;
- (id)rootWithWidgetsListLayout;
- (void)setNeedsLayout;
- (void)_animateViewsForPullingToSearchWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; double x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x9; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x10; } *)a0;
- (void)_cleanUpAfterOverscrollScrollGestureEnded:(id)a0;
- (long long)_pageCountForPageControl;
- (void)_setupSearchBackdropViewIfNecessary;
- (id)iconListView:(id)a0 alternateIconLocationForListWithNonDefaultSizedIcons:(BOOL)a1;
- (void)removeDockOffscreenFractionClient:(id)a0;
- (void)enumerateScrollViewPageViewsUsingBlock:(id /* block */)a0;
- (void)_adjustLeadingCustomContentForEdgeBounce;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_statusBarInsetsForDockEdge:(unsigned long long)a0 dockOffscreenPercentage:(double)a1;
- (BOOL)_trailingCustomViewShouldBeIndicatedInPageControl;
- (void)_updateDockViewZOrdering;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void)_animateViewsForPullingToSearch;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scrollViewFrameForDockEdge:(unsigned long long)a0;
- (BOOL)_shouldIgnoreOverscrollOnFirstPageForCurrentOrientation;
- (void)_updatePullToSearchSettings;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_shouldIgnoreOverscrollOnFirstPageForOrientation:(long long)a0;
- (double)minimumHomeScreenScaleForDockView:(id)a0;
- (BOOL)scrollViewHeightIncludesPageControlAndDock;
- (void)exitPageManagementUIWithCompletionHandler:(id /* block */)a0;
- (void)_setupTrailingCustomBackdropViewIfNecessary;
- (id)borrowScrollAccessoryForReason:(id)a0;
- (BOOL)_useParallaxOnPageControl;
- (void)setDelegate:(id)a0;
- (void)_layoutSubviewsForTrailingCustomViewWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; double x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x9; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x10; } *)a0;
- (BOOL)shouldPinScrollingToFirstOrLastPageScrollOffsetForProposedScrollOffset:(struct CGPoint { double x0; double x1; } *)a0;
- (void)_layoutSubviewsForPulldownSearch;
- (void)enterPageManagementUIWithCompletionHandler:(id /* block */)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)_leadingCustomViewShouldBeIndicatedInPageControl;
- (void)elementBorrowedAssertionDidInvalidate:(id)a0;
- (id)newDockBackgroundMaterialViewWithInitialWeighting:(double)a0;

@end
