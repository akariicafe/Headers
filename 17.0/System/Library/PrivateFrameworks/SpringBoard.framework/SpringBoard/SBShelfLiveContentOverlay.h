@class NSString, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneView, UIView, SBUISizeObservingView;
@protocol SBSwitcherLiveContentOverlayDelegate;

@interface SBShelfLiveContentOverlay : NSObject <SBSwitcherLiveContentOverlay, SBSceneViewPresentationConfiguring, SBUISizeObservingViewDelegate> {
    SBDeviceApplicationSceneView *_sceneView;
    SBUISizeObservingView *_sizeObservingView;
}

@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic, getter=isPendingSwitcherSnapshotCacheUpdate) BOOL pendingSwitcherSnapshotCacheUpdate;
@property (weak, nonatomic) id<SBSwitcherLiveContentOverlayDelegate> delegate;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance;
@property (readonly, nonatomic, getter=isAsyncRenderingEnabled) BOOL asyncRenderingEnabled;
@property (nonatomic) BOOL wantsEnhancedWindowingEnabled;
@property (nonatomic) BOOL resizesHostedContext;
@property (readonly, nonatomic) BOOL requiresLegacyRotationSupport;
@property (readonly, nonatomic) long long touchBehavior;
@property (nonatomic, getter=isDisplayLayoutElementActive) BOOL displayLayoutElementActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (long long)sceneViewPresentationPriority:(id)a0;
- (id)sceneViewPresentationIdentifier:(id)a0;
- (long long)trailingStatusBarStyle;
- (long long)preferredInterfaceOrientation;
- (long long)leadingStatusBarStyle;
- (void)setDimmed:(BOOL)a0;
- (double)currentStatusBarHeight;
- (id)backgroundActivitiesToSuppress;
- (void)setAsyncRenderingEnabled:(BOOL)a0 withMinificationFilterEnabled:(BOOL)a1;
- (void)updateDisplayLayoutElementWithBuilder:(id /* block */)a0;
- (void)setTouchBehavior:(long long)a0;
- (void)setLiveContentBlurEnabled:(BOOL)a0 duration:(double)a1 blurDelay:(double)a2 iconViewScale:(double)a3 began:(id /* block */)a4 completion:(id /* block */)a5;
- (unsigned long long)supportedInterfaceOrientations;
- (id)prepareOverlayForContentRotation;
- (id)overlaySceneHandle;
- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)a0;
- (void).cxx_destruct;
- (void)setStatusBarHidden:(BOOL)a0 nubViewHidden:(BOOL)a1 animator:(id /* block */)a2;
- (void)disableAsynchronousRenderingForNextCommit;
- (id)liveSceneIdentityToken;
- (void)setMatchMovedToScene:(BOOL)a0;
- (BOOL)isContentUpdating;
- (void)setBlurViewIconScale:(double)a0;
- (void)sizeObservingView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (void)_updateSceneViewInSideSizeObservingViewIfNecessary;
- (id)initWithSceneHandle:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1 contentOrientation:(long long)a2 containerOrientation:(long long)a3 livePortalView:(id)a4 isInsetForHomeAffordance:(BOOL)a5;

@end
