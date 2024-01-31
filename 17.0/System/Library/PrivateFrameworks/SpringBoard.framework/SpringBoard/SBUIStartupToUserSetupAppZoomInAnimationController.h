@class NSString, SBSceneView, BKSDisplayRenderOverlay, BSUIOrientationTransformWrapperView;

@interface SBUIStartupToUserSetupAppZoomInAnimationController : SBUIMainScreenAnimationController <SBSceneViewPresentationConfiguring> {
    BSUIOrientationTransformWrapperView *_orientationWrapperView;
    SBSceneView *_sceneView;
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldDismissBanner;
- (id)initWithTransitionContextProvider:(id)a0;
- (long long)sceneViewPresentationPriority:(id)a0;
- (void)_startAnimation;
- (id)sceneViewPresentationIdentifier:(id)a0;
- (id)animationSettings;
- (BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
- (void)_prepareAnimation;
- (id)_getTransitionWindow;
- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (void)_setHidden:(BOOL)a0;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;

@end
