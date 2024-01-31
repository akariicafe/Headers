@class NSString, TRASettingsActuationContext, NSNumber;

@interface SBTraitsRoleActuatesWithCustomContext : SBTraitsOrientationStageComponent <TRAPreferencesStageResolutionPolicySpecifying>

@property (readonly, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) TRASettingsActuationContext *actuationContext;
@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithComponentOrder:(id)a0;
- (void).cxx_destruct;
- (void)updateStageParticipantsResolutionPolicies:(id)a0 context:(id)a1;
- (id)initWithComponentOrder:(id)a0 actuationContext:(id)a1;

@end
