@class NSUUID, SBSAInterfaceElementPropertyIdentity;
@protocol SAElementIdentifying;

@interface SBSAContainerDynamicsPulseAnimationProvider : SBSABasePreferencesProvider {
    long long _phase;
    NSUUID *_timerIdentifier;
    SBSAInterfaceElementPropertyIdentity *_pendingCollapsePropertyIdentity;
}

@property (readonly, copy, nonatomic) id<SAElementIdentifying> elementIdentity;

- (void).cxx_destruct;
- (BOOL)_isTimerExpired:(id)a0;
- (void)_startTimerIfNecessary:(id)a0;
- (id)initWithElementIdentity:(id)a0;
- (id)preferencesFromContext:(id)a0;

@end
