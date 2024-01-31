@class BSAnimationSettings;

@interface SBUIBlockAnimationController : SBUIWorkspaceAnimationController {
    BSAnimationSettings *_animationSettings;
    id /* block */ _animationBlock;
}

- (void)_didComplete;
- (void)_startAnimation;
- (id)initWithWorkspaceTransitionRequest:(id)a0;
- (id)animationSettings;
- (id)initWithWorkspaceTransitionRequest:(id)a0 animationSettings:(id)a1 animationBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
