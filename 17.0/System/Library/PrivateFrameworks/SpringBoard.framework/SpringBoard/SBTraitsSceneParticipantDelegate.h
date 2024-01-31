@class NSString, TRAArbiter, FBScene, TRAParticipant, BKSAnimationFenceHandle, SBTraitsSceneOrientationRequestAssistant, SBSceneHandle, NSNumber, UIApplicationSceneClientSettingsDiffInspector;

@interface SBTraitsSceneParticipantDelegate : NSObject <FBSceneObserver, SBSceneHandleObserver, BSInvalidatable, SBTraitsParticipantDelegate, SBTraitsSceneSettingsUpdater> {
    BOOL _invalidated;
    SBTraitsSceneOrientationRequestAssistant *_orientationRequestActionAssistant;
    UIApplicationSceneClientSettingsDiffInspector *_sceneClientSettingsDiffInspector;
    long long _orientationMode;
    BKSAnimationFenceHandle *_fallbackFence_90210730;
}

@property (nonatomic) BOOL canDetermineActiveOrientation;
@property (retain, nonatomic) NSNumber *preferredSceneLevel;
@property (nonatomic, getter=isOrientationActuationAnimatable) BOOL orientationActuationEnabled;
@property (nonatomic, getter=isOrientationActuationAnimatable) BOOL orientationActuationAnimatable;
@property (nonatomic) long long orientationModeOverride;
@property (nonatomic) unsigned long long initialSupportedOrientationsOverride;
@property (copy, nonatomic) id /* block */ actuateZOrderAlongsideBlock;
@property (copy, nonatomic) id /* block */ actuateOrientationAlongsideBlock;
@property (copy, nonatomic) id /* block */ actuateOrientationSettingsAlongsideBlock;
@property (weak, nonatomic) FBScene *scene;
@property (weak, nonatomic) SBSceneHandle *sceneHandle;
@property (weak, nonatomic) TRAArbiter *arbiter;
@property (weak, nonatomic) TRAParticipant *participant;
@property (readonly, nonatomic) long long sceneCurrentOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePreferencesForParticipant:(id)a0 updater:(id)a1;
- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (unsigned long long)_sanitizedMask:(unsigned long long)a0 forApplication:(id)a1;
- (void)dealloc;
- (long long)_preferredOrientation;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (unsigned long long)_bestGuessSupportedInterfaceOrientations;
- (void)updatePreferencesWithUpdater:(id)a0;
- (id)initWithScene:(id)a0;
- (void)appendDescriptionForParticipant:(id)a0 withBuilder:(id)a1 multilinePrefix:(id)a2;
- (unsigned long long)_allLegalOrientations;
- (id)_application;
- (void)_resetToInitialState;
- (unsigned long long)_supportedOrientations;
- (void)invalidate;
- (void)updateOrientationSceneSettingsForParticipant:(id)a0;
- (void)_evaluateOrientationTransitionContext:(id)a0;
- (void)sceneHandle:(id)a0 didDestroyScene:(id)a1;
- (long long)_orientationMode;
- (unsigned long long)_hostReferenceAngleModeForDisplayIdentity:(id)a0;
- (void).cxx_destruct;
- (void)actuateUserInterfaceStyleSettingsWithContext:(id)a0;
- (BOOL)_isAllowedToHavePortraitUpsideDown;
- (void)actuateOrientationSettingsWithContext:(id)a0;
- (BOOL)needsActuationForUpdateReasons:(long long)a0;
- (void)participantWillInvalidate:(id)a0;
- (void)sceneContentStateDidChange:(id)a0;
- (void)didChangeSettingsForParticipant:(id)a0 context:(id)a1;
- (id)participantAssociatedSceneIdentityTokens:(id)a0;
- (double)_angleFromScreenReferenceSpaceForSettings:(id)a0 displayIdentity:(id)a1;
- (id)initWithSceneHandle:(id)a0;
- (void)actuateZOrderLevelSettings;

@end
