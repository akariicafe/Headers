@class SBDeviceApplicationSceneHandle, SBUISizeObservingView, SBDeviceApplicationSceneView, UIView, NSString;
@protocol SBSwitcherLiveContentOverlayDelegate;

@interface SBFluidSwitcherPortaledSceneLiveContentOverlay : NSObject <SBUISizeObservingViewDelegate, SBFullScreenSwitcherSceneLiveContentOverlay, SBSceneViewPresentationConfiguring>

@property (readonly, nonatomic) SBUISizeObservingView *sizeObservingView;
@property (readonly, nonatomic) SBDeviceApplicationSceneView *sceneView;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (readonly, nonatomic) long long contentOrientation;
@property (readonly, nonatomic) long long containerOrientation;
@property (readonly, nonatomic) UIView *livePortalView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBSwitcherLiveContentOverlayDelegate> delegate;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance;
@property (readonly, nonatomic, getter=isAsyncRenderingEnabled) BOOL asyncRenderingEnabled;
@property (nonatomic) BOOL wantsEnhancedWindowingEnabled;
@property (nonatomic) BOOL resizesHostedContext;
@property (readonly, nonatomic) BOOL requiresLegacyRotationSupport;
@property (readonly, nonatomic) long long touchBehavior;
@property (nonatomic, getter=isDisplayLayoutElementActive) BOOL displayLayoutElementActive;

- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (long long)sceneViewPresentationPriority:(id)a0;
- (id)sceneViewPresentationIdentifier:(id)a0;
- (long long)trailingStatusBarStyle;
- (long long)preferredInterfaceOrientation;
- (long long)leadingStatusBarStyle;
- (void)setDimmed:(BOOL)a0;
- (double)currentStatusBarHeight;
- (id)backgroundActivitiesToSuppress;
- (id)contentViewController;
- (void)setAsyncRenderingEnabled:(BOOL)a0 withMinificationFilterEnabled:(BOOL)a1;
- (void)updateDisplayLayoutElementWithBuilder:(id /* block */)a0;
- (void)invalidate;
- (void)setTouchBehavior:(long long)a0;
- (void)setLiveContentBlurEnabled:(BOOL)a0 duration:(double)a1 blurDelay:(double)a2 iconViewScale:(double)a3 began:(id /* block */)a4 completion:(id /* block */)a5;
- (unsigned long long)supportedInterfaceOrientations;
- (id)prepareOverlayForContentRotation;
- (id)overlaySceneHandle;
- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)a0;
- (void).cxx_destruct;
- (long long)overlayType;
- (void)setStatusBarHidden:(BOOL)a0 nubViewHidden:(BOOL)a1 animator:(id /* block */)a2;
- (void)disableAsynchronousRenderingForNextCommit;
- (id)liveSceneIdentityToken;
- (void)setMatchMovedToScene:(BOOL)a0;
- (BOOL)isContentUpdating;
- (void)setBlurViewIconScale:(double)a0;
- (void)configureWithWorkspaceEntity:(id)a0 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentOrientation:(long long)a2 containerOrientation:(long long)a3 layoutRole:(long long)a4 sbsDisplayLayoutRole:(long long)a5 spaceConfiguration:(long long)a6 floatingConfiguration:(long long)a7 hasClassicAppOrientationMismatch:(BOOL)a8 sizingPolicy:(long long)a9;
- (void)sizeObservingView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithSceneHandle:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1 contentOrientation:(long long)a2 containerOrientation:(long long)a3 livePortalView:(id)a4 isInsetForHomeAffordance:(BOOL)a5;

@end
