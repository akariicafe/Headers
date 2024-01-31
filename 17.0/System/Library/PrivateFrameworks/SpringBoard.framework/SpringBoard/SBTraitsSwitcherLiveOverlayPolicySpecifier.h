@class NSString;

@interface SBTraitsSwitcherLiveOverlayPolicySpecifier : SBAbstractTraitsSwitcherPolicySpecifier

@property (nonatomic) long long primaryElementResolutionPolicy;
@property (copy, nonatomic) NSString *primaryElementParticipantIdentifier;
@property (nonatomic) long long nonPrimaryResolutionPolicy;

- (id)initWithComponentOrder:(id)a0 arbiter:(id)a1;
- (void).cxx_destruct;
- (void)_updateParticipant:(id)a0 withPolicy:(long long)a1 context:(id)a2;
- (void)_updateAcquiredParticipantsPolicies:(id)a0 context:(id)a1;
- (id)_specifierDescription;

@end
