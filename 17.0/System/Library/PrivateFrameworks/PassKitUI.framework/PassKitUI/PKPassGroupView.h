@class PKPassView, NSString, PKReusablePassViewQueue, UILongPressGestureRecognizer, UIScrollView, NSMutableDictionary, PKGroup, UIMotionEffectGroup, UIPanGestureRecognizer, UIViewController, UIPageControl, PKRemoveableAnimationTrackerStore;
@protocol PKPassGroupViewDelegate;

@interface PKPassGroupView : UIView <WLCardViewDelegate, PKGroupDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate> {
    unsigned short _animationCounter;
    unsigned short _pageControlAnimationCounter;
    unsigned short _frontFaceContentModePinningCounter;
    struct { unsigned char showingPageControl : 1; unsigned char scrollingEnabled : 1; unsigned char indeterminateState : 1; unsigned char fanningEnabled : 1; unsigned char overridePriorContentOffset : 1; unsigned char delegateOverridesFrontmostContentWhileStacked : 1; unsigned char delegateOverridesFrontmostContentWhilePiled : 1; unsigned char delegateOverridesAllowPanning : 1; struct CGPoint { double x; double y; } priorContentOffset; struct CGPoint { double x; double y; } instantaneousContentOffsetDelta; unsigned long long numberOfPasses; unsigned long long selectedIndex; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds; } _layoutState;
    NSMutableDictionary *_passViewsByUniqueID;
    PKRemoveableAnimationTrackerStore *_delayedAnimations;
    UIScrollView *_horizontalScrollView;
    double _dimmerValue;
    BOOL _canPan;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIMotionEffectGroup *_motionEffectGroup;
    BOOL _isAuthenticating;
    UIViewController *_detailsVC;
    NSString *_passBeingPresented;
    BOOL _groupWasMarkedDeleted;
    BOOL _passBeingPresentedWasDeleted;
    BOOL _invalidated;
    BOOL _effectivePaused;
}

@property (retain, nonatomic) PKPassView *frontmostPassView;
@property (nonatomic, getter=isModallyPresented) BOOL modallyPresented;
@property (nonatomic, getter=isLoaned) BOOL loaned;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) PKGroup *group;
@property (weak, nonatomic) PKReusablePassViewQueue *passViewQueue;
@property (nonatomic) long long presentationState;
@property (readonly, nonatomic) unsigned long long displayIndex;
@property (readonly, nonatomic) UIPageControl *pageControl;
@property (readonly, nonatomic) struct UIOffset { double x0; double x1; } offsetForFrontmostPassWhileStacked;
@property (readonly, nonatomic) UILongPressGestureRecognizer *pressGestureRecognizer;
@property (weak, nonatomic) id<PKPassGroupViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (struct CGSize { double x0; double x1; })_contentSize;
- (void)_handleLongPress:(id)a0;
- (void)sizeToFit;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)removeFromSuperview;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)invalidate;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_handlePanGesture:(id)a0;
- (void)_handlePress:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)group:(id)a0 didInsertPass:(id)a1 atIndex:(unsigned long long)a2;
- (void)group:(id)a0 didMovePassFromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (void)group:(id)a0 didRemovePass:(id)a1 atIndex:(unsigned long long)a2;
- (void)group:(id)a0 didUpdatePass:(id)a1 atIndex:(unsigned long long)a2;
- (void)passViewTapped:(id)a0;
- (void)_addPanAndLongPressGestureRecognizers;
- (void)_applyContentMode:(long long)a0 toPassView:(id)a1 animated:(BOOL)a2;
- (void)_beginTrackingAnimation;
- (long long)_defaultContentModeForIndex:(unsigned long long)a0;
- (void)_endTrackingAnimation;
- (void)_enumerateIndicesInFannedOrderWithHandler:(id /* block */)a0;
- (void)_enumerateIndicesInStackOrderWithHandler:(id /* block */)a0;
- (void)_enumeratePassViewsInStackOrderWithHandler:(id /* block */)a0;
- (BOOL)_isOurGestureRecognizer:(id)a0;
- (id)_loadCardViewForIndex:(unsigned long long)a0 contentMode:(long long)a1;
- (void)_pageControlChanged:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pagingFrameForCardView:(id)a0 atIndex:(unsigned long long)a1;
- (void)_preparePageControlForReuse;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfFannedIndices;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfPagingIndices;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfVisibleIndices;
- (void)_removeDelayedAnimations;
- (void)_removePanAndLongPressGestureRecognizers;
- (struct CGPoint { double x0; double x1; })_stackingPositionForPassViewLayer:(id)a0 atStackIndex:(unsigned long long)a1 withSeparation:(BOOL)a2;
- (void)_updateCachedGroupState;
- (void)_updateCachedLayoutState;
- (void)_updateDelegateResponderCache;
- (void)_updateFrontmostPassViewIfNecessary;
- (void)_updateLoadedViews:(BOOL)a0;
- (void)_updatePageControlVisibilityWithDelay:(double)a0;
- (void)_updatePageControlWithDisplayIndex;
- (void)_updatePausedState;
- (void)applyContentModesAnimated:(BOOL)a0;
- (void)beginPinningFrontFaceContentMode;
- (double)continuousShadowIndex;
- (void)dismissBackOfPassIfNecessaryForUniqueID:(id)a0;
- (void)endPinningFrontFaceContentMode;
- (void)faceFrameDidChangeForPassView:(id)a0;
- (id)initWithGroup:(id)a0 delegate:(id)a1 presentationState:(long long)a2;
- (void)layoutPagesAnimated:(BOOL)a0;
- (void)layoutStackAnimated:(BOOL)a0;
- (void)layoutSubviewsAnimated:(BOOL)a0;
- (void)markGroupDeleted;
- (BOOL)passView:(id)a0 deleteButtonEnabledForPass:(id)a1;
- (void)passView:(id)a0 deleteButtonPressedForPass:(id)a1;
- (void)passView:(id)a0 didPresentPassDetailsViewController:(id)a1;
- (void)passView:(id)a0 willPresentPassDetailsViewController:(id)a1;
- (void)passViewDidResize:(id)a0 animated:(BOOL)a1;
- (void)passViewExpandButtonTapped:(id)a0;
- (id)passViewForIndex:(unsigned long long)a0;
- (void)presentDiff:(id)a0 completion:(id /* block */)a1;
- (void)presentPassWithUniqueID:(id)a0;
- (void)presentPassWithUniqueID:(id)a0 withContext:(id)a1 animated:(BOOL)a2;
- (void)setDimmer:(double)a0 animated:(BOOL)a1;
- (void)setFrontmostPassView:(id)a0 withContext:(id)a1 animated:(BOOL)a2;
- (void)setFrontmostPassViewFromPassIndex:(long long)a0;
- (void)setFrontmostPassViewFromPassIndex:(long long)a0 withContext:(id)a1 animated:(BOOL)a2;
- (void)setPassViewExpanded:(BOOL)a0 forPass:(id)a1 animated:(BOOL)a2;
- (void)setPresentationState:(long long)a0 animated:(BOOL)a1;
- (void)setPresentationState:(long long)a0 withContext:(id)a1 animated:(BOOL)a2;
- (void)updatePageControlFrame;
- (void)updateToStackWithProgress:(double)a0 originalPosition:(struct CGPoint { double x0; double x1; })a1 timingFunction:(id /* block */)a2;

@end
