@class NSString, FBSDisplayConfiguration, FBScene, RBSProcessIdentity, UISceneRequestOptions, SBFSceneWorkspaceController, SBSceneSettingsUpdater, SBTraitsOrientedContentViewController, SBTraitsSceneParticipantDelegate, SBUIKitResizableSceneHostComponent, SBTraitsOrientedResizableContentViewController;
@protocol UIScenePresenter, SBScenePresenting, BSInvalidatable;

@interface SBSingleSceneController : NSObject <FBSceneObserver, SBSceneSettingsUpdaterObserver, SBSceneViewControllerBuilding, BSInvalidatable, BSDescriptionProviding> {
    RBSProcessIdentity *_clientIdentity;
    id<BSInvalidatable> _settingsUpdaterObserverInvalidatable;
    SBSceneSettingsUpdater *_sceneSettingsUpdater;
    id<UIScenePresenter> _uiScenePresenter;
    SBTraitsSceneParticipantDelegate *_lastSceneTraitsParticipantDelegate;
    SBTraitsOrientedContentViewController *_orientedSceneViewController;
    SBTraitsOrientedResizableContentViewController *_resizableOrientedSceneViewController;
}

@property (nonatomic) BOOL visible;
@property (retain, nonatomic) SBUIKitResizableSceneHostComponent *hostComponent;
@property (nonatomic) BOOL shouldForegroundForDisplayConfiguration;
@property (nonatomic) BOOL shouldActivateForDisplayConfiguration;
@property (nonatomic) BOOL shouldActivateUponClientConnection;
@property (nonatomic) BOOL shouldBeKeptActiveWhileForeground;
@property (nonatomic) BOOL shouldPresentAnyContentState;
@property (nonatomic) unsigned long long initialSupportedInterfaceOrientations;
@property (nonatomic, getter=isSceneActive) BOOL sceneActive;
@property (nonatomic, getter=isSceneContentVisible) BOOL sceneContentVisible;
@property (retain, nonatomic) FBSDisplayConfiguration *targetDisplayConfiguration;
@property (readonly, nonatomic) SBFSceneWorkspaceController *sceneWorkspaceController;
@property (readonly, nonatomic) UISceneRequestOptions *sceneOptions;
@property (readonly, nonatomic) NSString *scenePersistentIdentifier;
@property (readonly, nonatomic) NSString *traitsRole;
@property (readonly, nonatomic) FBScene *scene;
@property (weak, nonatomic) id<SBScenePresenting> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scene:(id)a0 didCompleteUpdateWithContext:(id)a1 error:(id)a2;
- (void)_evaluateSceneForegroundState;
- (void)sceneDidInvalidate:(id)a0;
- (void)dealloc;
- (void)didUpdateSceneTraitsDelegate:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_presentScene;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_evaluateSceneActivationState;
- (BOOL)_isClientProcessRunning;
- (id)initWithSceneWorkspaceController:(id)a0 sceneRequestOptions:(id)a1 clientIdentity:(id)a2 traitsRole:(id)a3 level:(double)a4;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)traitsOrientedViewController;
- (void).cxx_destruct;
- (id)traitsOrientedResizableViewController;
- (id)succinctDescription;
- (void)_dismissScene;
- (void)_evaluateVisibility;
- (void)sceneContentStateDidChange:(id)a0;
- (id)_newActivationContext;

@end
