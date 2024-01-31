@class _UIScrollViewScrollingAnimatorState, CADisplayLink, NSHashTable, UIScrollView;

@interface _UIScrollViewScrollingAnimator : NSObject {
    CADisplayLink *_displayLink;
    _UIScrollViewScrollingAnimatorState *_currentScroll;
    BOOL _isAdjustingScrollViewOffset;
    struct CGPoint { double x; double y; } _velocity;
    struct CGPoint { double x; double y; } _modelPosition;
    struct CGPoint { double x; double y; } _idealPosition;
    struct CGPoint { double x; double y; } _idealPositionForMinimumTravel;
    NSHashTable *_trackedPressEvents;
}

@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic, getter=isScrollingInteractively) BOOL scrollingInteractively;

- (void)_displayLinkFired:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithScrollView:(id)a0;
- (void)_beginInteractiveAnimationForScrollState:(id)a0;
- (double)_distanceForIncrement:(unsigned long long)a0 inDirection:(unsigned long long)a1;
- (BOOL)_handlePressIfInterested:(id)a0;
- (struct CGPoint { double x0; double x1; })_interactiveScrollVelocity;
- (BOOL)_keyboardHandlesPressEventForKeyInput:(id)a0;
- (unsigned long long)_rubberbandableDirections;
- (id)_scrollStateForDirection:(unsigned long long)a0 granularity:(unsigned long long)a1;
- (id)_scrollStateForPress:(id)a0;
- (void)_scrollToContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)_scrollWithScrollToExtentAnimationTo:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)_scrollableDirectionsFromOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_startDisplayLinkIfNeeded;
- (void)_stopAnimatedScroll;
- (void)_stopDisplayLink;
- (void)animateScrollInDirection:(unsigned long long)a0 withGranularity:(unsigned long long)a1;
- (void)cancelInteractiveScroll;
- (BOOL)finishHandlingPressEvent:(id)a0;
- (BOOL)handlePressEventIfInterested:(id)a0;
- (BOOL)isInterestedInPress:(id)a0;

@end
