@class NSString, NSNumber;

@interface SBTraitsRoleResolvesOrientationInIsolationPolicySpecifier : SBTraitsOrientationStageComponent <TRAPreferencesStageResolutionPolicySpecifying> {
    NSString *_targetRole;
}

@property (readonly, nonatomic) NSString *targetRole;
@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithComponentOrder:(id)a0;
- (void).cxx_destruct;
- (void)updateStageParticipantsResolutionPolicies:(id)a0 context:(id)a1;

@end
