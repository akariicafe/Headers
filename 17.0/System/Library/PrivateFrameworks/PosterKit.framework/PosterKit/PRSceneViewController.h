@class UIScene, NSString, UIView, PRPosterConfigurableOptions, PRSServerPosterIdentity, FBScene, PRPosterRenderingConfiguration, PRPosterComplicationLayout, PRPosterConfiguredProperties;
@protocol UIScenePresenter, BSInvalidatable;

@interface PRSceneViewController : UIViewController <FBSceneDelegate, _UISceneSettingsDiffAction, BSInvalidatable> {
    UIScene *_uiParentScene;
    UIView *_touchBlockingView;
    BOOL _invalidated;
    id<BSInvalidatable> _keyboardFocusDeferringRule;
    FBScene *_scene;
}

@property (class, readonly, nonatomic) NSString *role;

@property (readonly, nonatomic) id<UIScenePresenter> scenePresenter;
@property (readonly, nonatomic) PRPosterConfigurableOptions *configurableOptions;
@property (readonly, nonatomic) PRPosterConfiguredProperties *configuredProperties;
@property (readonly, nonatomic) BOOL scenePresenterIsValid;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sceneSize;
@property (readonly, copy, nonatomic) PRPosterRenderingConfiguration *renderingConfiguration;
@property (readonly, copy, nonatomic) PRPosterComplicationLayout *complicationLayout;
@property (readonly, nonatomic) PRSServerPosterIdentity *contentsIdentity;
@property (nonatomic, getter=isSceneUserInteractionEnabled) BOOL sceneUserInteractionEnabled;
@property (nonatomic, getter=isSceneAvailable) BOOL sceneAvailable;
@property (readonly, nonatomic, getter=isSceneContentReady) BOOL sceneContentReady;
@property (nonatomic) BOOL forcesSceneForeground;
@property (retain, nonatomic) id userInfo;
@property (readonly, nonatomic) unsigned long long significantEventsCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_update;
- (void)scene:(id)a0 clientDidConnect:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (void)sceneDidActivate:(id)a0;
- (id)scene;
- (void)viewDidLoad;
- (void)invalidate;
- (id)scene:(id)a0 handleActions:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)sceneContentStateDidChange:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_teardown;
- (void)_configureInitialSceneSettings:(id)a0;
- (void)_sceneContentReadinessDidChange;
- (void)_acquireKeyboardFocusDeferringRuleIfNecessary;
- (id)_acquireLocalKeyboardFocusAssertion;
- (void)_addScenePresentationView:(id)a0;
- (void)_adjustParentScene;
- (void)_configureInitialSceneClientSettings:(id)a0;
- (void)_configureUsingPath:(id)a0;
- (void)_failWithFatalError:(id)a0;
- (id)_initWithProvider:(id)a0 contents:(id)a1 configurableOptions:(id)a2 configuredProperties:(id)a3 previewing:(BOOL)a4;
- (id)_initWithProvider:(id)a0 contents:(id)a1 previewing:(BOOL)a2;
- (id)_presentationBackgroundColor;
- (BOOL)_shouldSceneBeForeground;
- (void)_updatePresentationBackgroundColor;
- (void)_updateSceneSettings:(id)a0 transitionContext:(id)a1;
- (void)_updateSceneToSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 withAnimationSettings:(id)a2 fence:(id)a3;
- (id)configurableOptions;
- (id)initWithProvider:(id)a0 contents:(id)a1;
- (id)initWithProvider:(id)a0 contents:(id)a1 configurableOptions:(id)a2;
- (id)initWithProvider:(id)a0 contents:(id)a1 configurableOptions:(id)a2 configuredProperties:(id)a3;
- (id)initWithProvider:(id)a0 contents:(id)a1 configurableOptions:(id)a2 configuredProperties:(id)a3 additionalInfo:(id)a4;
- (id)initWithProvider:(id)a0 contents:(id)a1 configuredProperties:(id)a2;

@end
