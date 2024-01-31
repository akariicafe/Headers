@class NSString, SBSceneManager, NSArray, SBPhysicalButtonBehaviorRequest, BSCompoundAssertion, SBAVSystemControllerCache, SBVolumeControl, SBWindowScene;

@interface SBPhysicalButtonSceneOverrideManager : NSObject <SBAVSystemControllerCacheObserver, SBFZStackParticipantObserver, SBPhysicalButtonSceneOverrideObservationState> {
    BOOL _sendsPhysicalVolumeButtonActions;
    BOOL _sendsPhysicalLockButtonActions;
    SBSceneManager *_sceneManager;
    SBWindowScene *_windowScene;
    SBVolumeControl *_volumeControl;
    SBAVSystemControllerCache *_avCache;
    NSArray *_lastPhysicalButtonSceneTargets;
    BSCompoundAssertion *_observers;
    SBPhysicalButtonBehaviorRequest *_volumeUpButtonRequest;
    SBPhysicalButtonBehaviorRequest *_volumeDownButtonRequest;
    SBPhysicalButtonBehaviorRequest *_lockButtonRequest;
    SBPhysicalButtonBehaviorRequest *_ringerButtonRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)zStackParticipantWithIdentifier:(long long)a0 settingsDidChange:(id)a1;
- (void)_processZStackParticipantSettings:(id)a0;
- (void).cxx_destruct;
- (void)zStackParticipantWithIdentifier:(long long)a0 wasAcquiredWithSettings:(id)a1;
- (id)_activeRequestForButton:(unsigned long long)a0;
- (BOOL)_canSendRingerButtonEventsToScene:(id)a0 withConfiguration:(id)a1;
- (BOOL)_canSendVolumeButtonEventsToScene:(id)a0 withConfiguration:(id)a1 activeVolumeCategoryName:(id)a2;
- (id)_dispatchingRuleInEnvironment:(id)a0 forDescriptors:(id)a1;
- (void)_notifyObserversSomethingDidChange;
- (id)_sceneForSceneTarget:(id)a0;
- (void)_sendActionForButtonType:(unsigned long long)a0 buttonState:(unsigned long long)a1 request:(id)a2;
- (BOOL)_sendsActionsForButtonType:(unsigned long long)a0;
- (void)cache:(id)a0 didUpdateActiveCategoryName:(id)a1;
- (id)cameraBehaviorScene;

@end
