@interface SBSystemApertureFluidAnimator : SBSystemApertureAnimator

+ (id)currentAnimationParameters;

- (id)init;
- (double)transitionDuration:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)_fluidBehaviorSettings;
- (void)_animateTransition:(id)a0 actions:(id /* block */)a1 completion:(id /* block */)a2;
- (void)animateWithMode:(long long)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;

@end
