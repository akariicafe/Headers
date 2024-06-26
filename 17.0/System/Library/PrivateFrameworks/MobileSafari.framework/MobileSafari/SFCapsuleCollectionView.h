@class UIVisualEffectView, NSHashTable, UIViewFloatAnimatableProperty, UIAction, NSString, SFLockdownStatusBar, SFCapsuleInputAccessorySpacerView, NSMutableSet, NSTimer, NSArray, NSMutableDictionary, UIKBVisualEffectView, _SFBarTheme, SFCapsuleCollectionViewUpdate, SFCapsuleNavigationBarTheme, UIView, _UIVisualEffectBackdropView, UIPanGestureRecognizer, _SFFluidProgressView, SFTransitionCoordinator, UISelectionFeedbackGenerator, SFNavigationBarItem, NSIndexSet, UITapGestureRecognizer, NSNumber;
@protocol SFCapsuleCollectionViewDelegate, SFCapsuleCollectionViewToolbarContentProviding, SFCapsuleCollectionViewDataSource;

@interface SFCapsuleCollectionView : UIView <SFCapsuleContentViewSizeUpdating, _SFFluidProgressViewDelegate, SFBarAnimating, SFCapsuleCollectionViewToolbarContentProviding, SFStartPageScrollObserver, UIGestureRecognizerDelegate> {
    NSTimer *_timerToDiscardViewsForReuse;
    NSMutableSet *_viewsForReuse;
    NSMutableDictionary *_contentViewRegistrations;
    UIView *_reuseableContentView;
    NSString *_reusableContentViewIdentifier;
    _UIVisualEffectBackdropView *_backgroundCaptureView;
    SFCapsuleNavigationBarTheme *_effectiveTheme;
    SFCapsuleNavigationBarTheme *_effectiveMinimizedTheme;
    _SFBarTheme *_toolbarTheme;
    long long _visualEffectTransitionCount;
    UIAction *_trailingAction;
    UIAction *_topAction;
    UIKBVisualEffectView *_keyboardBackdropView;
    SFCapsuleInputAccessorySpacerView *_inputAccessoryView;
    UIVisualEffectView *_toolbarBackdropView;
    NSMutableDictionary *_selectedItemAccessoryViews;
    UIView *_bottomSeparator;
    BOOL _deferSelectedItemContentViewRemovalUntilEndOfNextTransition;
    BOOL _contentBorrowed;
    double _verticalSwipeThreshold;
    struct CGPoint { double x; double y; } _offsetForPan;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGesture;
    UIPanGestureRecognizer *_dismissPanGestureRecognizer;
    unsigned long long _panAxis;
    double _axisSwitchTime;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    struct CGPoint { double x; double y; } _previousVelocity;
    struct CGPoint { double x; double y; } _previousMinimizationVelocity;
    unsigned long long _minimizationFlags;
    double _minimizationStartingDragOffset;
    double _minimizationLastDragOffset;
    double _distanceToTopEdgeAtMinimizationBegan;
    NSHashTable *_gestureObservers;
    BOOL _sendProgressMessageToObservers;
    SFTransitionCoordinator *_currentTransitionCoordinator;
    SFCapsuleCollectionViewUpdate *_update;
    long long _numberOfUpdates;
    BOOL _toolbarDismissed;
    long long _toolbarAnimationCount;
    UIView *_alternateToolbarContentView;
    double _alternateToolbarContentHeight;
    BOOL _showingKeyboard;
    long long _selectedItemStateBeforeShowingKeyboard;
    long long _backdropHeightAnimationCount;
    UIViewFloatAnimatableProperty *_bottomBackdropHeight;
    UIViewFloatAnimatableProperty *_topBackdropHeight;
    double _topBackdropHeightPresentationValue;
    BOOL _ignoreSetNeedsLayout;
}

@property (readonly, nonatomic, getter=_pageWidth) double pageWidth;
@property (readonly, nonatomic, getter=_interCapsuleSpacing) double interCapsuleSpacing;
@property (retain, nonatomic, getter=_indexesOfLoadedViews, setter=_setIndexesOfLoadedViews:) NSIndexSet *indexesOfLoadedViews;
@property (readonly, nonatomic, getter=_indexesOfAnimatingItems) NSIndexSet *indexesOfAnimatingItems;
@property (nonatomic, getter=_keyboardHeight, setter=_setKeyboardHeight:) double keyboardHeight;
@property (nonatomic, getter=_offsetForMinimization, setter=_setOffsetForMinimization:) double offsetForMinimization;
@property (readonly, nonatomic, getter=_verticalOffsetForSelectedItem) double verticalOffsetForSelectedItem;
@property (readonly, nonatomic, getter=_items) NSArray *items;
@property (nonatomic, getter=_suppressingDataSourceCalls, setter=_setSuppressingDataSourceCalls:) BOOL suppressingDataSourceCalls;
@property (readonly, nonatomic) unsigned long long numberOfItems;
@property (readonly, nonatomic) NSIndexSet *indexesOfVisibleItems;
@property (weak, nonatomic) id<SFCapsuleCollectionViewDataSource> dataSource;
@property (weak, nonatomic) id<SFCapsuleCollectionViewDelegate> delegate;
@property (retain, nonatomic) _SFBarTheme *theme;
@property (retain, nonatomic) _SFBarTheme *minimizedTheme;
@property (nonatomic) long long layoutStyle;
@property (readonly, nonatomic) double capsuleBackgroundCornerRadius;
@property (readonly, nonatomic) double defaultCapsuleHeight;
@property (readonly, nonatomic) double minimizedCapsuleHeightAboveKeyboard;
@property (nonatomic) double focusedCapsuleTopOffset;
@property (readonly, nonatomic) double focusedCapsuleHeight;
@property (nonatomic) BOOL keepsCapsulesAboveKeyboard;
@property (nonatomic) double capsuleWidth;
@property (nonatomic) double inactiveCapsuleAlpha;
@property (nonatomic) long long selectionGestureLimit;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } capsuleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } minimizedCapsuleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectedCapsuleFrame;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } obscuredInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } obscuredInsetsIgnoringKeyboard;
@property (nonatomic) BOOL itemsAreHidden;
@property (readonly, nonatomic) BOOL selectedItemUsesLiftedPreviewAppearance;
@property (readonly, nonatomic) BOOL selectedItemIsMinimized;
@property (nonatomic) long long minimizationStyle;
@property (readonly, nonatomic) long long selectedItemState;
@property (nonatomic) double selectionThreshold;
@property (nonatomic) BOOL usesFastDeceleration;
@property (nonatomic) long long selectedItemIndex;
@property (readonly, nonatomic) BOOL isInteractivelySelectingItem;
@property (readonly, nonatomic) long long selectionGestureState;
@property (readonly, nonatomic) unsigned long long selectionGestureAxis;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } selectedCapsuleOffset;
@property (readonly, nonatomic) BOOL hasTrailingAction;
@property (nonatomic) BOOL suppressesSelectedItemUnfocus;
@property (readonly, nonatomic) UIView *toolbar;
@property (retain, nonatomic) NSNumber *toolbarOffsetForPinchTransition;
@property (readonly, nonatomic) BOOL isTransitioningToNormalStateForTapInBottomRegion;
@property (weak, nonatomic) id<SFCapsuleCollectionViewToolbarContentProviding> alternateToolbarContentProvider;
@property (readonly, nonatomic, getter=isShowingAlternateToolbarContent) BOOL showingAlternateToolbarContent;
@property (retain, nonatomic) SFNavigationBarItem *navigationBarItem;
@property (readonly, nonatomic) _SFFluidProgressView *minimizedProgressView;
@property (readonly, nonatomic) SFLockdownStatusBar *lockdownStatusBar;
@property (nonatomic) BOOL showingLockdownStatusBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_keyboardWillChangeFrame:(id)a0;
- (unsigned long long)_maximumNumberOfVisibleViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_bottomBackdropFrame;
- (void)endUpdates;
- (void)layoutMarginsDidChange;
- (double)_percentToSelectItemIndex:(long long)a0;
- (id)inputAccessoryView;
- (BOOL)_shouldUseNormalLayoutForMinimizedCapsule;
- (BOOL)_canAnimateUpdates;
- (id)_visualEffectGroupName;
- (BOOL)_updateTrailingAction;
- (double)_additionalHeightFromAuxiliaryBarAtMinimizationPercent:(double)a0;
- (void)_keyboardDidHide:(id)a0;
- (void)_updateToolbarAlpha;
- (double)_lockdownIndicatorBottomVerticalSpacingAtMinimizationPercent:(double)a0;
- (void)startPageViewControllerDidScroll:(id)a0;
- (void)endScrolling;
- (id)_indexesOfVisibleItemsIncludingAction:(BOOL)a0;
- (void)_layOutKeyboardBackdrop;
- (double)_selectedItemMinimizationPercent;
- (void)capsuleCollectionView:(id)a0 relinquishToolbarContentView:(id)a1;
- (unsigned long long)_capsuleAlphaOptionsForSelectionGesture;
- (void)_updateToolbarTheme;
- (void)insertItemsAtIndexes:(id)a0 animated:(BOOL)a1;
- (void)reloadData;
- (void)traitCollectionDidChange:(id)a0;
- (void)setSelectedItemState:(long long)a0 options:(long long)a1 animated:(BOOL)a2;
- (void)invalidateHeightForCapsuleContentView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)_shouldAnimateKeyboardHeightChanges;
- (void)_updateStateFlagsForContentViewAtIndex:(long long)a0;
- (void)_decrementAnimationCountForItems:(id)a0;
- (void)setSelectedItemState:(long long)a0 animated:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_obscuredInsetsIgnoringAnimation;
- (BOOL)_hasReachedTrailingActionPullThreshold;
- (void)beginUpdates;
- (double)_verticalOffsetForSelectedItemWithMinimizationOffsetMultiplier:(double)a0 includeKeyboard:(BOOL)a1;
- (void)_reclaimViewForItem:(id)a0;
- (unsigned long long)_softMaximumNumberOfViews;
- (id)_coordinatorForUpdatingToCurrentSelectedItemStateFromState:(long long)a0;
- (BOOL)_translationIsAlmostHorizontal:(struct CGPoint { double x0; double x1; })a0;
- (long long)_nextItemIndexForSelectionGesture;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_inputAccessoryViewFrame;
- (void)_fetchContentViewForItem:(id)a0 atIndex:(long long)a1;
- (double)_verticalOffsetForBottomBackdropIncludingKeyboard:(BOOL)a0;
- (BOOL)_layoutStyleIsTop;
- (void)_didReceivePan:(id)a0;
- (void)_keyboardWillShow:(id)a0;
- (void)removeGestureObserver:(id)a0;
- (double)_overscrollDistanceForTopEdge;
- (void)updateTrailingActionAnimated:(BOOL)a0;
- (double)_verticalPanOffsetForToolbar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layOutLockdownStatusBar;
- (void)setShowingAlternateToolbarContent:(BOOL)a0 animated:(BOOL)a1;
- (void)invalidateHeightForCapsuleContentView:(id)a0 animated:(BOOL)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)_shouldInteractivelySquish;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (double)_selectedItemContentMinimizationPercent;
- (void)_sendMinimizationDidUpdateToObservers;
- (void)_updateTopAction;
- (double)_selectedItemBackgroundAlpha;
- (void)setNeedsLayout;
- (id)detachViewForItemAtIndex:(long long)a0 forInternalBorrow:(BOOL)a1;
- (void)_performWithoutSettingNeedsLayout:(id /* block */)a0;
- (void)_updateDragWithOffset:(double)a0 velocity:(double)a1 ended:(BOOL)a2;
- (id)_trailingActionContentView;
- (void)_setCapsuleSafeAreaInsetsFrozen:(BOOL)a0;
- (long long)_keyboardBackdropStyle;
- (void)deleteItemsAtIndexes:(id)a0 animated:(BOOL)a1;
- (void)endVisualEffectTransition;
- (void)updateVerticalSwipeThreshold;
- (void)_keyboardWillHide:(id)a0;
- (BOOL)_shouldShowAlternateToolbarContent;
- (void)updateDraggingWithOffset:(double)a0;
- (void)installAlternateToolbarContentIfNeeded;
- (void)_applyEffectsForChangeType:(long long)a0 update:(id)a1;
- (void)_reloadDataWithoutLayout;
- (double)_verticalPanOffsetForToolbarBackdrop;
- (void)reloadItemsAtIndexes:(id)a0;
- (struct CGPoint { double x0; double x1; })_panGestureTranslationConstrainedToPanAxis;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_selectedItemContentTransform;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedCapsuleFrame;
- (BOOL)_shouldDismissToolbar;
- (double)_auxiliaryBarSquishedHeightDecrease;
- (void)setSelectedItemAccessoryView:(id)a0 forState:(long long)a1;
- (BOOL)_selectedItemShouldUsePlatterEffect;
- (void)fluidProgressViewDidShowProgress:(id)a0;
- (BOOL)_shouldToggleMinimizedWithTranslation:(double)a0 velocity:(double)a1 gestureEnded:(BOOL)a2;
- (long long)_indexOfTargetItemWithTranslation:(double)a0 roundingThreshold:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tapToShowBarBottomRegion;
- (void)_updateRangeOfLoadedViews;
- (double)_minimizedContentScale;
- (double)_selectedCapsuleHeightForWidth:(double)a0 state:(long long)a1 ignoringKeyboard:(BOOL)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })obscuredInsetsForState:(long long)a0;
- (id)toolbarContentViewForCapsuleCollectionView:(id)a0;
- (void).cxx_destruct;
- (double)capsuleCollectionView:(id)a0 heightForToolbarContentView:(id)a1;
- (double)_swipeTranslationFactorWithPercentToTopAction:(double)a0;
- (double)_verticalOverlapForLockdownStatusIndicatorAtMinimizationPercent:(double)a0;
- (void)setSelectedItemIndex:(long long)a0 animated:(BOOL)a1;
- (void)_updateToolbar;
- (BOOL)_shouldDodgeKeyboard;
- (id)createOrDequeueContentViewWithIdentifier:(id)a0 atIndex:(long long)a1;
- (long long)_indexOfCentermostItemWithTranslation:(double)a0;
- (void)takeOwnershipOfDetachedViewForItemAtIndex:(long long)a0;
- (void)_updateBackdropHeight;
- (long long)_indexOfTargetItemWithTranslation:(double)a0 roundingThreshold:(double)a1 allowActionIndex:(BOOL)a2 allowOutOfBounds:(BOOL)a3;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })obscuredInsetsForState:(long long)a0 ignoringKeyboard:(BOOL)a1;
- (void)_performVisualEffectTransitionWithCoordinator:(id)a0;
- (void)safeAreaInsetsDidChange;
- (void)_updateCapsuleAlpha;
- (void)_updateOffsetForPan;
- (void)beginDraggingWithOffset:(double)a0;
- (void)_dequeueOrCreateViewForItem:(id)a0 atIndex:(long long)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)_lockdownIndicatorTopVerticalSpacingAtMinimizationPercent:(double)a0;
- (void)_incrementAnimationCountForItems:(id)a0;
- (void)addGestureObserver:(id)a0;
- (void)_layOutToolbar;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_insetsByApplyingSelectedItemOffsetToInsetsForState:(long long)a0 includeKeyboard:(BOOL)a1;
- (void)setSelectedItemUsesLiftedPreviewAppearance:(BOOL)a0 animator:(id)a1;
- (void)_updateShowsMinimizedProgressView;
- (double)_percentToActivatingTopActionWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateTrailingCapsule;
- (id /* block */)_buttonPointerStyleProviderForContentView:(id)a0;
- (void)_updateVisualEffectGroupName;
- (void)_didReceiveDismissPan:(id)a0;
- (void)_updateMinimizedProgressViewFillColor;
- (void)_didEndBackdropHeightAnimation;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 forCapsuleFrameWithEvent:(id)a1;
- (void)_willBeginBackdropHeightAnimation;
- (void)_updateActions;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_lockdownIndicatorTransform;
- (id)viewForItemAtIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_bottomBackdropFrameForAlternateContent;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_passthroughRect;
- (void)_didReceiveTapOnPeekCapsule:(id)a0;
- (void)layoutSubviews;
- (id)detachViewForItemAtIndex:(long long)a0;
- (id)_indexesOfVisibleItemsWithSelectedItemIndex:(long long)a0;
- (void)_applyToolbarTheme;
- (void)_layOutItems:(id)a0 atIndexes:(id)a1 selectedItemIndex:(long long)a2;
- (BOOL)_itemsShouldUsePlatterEffect;
- (void)fluidProgressViewWillShowProgress:(id)a0;
- (void)registerContentViewIdentifier:(id)a0 block:(id /* block */)a1;
- (void)relinquishAlternateToolbarContentIfNeeded;
- (void)_layOutMinimizedProgressView;
- (id)contentViewForItemAtIndex:(long long)a0;
- (double)_keyboardHeightBelowCapsule;
- (BOOL)_effectiveItemsAreHidden;
- (void)_updateLayoutMargins;
- (void)_createToolbarBackdropIfNeeded;
- (void)_setUpdateRequestActive:(BOOL)a0;
- (void)_discardExcessViewsForReuse;
- (id)_setSelectedItemStateWithoutPerformingTransition:(long long)a0 options:(long long)a1;
- (double)_distanceToTopEdgeIncludingDeceleration:(BOOL)a0;
- (void)endDraggingWithTargetOffset:(double)a0 velocity:(double)a1;
- (double)_toolbarBackdropAlpha;
- (void)_didReceiveTap:(id)a0;
- (void)_sendMinimizationDidEndToObservers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_minimizedCapsuleFrameIgnoringKeyboard:(BOOL)a0;
- (void)_scheduleTimerToDiscardViewsForReuseIfNeeded;
- (void)didMoveToWindow;
- (void)beginVisualEffectTransition;
- (double)_insetForCapsuleEdgeWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)reattachView:(id)a0;

@end
