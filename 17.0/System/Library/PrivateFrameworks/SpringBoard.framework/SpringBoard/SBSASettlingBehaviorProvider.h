@class NSDictionary, NSSet, SBSAElementLayoutTransition;

@interface SBSASettlingBehaviorProvider : SBSABasePreferencesProvider {
    SBSAElementLayoutTransition *_lastChangingElementLayoutTransition;
    long long _activePhase;
    NSDictionary *_containerIDsToOvershootOutsets;
    NSSet *_pendingPhaseTransitionPropertyIdentities;
    NSSet *_pendingCollisionPropertyIdentities;
    NSSet *_pendingSteadyPropertyIdentities;
    NSDictionary *_stackContainerInterfaceElementIdentifiersToBounds;
    BOOL _collisionImminent;
    BOOL _collisionIsNotOvershooting;
}

- (void).cxx_destruct;
- (id)_fluidBehaviorSettingsForTransitionPhase:(long long)a0 forElementContext:(id)a1;
- (double)_overshootFractionForDampingRatio:(double)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_overshootOutsetsForTransitionPhase:(long long)a0 baseOutsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_overshootOutsetsTargetingContainerDescription:(id)a0 initialContainerDescription:(id)a1 settings:(id)a2 context:(id)a3;
- (double)_progressMilestoneForTransitionPhase:(long long)a0;
- (void)_resetSettlingState;
- (id)preferencesFromContext:(id)a0;

@end
