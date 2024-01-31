@class NSString, FBScene, FBSSceneIdentityToken, UIWindow, SBSystemUISceneDefaultPresenter, UIKBArbiterClientFocusContext, SBTraitsPipelineManager, SBSingleSceneController;
@protocol SBScenePresenting, BSInvalidatable;

@interface SBInputUISceneController : SBSystemUISceneController <_UIKeyboardArbiterSceneDelegate> {
    SBSystemUISceneDefaultPresenter *_defaultPresenter;
    SBSingleSceneController *_sceneController;
    FBScene *_inputUIScene;
    FBScene *_targetScene;
    FBSSceneIdentityToken *_lastExternallyPresentedSceneToken;
    UIKBArbiterClientFocusContext *_focusContext;
    SBTraitsPipelineManager *_currentTraitsPipelineManager;
    id<SBScenePresenting> _currentExternalPresenter;
    unsigned long long _focusChangeCounter;
    BOOL _isKeyboardShowing;
    id<BSInvalidatable> _hostingGraphObservationInvalidatable;
}

@property (readonly, nonatomic, getter=isVisibleForSpringBoard) BOOL visibleForSpringBoard;
@property (readonly, nonatomic) UIWindow *hostingWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_setupInfo;
+ (BOOL)_shouldControlInputUIScene;

- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)windowSceneDidDisconnect:(id)a0;
- (void).cxx_destruct;
- (void)windowSceneDidConnect:(id)a0;
- (void)terminateWithReason:(id)a0;
- (id)_ancestorPathForTargetEnvironment:(id)a0 withinEndowmentTree:(id)a1 root:(id)a2 visitedLinks:(id)a3;
- (void)_createInputUIScene;
- (id)_currentDisplayConfiguration;
- (id)_currentTraitsPipelineManager;
- (void)_evaluateAvailablePresenters:(id)a0 forSceneControllers:(id)a1;
- (id)_rootSceneForEndowmentGraphWithNamespace:(id)a0 hostingSceneToken:(id)a1;
- (void)_setupDefaultPresentationForTargetHostingGraph:(id)a0 targetScene:(id)a1;
- (id)_targetSceneForFocusedSceneTokenString:(id)a0;
- (id)_targetSceneForKeyboardFocusContext:(id)a0;
- (void)_updateDefaultPresenterForTargetScene:(id)a0 contextID:(unsigned int)a1;
- (void)_userSwipedToKillFromSwitcher:(id)a0;
- (void)focusContextDidChange:(id)a0;
- (id)initWithSceneWorkspaceIdentifier:(id)a0 clientProcessIdentity:(id)a1 sceneVendingPolicy:(long long)a2 traitsRole:(id)a3 jobLabel:(id)a4 level:(double)a5;

@end
