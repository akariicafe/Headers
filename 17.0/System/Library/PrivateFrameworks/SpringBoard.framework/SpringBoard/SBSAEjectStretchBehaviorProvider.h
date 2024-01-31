@class NSUUID, SBSAInterfaceElementPropertyIdentity;

@interface SBSAEjectStretchBehaviorProvider : SBSABasePreferencesProvider {
    long long _phase;
    NSUUID *_identifierOfActiveTimer;
    SBSAInterfaceElementPropertyIdentity *_pendingCollapsePropertyIdentity;
}

- (void).cxx_destruct;
- (BOOL)_checkContextForExpiredContractionMilestone:(id)a0;
- (BOOL)_isTimerExpired:(id)a0;
- (void)_startTimerIfNecessary:(id)a0;
- (id)preferencesFromContext:(id)a0;

@end
