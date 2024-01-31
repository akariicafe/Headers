@class CADisplayLink;
@protocol TUDynamicBarAnimatorDelegate;

@interface TUDynamicBarAnimator : NSObject {
    double _topBarHeightForState[2];
    double _bottomBarOffsetForState[2];
    BOOL _dragging;
    CADisplayLink *_displayLink;
    double _targetTopBarHeight;
    double _unroundedTopBarHeight;
    double _lastUnroundedTopBarHeight;
    BOOL _didHideBarsByMoving;
    BOOL _didHideOrShowBarsExplicitly;
    double _lastOffset;
    BOOL _inSteadyState;
}

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long targetState;
@property (readonly, nonatomic) double topBarHeight;
@property (readonly, nonatomic) double bottomBarOffset;
@property (nonatomic) double minimumTopBarHeight;
@property (nonatomic) double maximumBottomBarOffset;
@property (readonly, nonatomic) double maximumTopBarHeight;
@property (readonly, nonatomic) double minimumBottomBarOffset;
@property (weak, nonatomic) id<TUDynamicBarAnimatorDelegate> delegate;

- (void)_updateDisplayLink;
- (void)_displayLinkFired:(id)a0;
- (id)init;
- (void)beginScrollingWithOffset:(double)a0;
- (void)updateScrollingWithOffset:(double)a0;
- (double)_bottomBarOffsetForTopBarHeight:(double)a0;
- (void)endScrollingWithTargetOffset:(double)a0 velocity:(double)a1;
- (void)_setInSteadyState:(BOOL)a0;
- (void)_transitionToSteadyState;
- (void)_moveBarsWithDelta:(double)a0;
- (void)_updateOutputs;
- (void)setBottomBarOffset:(double)a0 forState:(long long)a1;
- (BOOL)canTransitionToState:(long long)a0;
- (void).cxx_destruct;
- (double)_constrainTopBarHeight:(double)a0;
- (void)attemptTransitionToState:(long long)a0 animated:(BOOL)a1;
- (void)setTopBarHeight:(double)a0 forState:(long long)a1;

@end
