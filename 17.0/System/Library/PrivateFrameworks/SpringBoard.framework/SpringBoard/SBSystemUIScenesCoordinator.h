@class SBPerfPowerHUDSceneController, SBLiveTranscriptionUISceneController, SBEnsembleUISceneController, SBOverlayUISceneController, SBAssistiveTouchUISceneController, SBInputUISceneController, SBSystemUISceneDefaultPresenter, NSMutableArray, SBAccessibilityUIServerUISceneController, SBFullKeyboardAccessUISceneController, NSString, SBMomentsUISceneController, SBDruidUISceneController, SBEyedropperUISceneController, SBInternalPerfPowerHUDSceneController, SBVoiceControlUISceneController;

@interface SBSystemUIScenesCoordinator : NSObject <SBSystemUISceneBindingProviding, SBFSceneWorkspaceControlling> {
    SBSystemUISceneDefaultPresenter *_customBinderPresenter;
    SBSystemUISceneDefaultPresenter *_springboardMainBinderPresenter;
    NSMutableArray *_sceneControllers;
    NSMutableArray *_allKnownProcessIdentities;
}

@property (retain, nonatomic) SBAccessibilityUIServerUISceneController *accessibilityUIServerUISceneController;
@property (retain, nonatomic) SBAssistiveTouchUISceneController *assistiveTouchUISceneController;
@property (retain, nonatomic) SBDruidUISceneController *druidUISceneController;
@property (retain, nonatomic) SBEnsembleUISceneController *ensembleUISceneController;
@property (retain, nonatomic) SBEyedropperUISceneController *eyedropperUISceneController;
@property (retain, nonatomic) SBPerfPowerHUDSceneController *perfPowerHUDUISceneController;
@property (retain, nonatomic) SBInternalPerfPowerHUDSceneController *internalPerfPowerHUDUISceneController;
@property (retain, nonatomic) SBFullKeyboardAccessUISceneController *fullKeyboardAccessUISceneController;
@property (retain, nonatomic) SBInputUISceneController *inputUISceneController;
@property (retain, nonatomic) SBLiveTranscriptionUISceneController *liveTranscriptionUISceneController;
@property (retain, nonatomic) SBMomentsUISceneController *momentsUISceneController;
@property (retain, nonatomic) SBOverlayUISceneController *overlayUISceneController;
@property (retain, nonatomic) SBVoiceControlUISceneController *voiceControlUISceneController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sceneControllersConfigurations;
+ (id)_systemUISceneBundleIdentifiers;
+ (id)_configurationForSystemUISceneSessionRoles;
+ (BOOL)_isSystemUISceneBoundClientIdentity:(id)a0;
+ (id)_systemUISceneBoundProcessIdentities;
+ (id)_systemUISceneSessionRoles;
+ (BOOL)isSystemUISceneBundleIdentifier:(id)a0;
+ (BOOL)isSystemUISceneClient:(id)a0;
+ (BOOL)isSystemUISceneClientPID:(int)a0;

- (id)sceneFromIdentityTokenStringRepresentation:(id)a0;
- (id)init;
- (void)handleSceneRequestForProcessIdentity:(id)a0 handle:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (BOOL)isSystemUISceneSessionRole:(id)a0;
- (void)_createSceneWorkspaceControllerForProcessIdentity:(id)a0 jobLabel:(id)a1 sessionRole:(id)a2;
- (void)removeSystemUISceneFromPresentationBinder:(id)a0 forDisplayIdentity:(id)a1;
- (BOOL)shouldHandleRequestForProcessIdentity:(id)a0 withOptions:(id)a1;
- (void)activateSceneForProcessIdentity:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (BOOL)enumerateScenesWithBlock:(id /* block */)a0;
- (void)windowSceneDidDisconnect:(id)a0;
- (void).cxx_destruct;
- (void)addSystemUISceneToPresentationBinder:(id)a0 forDisplayIdentity:(id)a1;
- (void)destroyScenesWithPersistentIdentifiers:(id)a0 processIdentity:(id)a1 completion:(id /* block */)a2;
- (id)sceneWorkspaceControllerForProcessIdentity:(id)a0;
- (void)windowSceneDidConnect:(id)a0;
- (void)_createSystemUISceneControllerForConfiguration:(id)a0;
- (id)sceneFromIdentityToken:(id)a0;

@end
