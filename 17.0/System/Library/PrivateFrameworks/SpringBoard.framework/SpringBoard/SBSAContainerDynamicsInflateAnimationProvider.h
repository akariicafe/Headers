@class NSSet, NSMapTable, NSMutableSet;

@interface SBSAContainerDynamicsInflateAnimationProvider : SBSABasePreferencesProvider {
    NSSet *_elementIdentitiesWithInflateApplied;
    NSMapTable *_pendingMilestonePropertyIdentitiesToElementIdentities;
    NSMutableSet *_elementIdentitiesWaitingToExpandBeforeInflation;
    NSMutableSet *_elementIdentitiesThatFinishedWaitingToExpandBeforeInflation;
}

- (void).cxx_destruct;
- (void)_addMilestonesIfNecessaryForUntrackedBoundsExpansionsForElementIdentities:(id)a0 preferencesMutator:(id)a1 context:(id)a2;
- (id)_identitiesWithMilestoneReached:(id)a0;
- (id)preferencesFromContext:(id)a0;

@end
