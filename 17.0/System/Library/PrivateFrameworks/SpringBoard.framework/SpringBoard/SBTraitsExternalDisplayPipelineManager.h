@class NSString, SBTraitsExternalDisplayRolesAndDefaultPoliciesProvider, TRAArbitrationInputs, TRAParticipant;

@interface SBTraitsExternalDisplayPipelineManager : SBTraitsPipelineManager <TRAArbiterInputsDataSource, SBTraitsParticipantDelegate> {
    TRAArbitrationInputs *_inputs;
    SBTraitsExternalDisplayRolesAndDefaultPoliciesProvider *_rolesAndDefaultPoliciesProvider;
    TRAParticipant *_activeOrientationParticipant;
}

@property (readonly, nonatomic) TRAArbitrationInputs *inputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePreferencesForParticipant:(id)a0 updater:(id)a1;
- (id)init;
- (void)userInterfaceStyleDidUpdateWithAnimationSettings:(id)a0 fence:(id)a1;
- (id)ambientPresentationStageRoles;
- (void)setupDefaultPipelineForArbiter:(id)a0;
- (void).cxx_destruct;
- (id)zOrderStageRoles;
- (id)orientationStageRoles;
- (void)didChangeSettingsForParticipant:(id)a0 context:(id)a1;
- (id)userInterfaceStyleStageRoles;
- (void)_noteInputsNeedUpdateWithAnimationSettings:(id)a0 fence:(id)a1 reason:(id)a2;
- (void)_updateInputsForCurrentUserInterfaceStyle;

@end
