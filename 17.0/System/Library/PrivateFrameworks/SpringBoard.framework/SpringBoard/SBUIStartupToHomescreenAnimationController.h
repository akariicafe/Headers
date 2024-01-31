@class BKSDisplayRenderOverlay;

@interface SBUIStartupToHomescreenAnimationController : SBUIMainScreenAnimationController {
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

- (BOOL)_shouldDismissBanner;
- (id)initWithTransitionContextProvider:(id)a0;
- (void)_startAnimation;
- (id)animationSettings;
- (void)_prepareAnimation;
- (double)_animationDelay;
- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;

@end
