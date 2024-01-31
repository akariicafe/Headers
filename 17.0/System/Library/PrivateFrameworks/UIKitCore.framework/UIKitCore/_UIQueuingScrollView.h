@class NSArray, NSMutableArray, UIView;
@protocol _UIQueuingScrollViewDataSource, _UIQueuingScrollViewDelegate;

@interface _UIQueuingScrollView : UIScrollView {
    long long _navigationOrientation;
    NSArray *_views;
    NSArray *_wrapperViews;
    UIView *_pendingVisibleView;
    NSMutableArray *_viewStateQueue;
    NSMutableArray *_completionStateQueue;
    BOOL _manualScrollInProgress;
    struct { unsigned char delegateInterestedInPendingScrolls : 1; unsigned char delegateInterestedInCommittedScrolls : 1; unsigned char delegateInterestedInCompletedScrolls : 1; unsigned char delegateInterestedInBailedOutScrolls : 1; unsigned char delegateInterestedFinishedScrolling : 1; unsigned char delegateCanVetoSubviewLayout : 1; unsigned char dataSourceSuppliesBeforeView : 1; unsigned char dataSourceSuppliesAfterView : 1; unsigned char dataSourceInterestedInFlushedViews : 1; } _delegateFlags;
}

@property (readonly, nonatomic) UIView *visibleView;
@property (weak, nonatomic) id<_UIQueuingScrollViewDelegate> qDelegate;
@property (weak, nonatomic) id<_UIQueuingScrollViewDataSource> qDataSource;
@property (nonatomic) double pageSpacing;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } disabledScrollingRegion;

- (BOOL)canBecomeFocused;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_scrollViewAnimationEnded:(id)a0 finished:(BOOL)a1;
- (void)layoutSubviews;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (id)_viewAfterView:(id)a0;
- (unsigned long long)_abuttedPagingEdges;
- (void)_adjustContentInsets;
- (void)_boundsDidChangeToSize:(struct CGSize { double x0; double x1; })a0;
- (void)_cleanUpCompletionState:(id)a0 didFinish:(BOOL)a1 didComplete:(BOOL)a2;
- (void)_commitGestureDrivenScrollRevealingView:(id)a0 concealingView:(id)a1 inDirection:(long long)a2 canComplete:(BOOL)a3;
- (BOOL)_dataSourceProvidesViews;
- (id)_dequeueViewForIndex:(long long)a0;
- (void)_didEndDraggingManualScroll;
- (void)_didEndManualScroll;
- (void)_didEndProgrammaticScroll;
- (void)_didEndScroll:(BOOL)a0;
- (void)_didScrollWithAnimation:(BOOL)a0 force:(BOOL)a1;
- (void)_enqueueAnimatedScrollInDirection:(long long)a0 withView:(id)a1 completion:(id /* block */)a2;
- (void)_enqueueCompletionState:(id)a0;
- (void)_flushView:(id)a0 animated:(BOOL)a1;
- (BOOL)_gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_handleDirectionalPageWithHorizontalVelocity:(double)a0 verticalVelocity:(double)a1;
- (void)_invalidateOffscreenViews;
- (BOOL)_isDeceleratingInOppositionToNavigationDirection:(long long)a0;
- (BOOL)_isScrollInProgress:(BOOL)a0;
- (long long)_navigationDirectionForActiveScroll:(BOOL)a0;
- (long long)_navigationDirectionFromCurrentOffset;
- (void)_notifyDelegateDidBailoutOfScrollAndRevealedView:(id)a0;
- (void)_notifyDelegateDidCommitManualScroll:(BOOL)a0 toRevealView:(id)a1 concealView:(id)a2 direction:(long long)a3 animated:(BOOL)a4 canComplete:(BOOL)a5;
- (void)_notifyDelegateDidEndManualScroll:(BOOL)a0 toRevealView:(id)a1 direction:(long long)a2 animated:(BOOL)a3 didFinish:(BOOL)a4 didComplete:(BOOL)a5;
- (void)_notifyDelegateDidFinishScrolling;
- (void)_notifyDelegateWillManuallyScroll:(BOOL)a0 toRevealView:(id)a1 concealingView:(id)a2 animated:(BOOL)a3;
- (void)_replaceViews:(id)a0 updatingContents:(BOOL)a1 adjustContentInsets:(BOOL)a2 animated:(BOOL)a3;
- (id)_requestViewForIndex:(long long)a0;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)a0;
- (void)_setFrameAndApplyPageSpacing:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setWrappedViewAtIndex:(long long)a0 withView:(id)a1;
- (id)_viewAtIndex:(long long)a0 loadingIfNecessary:(BOOL)a1 updatingContents:(BOOL)a2 animated:(BOOL)a3;
- (id)_viewBefore:(BOOL)a0 view:(id)a1;
- (id)_viewBeforeView:(id)a0;
- (id)_visibleView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 navigationOrientation:(long long)a1;
- (BOOL)isManualScrollInProgress;
- (BOOL)isPreviousScrollCompatibleWithScrollInDirection:(long long)a0;
- (void)setView:(id)a0 direction:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;

@end
