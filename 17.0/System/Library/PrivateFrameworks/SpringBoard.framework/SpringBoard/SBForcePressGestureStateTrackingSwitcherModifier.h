@class SBAppLayout;

@interface SBForcePressGestureStateTrackingSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } velocity;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } averageVelocity;
@property (readonly, nonatomic) double panTranslationThreshold;
@property (readonly, nonatomic) double panProgress;
@property (readonly, nonatomic) double forceProgress;
@property (readonly, nonatomic) BOOL didBeginPanning;
@property (readonly, nonatomic) BOOL didPop;

- (void).cxx_destruct;
- (BOOL)_canCommitToSwitcherWithPanPercent:(double)a0 forceComplete:(BOOL)a1;
- (long long)_currentFinalDestination;
- (double)_currentProgressForGestureEvent:(id)a0;
- (double)_projectedTranslationWithVelocity:(struct CGPoint { double x0; double x1; })a0 initialTranslation:(double)a1;
- (id)_responseForActivatingFinalDestination:(long long)a0;
- (id)_updateForGestureDidBeginWithGestureEvent:(id)a0;
- (id)_updateForGestureDidChangeWithGestureEvent:(id)a0;
- (id)_updateForGestureDidEndWithGestureEvent:(id)a0;
- (void)_updateForcePressTrackingWithGestureEvent:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (id)initWithSelectedAppLayout:(id)a0;

@end
