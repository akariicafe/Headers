@class SBSAElementLayoutTransition;

@interface SBSAAcceptanceBounceBehaviorProvider : SBSASequencedBehaviorProvider {
    long long _style;
    id /* block */ _triggeredBlock;
    SBSAElementLayoutTransition *_lastSeenLastChangingElementTransition;
    BOOL _shouldBeRemovedUponLayoutChange;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_expandedBouncingContainerViewFrameForBounceStyle:(long long)a0 unexpandedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_updatedReboundingPreferencesFromPreferences:(id)a0 context:(id)a1 relevantPropertyIdentity:(out id *)a2;
- (id)_updatedRevealAcceptedElementPreferencesFromPreferences:(id)a0 context:(id)a1 relevantPropertyIdentity:(out id *)a2;
- (id)_updatedStretchingPreferencesFromPreferences:(id)a0 context:(id)a1 relevantPropertyIdentity:(out id *)a2;
- (BOOL)canPersistAcrossLayoutStateChanges;
- (BOOL)canProceedWithContext:(id)a0 shouldRetry:(out BOOL *)a1;
- (double)delayForPhase:(long long)a0;
- (long long)finalPhase;
- (id)initWithParticipantIdentifier:(id)a0 style:(long long)a1 triggeredBlock:(id /* block */)a2;
- (double)milestoneForPhase:(long long)a0;
- (BOOL)milestoneForPhaseRequiresAnimationFinished:(long long)a0;
- (id)nameForPhase:(long long)a0;
- (BOOL)phaseIsTimeDelayBased:(long long)a0;
- (void)removeFromParentProvider;
- (id)updatedContextFromContext:(id)a0;
- (id)updatedPreferencesFromPreferences:(id)a0 context:(id)a1 relevantPropertyIdentity:(out id *)a2;

@end
