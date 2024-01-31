@class BSUIOrientationTransformWrapperView, NSString, SBDeviceApplicationSceneView, UIView, BSAnimationSettings;

@interface SBUIStartupFromBlackAnimationController : SBUIMainScreenAnimationController <SBSceneViewPresentationConfiguring> {
    UIView *_internalContainerView;
    UIView *_blackView;
    BSUIOrientationTransformWrapperView *_orientationWrapperView;
    SBDeviceApplicationSceneView *_sceneView;
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
- (id)_getTransitionWindow;
- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (void)_setHidden:(BOOL)a0;
- (void)_showBlackView;

@end
