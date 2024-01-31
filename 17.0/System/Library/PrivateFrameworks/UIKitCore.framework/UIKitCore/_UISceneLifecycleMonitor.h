@class UIScene;

@interface _UISceneLifecycleMonitor : NSObject

@property (weak, nonatomic) UIScene *_scene;
@property (readonly, nonatomic) long long currentActivationState;

- (void)didBecomeActive;
- (void)willResignActive;
- (void)didConnect;
- (id)initWithScene:(id)a0;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)willConnect;
- (void)willDisonnect;
- (void)willBecomeActive;
- (void).cxx_destruct;
- (void)willEnterBackground;
- (void)didEnterForeground;
- (void)transitionToTargetState:(id)a0 fromState:(id)a1 withTransitionContext:(id)a2 preparations:(id /* block */)a3;
- (void)didResignActive;
- (void)didDisonnect;

@end
