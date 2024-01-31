@interface SBSAMitosisTransitionProvider : SBSASequencedBehaviorProvider

- (id)_updatedBabyHeadstartPreferencesFromPreferences:(id)a0 context:(id)a1 relevantPropertyIdentity:(out id *)a2;
- (id)_updatedInitialUnanimatedPreferencesFromPreferences:(id)a0 context:(id)a1 relevantPropertyIdentity:(out id *)a2;
- (id)_updatedPrimaryLayoutPreferencesFromPreferences:(id)a0 context:(id)a1 relevantPropertyIdentity:(out id *)a2;
- (BOOL)canPersistAcrossLayoutStateChanges;
- (BOOL)canProceedWithContext:(id)a0 shouldRetry:(out BOOL *)a1;
- (double)delayForPhase:(long long)a0;
- (long long)finalPhase;
- (double)milestoneForPhase:(long long)a0;
- (id)nameForPhase:(long long)a0;
- (BOOL)phaseIsTimeDelayBased:(long long)a0;
- (id)updatedPreferencesFromPreferences:(id)a0 context:(id)a1 relevantPropertyIdentity:(out id *)a2;

@end
