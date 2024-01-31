@class NSMutableArray, LAUICheckmarkLayer;

@interface HPSSpatialProfileEarPillContainerView : UIView {
    NSMutableArray *_pillViews;
    LAUICheckmarkLayer *_successAnimation;
    long long _numberOfVisiblePillViews;
    long long _clockwise;
    long long _counterwise;
    long long _lastAngle;
    BOOL _hasPillStateStash;
    unsigned long long _stashedPillStates[11];
}

@property (nonatomic) int state;
@property (nonatomic) struct CGPoint { double x; double y; } enrollViewCenter;
@property (readonly, nonatomic) double radius;

- (id)init;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)stashPillStates;
- (void)_animateToFinishedCompletion:(id /* block */)a0;
- (long long)_indexForPillAtAngle:(double)a0;
- (unsigned long long)_numberOfVisiblePillViews;
- (void)animateToState:(int)a0 completion:(id /* block */)a1;
- (BOOL)fillPillsAroundAngle:(double)a0;
- (BOOL)fillPillsAroundAngle:(double)a0 forTutorial:(BOOL)a1;
- (double)percentOfPillsCompleted;
- (void)resetPillsAnimated:(BOOL)a0;
- (void)setAllPillState:(unsigned long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setRadius:(double)a0 center:(struct CGPoint { double x0; double x1; })a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)unfilledDirections;
- (void)unstashPillStatesAnimated:(BOOL)a0;
- (BOOL)unstashPillStatesIfNeededAnimated:(BOOL)a0;
- (void)fillCentralPillsWithCompletion:(id /* block */)a0;
- (void)fillLeftPillsWithCompletion:(id /* block */)a0;
- (void)fillRightPillsWithCompletion:(id /* block */)a0;

@end
