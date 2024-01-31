@class BSUIOrientationTransformWrapperView, NSString, SBSceneView, BKSDisplayRenderOverlay, BSAnimationSettings;

@interface SBUIStartupFromOverlayAnimationController : SBUIMainScreenAnimationController <SBSceneViewPresentationConfiguring> {
    BKSDisplayRenderOverlay *_overlay;
    BSUIOrientationTransformWrapperView *_orientationWrapperView;
    SBSceneView *_sceneView;
}

@property (retain, nonatomic) BSAnimationSettings *animationSettings;
@property (nonatomic) BOOL waitsForAppActivation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldDismissBanner;
- (id)initWithTransitionContextProvider:(id)a0;
- (long long)sceneViewPresentationPriority:(id)a0;
- (void)_startAnimation;
- (id)sceneViewPresentationIdentifier:(id)a0;
- (BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
- (void)_prepareAnimation;
- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;

@end
