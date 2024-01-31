@class SBTraitsSwitcherPolicySpecifier, NSString, SBTraitsSwitcherLiveOverlayPolicySpecifier, TRAArbiter, TRAParticipant, NSMutableDictionary, SBTraitsPipelineBlockBasedPolicySpecifier;
@protocol SBSwitcherTraitsAssistantDelegate, BSInvalidatable;

@interface SBSwitcherTraitsAssistant : NSObject <SBTraitsParticipantDelegate> {
    SBTraitsSwitcherPolicySpecifier *_switcherPolicySpecifier;
    SBTraitsSwitcherLiveOverlayPolicySpecifier *_liveOverlaysPolicySpecifier;
    id<BSInvalidatable> _stateCaptureInvalidatable;
    TRAParticipant *_guidingPortraitOnlyParticipant;
    TRAParticipant *_guidingLandscapeOnlyParticipant;
    NSMutableDictionary *_guidingSceneOrientationRequestParticipantsMap;
    NSMutableDictionary *_participantUniqueIDToAssociatedParticipantMap;
    SBTraitsPipelineBlockBasedPolicySpecifier *_blockBasedPolicySpecifier;
}

@property (readonly, weak, nonatomic) TRAArbiter *traitsArbiter;
@property (readonly, weak, nonatomic) TRAParticipant *switcherParticipant;
@property (readonly, weak, nonatomic) id<SBSwitcherTraitsAssistantDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupStateCapture;
- (void)updatePreferencesForParticipant:(id)a0 updater:(id)a1;
- (void)dealloc;
- (id)_stateCaptureDescription;
- (void).cxx_destruct;
- (void)didChangeSettingsForParticipant:(id)a0 context:(id)a1;
- (void)_handleUpdateRequest:(id)a0;
- (id)_guidingPortraitOnlyLiveOverlay;
- (void)_addGuidingParticpantsIdentifiersToArray:(id)a0;
- (void)_addGuidingSpecifierIfNeeded;
- (void)_evaluateIfGuidingSpecifierIsSillNeeded;
- (id)_guidingLandscapeOnlyLiveOverlay;
- (id)_guidingSceneOrientationRequestParticipantWithMask:(unsigned long long)a0;
- (BOOL)_isContentContainerAspectRatioPortrait;
- (void)_setupGuidingRelationshipIfNeededForParticipant:(id)a0 withSceneHandle:(id)a1;
- (void)_setupPolicySpecifierIfNeeded;
- (void)_updateAcquiredParticipantsPolicies:(id)a0;
- (void)_updateArbitrationForElementsParticipants:(id)a0 sceneHandleProviderBlock:(id /* block */)a1 forceResolution:(BOOL)a2 reason:(id)a3;
- (BOOL)_updateGuidingSpecifiersIfNeededForParticipants:(id)a0 sceneHandleProviderBlock:(id /* block */)a1;
- (void)createTraitsParticipantsForLayoutElements:(id)a0 outParticipantsByElementIdentifier:(out id *)a1 outDelegatesByParticipant:(out id *)a2 outPrimaryDelegate:(out id *)a3;
- (id)initWithTraitsArbiter:(id)a0 switcherParticipant:(id)a1 delegate:(id)a2;
- (void)updateAllParticipants:(id)a0 withPrimaryDelegate:(id)a1 nonPrimaryPolicy:(long long)a2 primaryPolicy:(long long)a3 ownPolicy:(long long)a4;

@end
