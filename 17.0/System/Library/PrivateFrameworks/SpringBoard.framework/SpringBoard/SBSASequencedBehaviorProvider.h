@class NSUUID, NSArray;
@protocol SAElementIdentifying, SBSAInterfaceElementPropertyIdentifying;

@interface SBSASequencedBehaviorProvider : SBSABasePreferencesProvider {
    long long _activePhase;
    NSArray *_elementContexts;
    id<SBSAInterfaceElementPropertyIdentifying> _pendingPhaseTransitionPropertyIdentity;
    NSUUID *_pendingTimerIdentifier;
}

@property (readonly, nonatomic) long long activePhase;
@property (readonly, copy, nonatomic) NSUUID *participatingInterfaceElementIdentifier;
@property (readonly, copy, nonatomic) id<SAElementIdentifying> participatingElementIdentification;

- (void).cxx_destruct;
- (void)_setActivePhase:(long long)a0 context:(id)a1 reason:(id /* block */)a2;
- (BOOL)_isTimerExpired:(id)a0 duration:(out double *)a1;
- (void)_startTimerIfNecessary:(id)a0 withInterval:(double)a1;
- (BOOL)canPersistAcrossLayoutStateChanges;
- (BOOL)canProceedWithContext:(id)a0 shouldRetry:(out BOOL *)a1;
- (double)delayForPhase:(long long)a0;
- (long long)finalPhase;
- (id)initWithParticipantIdentifier:(id)a0;
- (double)milestoneForPhase:(long long)a0;
- (BOOL)milestoneForPhaseRequiresAnimationFinished:(long long)a0;
- (id)nameForPhase:(long long)a0;
- (BOOL)phaseIsTimeDelayBased:(long long)a0;
- (id)preferencesFromContext:(id)a0;
- (id)updatedContextFromContext:(id)a0;
- (id)updatedPreferencesFromPreferences:(id)a0 context:(id)a1 relevantPropertyIdentity:(out id *)a2;

@end
