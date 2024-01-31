@class SBDeviceApplicationSceneStatusBarBreadcrumbProvider, NSString, SBDeviceApplicationSceneHandle, NSSet, _UIStatusBarData, FBScene, NSMutableArray, SBAppClipOverlayViewController, NSMutableSet;
@protocol SBApplicationSceneStatusBarDescribing, SBDeviceApplicationSceneStatusBarStateObserver;

@interface SBAppClipPlaceholderLayoutElementViewController : SBLayoutElementViewController <SBSceneViewStatusBarAssertionObserver, SBApplicationSceneStatusBarDescriberProviding, SBApplicationSceneStatusBarDescribing, SBSceneLayoutMedusaStatusBarAssertionProviding, SBMainDisplaySceneLayoutElementViewControlling> {
    NSString *_bundleIdentifier;
    NSString *_sceneIdentifier;
    SBAppClipOverlayViewController *_placeholderViewController;
    BOOL _isPendingUpdate;
    BOOL _isObservingApplicationInstalls;
    NSMutableArray *_statusBarAssertions;
    NSMutableSet *_maskDisplayCornersReasons;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<SBApplicationSceneStatusBarDescribing> statusBarDescriber;
@property (weak, nonatomic) id<SBDeviceApplicationSceneStatusBarStateObserver> statusBarDelegate;
@property (readonly, nonatomic) long long statusBarStyle;
@property (readonly, nonatomic) long long defaultStatusBarStyle;
@property (readonly, nonatomic) BOOL statusBarHidden;
@property (readonly, nonatomic) double statusBarAlpha;
@property (readonly, nonatomic) long long statusBarOrientation;
@property (readonly, nonatomic) NSSet *backgroundActivitiesToSuppress;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } statusBarAvoidanceFrame;
@property (readonly, nonatomic) BOOL sceneWantsDeviceOrientationEventsEnabled;
@property (readonly, nonatomic) NSString *statusBarSceneIdentifier;
@property (readonly, nonatomic) _UIStatusBarData *overlayStatusBarData;
@property (readonly, nonatomic) SBDeviceApplicationSceneStatusBarBreadcrumbProvider *breadcrumbProvider;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *classicApplicationSceneHandleIfExists;
@property (readonly, nonatomic) FBScene *sceneToHandleStatusBarTapIfExists;

- (void)_cleanup;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)SB_conformsToSBApplicationSceneStatusBarDescribing;
- (long long)statusBarStyleForPartWithIdentifier:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)prepareForReuse;
- (id)statusBarAssertionWithStatusBarHidden:(BOOL)a0 atLevel:(unsigned long long)a1;
- (void)setCornerRadiusConfiguration:(id)a0;
- (void)viewDidLoad;
- (void)setShadowOpacity:(double)a0;
- (void)invalidate;
- (void)setShadowOffset:(double)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)statusBarAssertionDidUpdate:(id)a0;
- (void)_installedApplicationsDidChange:(id)a0;
- (void).cxx_destruct;
- (void)statusBarAssertionDidInvalidate:(id)a0;
- (BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
- (BOOL)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
- (BOOL)SB_conformsToSBApplicationSceneStatusBarDescriberProviding;
- (BOOL)SB_conformsToSceneLayoutMedusaStatusBarAssertionProviding;
- (id)_aggregateStatusBarOverrideSettings;
- (void)_beginObservingApplicationInstalls;
- (void)_beginPollingUpdateStillAvailable;
- (void)_launchApplication:(id)a0;
- (id)_newDisplayLayoutElementForEntity:(id)a0;
- (void)_statusBarAssertionDidUpdate;
- (void)_stopObservingApplicationInstalls;
- (void)configureWithWorkspaceEntity:(id)a0 forLayoutElement:(id)a1 layoutState:(id)a2 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)setMaskDisplayCorners:(BOOL)a0 forReason:(id)a1;
- (id)statusBarAssertionWithStatusBarHidden:(BOOL)a0 nubViewHidden:(long long)a1 atLevel:(unsigned long long)a2;
- (unsigned long long)supportedContentInterfaceOrientations;

@end
