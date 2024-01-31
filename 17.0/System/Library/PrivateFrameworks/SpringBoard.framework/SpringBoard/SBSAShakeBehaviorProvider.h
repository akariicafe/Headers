@interface SBSAShakeBehaviorProvider : SBSASequencedBehaviorProvider

- (struct CGPoint { double x0; double x1; })_defaultContainerParentViewCenterFromContext:(id)a0;
- (id)_updatedIdlePreferencesFromPreferences:(id)a0 context:(id)a1;
- (id)_updatedKickingPreferencesFromPreferences:(id)a0 context:(id)a1 relevantPropertyIdentity:(out id *)a2;
- (id)_updatedPreparingToSettlePreferencesFromPreferences:(id)a0 context:(id)a1 relevantPropertyIdentity:(out id *)a2;
- (id)_updatedSettlingPreferencesFromPreferences:(id)a0 context:(id)a1 relevantPropertyIdentity:(out id *)a2;
- (BOOL)canProceedWithContext:(id)a0 shouldRetry:(out BOOL *)a1;
- (long long)finalPhase;
- (double)milestoneForPhase:(long long)a0;
- (id)nameForPhase:(long long)a0;
- (id)updatedContextFromContext:(id)a0;
- (id)updatedPreferencesFromPreferences:(id)a0 context:(id)a1 relevantPropertyIdentity:(out id *)a2;

@end
