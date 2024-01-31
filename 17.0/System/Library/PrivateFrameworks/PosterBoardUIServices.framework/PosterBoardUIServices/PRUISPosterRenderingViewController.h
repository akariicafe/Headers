@class UIView, NSString, PRSPosterConfiguration, FBScene, BSUIVibrancyEffectView, PRPosterTitleStyleConfiguration, NSMutableArray, PRUISPosterSnapshotController;
@protocol PRUISPosterRenderingContext, PRPosterExtensionProvider, PRUISPosterSnapshotCache, UIScenePresenter, PRUISPosterRenderingViewControllerDelegate;

@interface PRUISPosterRenderingViewController : UIViewController <FBSceneDelegate, FBSceneLayerManagerObserver> {
    id<PRPosterExtensionProvider> _extensionProvider;
    long long _activeOrientation;
    unsigned int _floatingContextID;
    id<UIScenePresenter> _floatingPresenter;
    id<UIScenePresenter> _scenePresenter;
    FBScene *_scene;
    FBScene *_floatingScene;
    UIView *_sceneView;
    UIView *_floatingSceneView;
    UIView *_behindFloatingContentView;
    BOOL _didLoadTitleStyleConfiguration;
    PRPosterTitleStyleConfiguration *_titleStyleConfiguration;
    BSUIVibrancyEffectView *_vibrancyEffectView;
    BOOL _contentHidden;
    BOOL _isSnapshotting;
    NSMutableArray *_enqueuedSnapshotRequests;
    id<PRUISPosterSnapshotCache> _snapshotCache;
    PRUISPosterSnapshotController *_snapshotController;
}

@property (weak, nonatomic) id<PRUISPosterRenderingViewControllerDelegate> delegate;
@property (readonly, nonatomic) PRSPosterConfiguration *configuration;
@property (readonly, nonatomic) id<PRUISPosterRenderingContext> context;
@property (readonly, nonatomic) UIView *obscurableContentView;
@property (nonatomic) unsigned long long renderingMode;
@property (nonatomic) BOOL showsContentWhenReady;
@property (nonatomic) BOOL forcesSceneForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (void)sceneDidActivate:(id)a0;
- (void)scene:(id)a0 willUpdateSettings:(id)a1 withTransitionContext:(id)a2;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)rotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)sceneContentStateDidChange:(id)a0;
- (void)_updateFloatingLayer;
- (id)initWithConfiguration:(id)a0 context:(id)a1;
- (void)registerPosterAppearanceObserver:(id)a0;
- (void)snapshotWithOptions:(unsigned long long)a0 forScreen:(id)a1 completionBlock:(id /* block */)a2;
- (void)_createVibrancyEffectViewIfNeeded;
- (void)_sceneContentReadinessDidChange;
- (BOOL)_shouldSceneBeForeground;
- (BOOL)isSceneContentReady;
- (void)setContentHidden:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setContentHidden:(BOOL)a0 animationSettings:(id)a1 completion:(id /* block */)a2;
- (void)_beginExecutingSnapshotsIfNeeded;
- (id)_cachedImageForRequest:(id)a0;
- (void)_createContentViewsIfNeeded;
- (void)_createPosterScene;
- (id)_levelSetForSnapshotOptions:(unsigned long long)a0;
- (void)_loadTitleStyleConfigurationIfNeeded;
- (void)_processNextSnapshot;
- (id)_snapshotRequestForOptions:(unsigned long long)a0 screen:(id)a1 levelSet:(id)a2;
- (void)_updateBackgroundScene;
- (void)_updateBackgroundSceneToSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 withAnimationSettings:(id)a2 fence:(id)a3;
- (void)_updateVibrancyConfiguration;
- (id)initWithArchivedConfigurationURL:(id)a0 context:(id)a1;
- (id)serverPath;
- (id)snapshotWithOptions:(long long)a0;

@end
