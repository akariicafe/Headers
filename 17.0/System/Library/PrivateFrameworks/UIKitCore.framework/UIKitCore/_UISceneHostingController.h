@class RBSProcessIdentity, _UIEventDeferringOwnershipToken, _UISheetPresentationControllerConfiguration, FBSSceneTransitionContext, FBScene, UIViewController, _UISceneHostingViewController, NSString, _UISceneHostingView, NSPointerArray, UIScene, NSMutableSet, _UISceneHostingSceneSpecification;
@protocol _UISceneHostingGeometryModificationProviding, _UISceneHostingControllerDelegate, _UISceneUIWindowHosting;

@interface _UISceneHostingController : NSObject <_UISceneHostingSettingsProviding, FBSceneDelegate, _UIRemoteSheet, BSInvalidatable> {
    UIScene<_UISceneUIWindowHosting> *_parentScene;
    struct { unsigned char _needsFencedUpdate : 1; unsigned char _enqueuedSceneUpdate : 1; unsigned char _clientIsReady : 1; unsigned char _parentSceneIsSnapshotting : 1; } _flags;
    FBSSceneTransitionContext *_enqueuedSceneUpdateTransitionContext;
    _UISceneHostingViewController *_sceneViewController;
    NSPointerArray *_settingsProviders;
    _UISceneHostingSceneSpecification *_requestedSceneSpecification;
    RBSProcessIdentity *_requestedProcessIdentity;
    NSMutableSet *_queuedActions;
    _UIEventDeferringOwnershipToken *_eventDeferringOwnershipToken;
}

@property (readonly, nonatomic) FBScene *_fbScene;
@property (readonly, nonatomic) id<_UISceneHostingGeometryModificationProviding> _geometryModificationProvider;
@property (readonly, nonatomic) _UISceneHostingView *sceneView;
@property (readonly, nonatomic) UIViewController *sceneViewController;
@property (weak, nonatomic) id<_UISceneHostingControllerDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } clientPreferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic, setter=_setSheetConfiguration:) _UISheetPresentationControllerConfiguration *_sheetConfiguration;
@property (nonatomic, setter=_setViewClipsToBounds:) BOOL _viewClipsToBounds;

- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)dealloc;
- (void)sceneDidActivate:(id)a0;
- (void)invalidate;
- (void)_applyOverridesToHostedSceneSettings:(id)a0;
- (void).cxx_destruct;
- (void)sceneContentStateDidChange:(id)a0;
- (void)_clientIsReady;
- (void)_updateSettingsWithFence:(id /* block */)a0;
- (void)activateScene;
- (void)addSettingsProvider:(id)a0;
- (void)addSettingsProvider:(id)a0 atIndexPath:(long long)a1;
- (void)configureEventDeferringRulesForHostedScene;
- (id)fencedTransitionContextUsingCurrentAnimationSettings:(BOOL)a0;
- (void)hostSceneSettingsDidUpdateWithTransitionContext:(id)a0;
- (void)hostingViewIsMovingToScene:(id)a0;
- (id)initWithProcessIdentity:(id)a0 sceneSpecification:(id)a1;
- (void)parentSceneWillBeginSnapshotting;
- (void)performBlock:(id /* block */)a0 withClientTransitionContext:(id)a1;
- (void)removeSettingsProvider:(id)a0;
- (void)sendAction:(id)a0;
- (void)setNeedsSettingsUpdateWithFence:(BOOL)a0;
- (BOOL)settingsUpdatesPaused;
- (BOOL)shouldFenceWithHostAnimationSettings;
- (void)tearDownEventDeferringRulesIfNecessary;
- (void)updateSceneSettingsIfNecessaryWithTransitionContext:(id)a0;

@end
