@class NSNumber;

@interface _UIWindowSceneFBSSceneLifecycleMonitor : _UISceneLifecycleMonitor {
    NSNumber *_transitioningState;
    BOOL _transitioning;
    BOOL _connected;
}

- (id)_windowScene;
- (id)initWithScene:(id)a0;
- (void)didEnterBackground;
- (void)willBecomeActive;
- (void).cxx_destruct;
- (void)transitionToTargetState:(id)a0 fromState:(id)a1 withTransitionContext:(id)a2 preparations:(id /* block */)a3;
- (long long)currentActivationState;

@end
