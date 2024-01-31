@class SBApplicationSceneEntity;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction {
    SBApplicationSceneEntity *_fromAppSceneEntity;
    BOOL _workspaceAlreadyResumed;
    BOOL _animatedAppDeactivation;
}

- (void)_didComplete;
- (id)_setupAnimation;
- (void)_animationDidFinish;
- (id)initWithTransitionRequest:(id)a0 toLockScreenEnvironment:(id)a1;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)_animationWillBegin:(BOOL)a0;

@end
