@class NSHashTable, NSString, TRAArbitrationInputsValidationStage, NSArray, NSSet, NSMutableDictionary, TRAArbitrationInputs, NSMutableSet, NSMutableArray, TRAArbiterUpdateOrientationResolutionPolicySpecifier;
@protocol BSInvalidatable, TRAArbiterDrawingDataSource, TRAArbiterInputsDataSource;

@interface TRAArbiter : NSObject <BSDescriptionProviding> {
    NSSet *_zOrderStageRoles;
    NSSet *_orientationStageRoles;
    NSSet *_ambientPresentationStageRoles;
    NSSet *_userInterfaceStyleStageRoles;
    NSSet *_allStagesRoles;
    NSMutableDictionary *_liveRolesCounter;
    NSMutableDictionary *_acquiredParticipantsByUniqueIdentifier;
    NSMutableDictionary *_acquiredParticipantsByPreferencesType;
    NSMutableSet *_participantsNeedingUpdate;
    NSMutableArray *_arbiterNeedsUpdateReasons;
    NSMutableSet *_updatedParticipants;
    NSHashTable *_observers;
    TRAArbiterUpdateOrientationResolutionPolicySpecifier *_resolutionUpdateOrientationSpecifier;
    TRAArbitrationInputsValidationStage *_inputsValidationStage;
    NSArray *_preferencesResolutionStages;
    TRAArbitrationInputs *_lastRawInputs;
    TRAArbitrationInputs *_lastValidatedInputs;
    id<BSInvalidatable> _stateDumpHandle;
}

@property (readonly, weak, nonatomic) id<TRAArbiterInputsDataSource> inputsDataSource;
@property (readonly, weak, nonatomic) id<TRAArbiterDrawingDataSource> drawingDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)addObserver:(id)a0;
- (id)acquireParticipantWithRole:(id)a0 delegate:(id)a1;
- (id)ambientPresentationResolutionStage;
- (id)initWithRolesProvider:(id)a0 inputsDataSource:(id)a1 drawingDataSource:(id)a2;
- (id)inputsValidationStage;
- (id)orientationResolutionStage;
- (void)setNeedsUpdateArbitrationWithContext:(id)a0;
- (id)userInterfaceStyleResolutionStage;
- (id)zOrderResolutionStage;
- (void)_removeForceResolutionSpecifier;
- (id)_setupStateDump;
- (void)_addOrientationResolutionPolicySpecifierForClientContext:(id)a0;
- (id)_defaultUpdateContextWithReason:(id)a0 animatable:(BOOL)a1;
- (void)_inputsValidationStageDidUpdateValidators:(id)a0;
- (void)_invalidateParticipant:(id)a0;
- (id)_newOrderedPreferencesResolutionStagesWithRolesProvider:(id)a0;
- (id)_newUniqueIdentifierForRole:(id)a0;
- (void)_participantDidUpdatePreferences:(id)a0;
- (void)_participantDidUpdateSettings:(id)a0;
- (void)_preferencesResolutionStageDidUpdateComponents:(id)a0 animate:(BOOL)a1;
- (id)_resolutionStageWithType:(long long)a0;
- (void)_setNeedsUpdateArbitrationWithClientContext:(id)a0 defaultContext:(id)a1;
- (void)_setNeedsUpdateArbitrationWithReason:(id)a0 animated:(BOOL)a1;
- (void)_updateArbitrationWithClientContext:(id)a0 defaultContext:(id)a1;
- (void)noteArbiterDidCompleteTransitionWithContext:(id)a0;
- (void)noteArbiterWillBeginTransitionWithContext:(id)a0;
- (void)updateArbitrationIfNeeded;

@end
