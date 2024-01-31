@class BSAnimationSettings;

@interface SBHLibraryFadeAnimator : NSObject <SBHViewControllerTransitionAnimating>

@property (readonly, nonatomic) BSAnimationSettings *animationSettings;
@property (nonatomic, getter=isAlreadyAnimating) BOOL alreadyAnimating;

- (id)init;
- (void).cxx_destruct;
- (void)_configureIndicatorViewsForEndpoint:(long long)a0 withContext:(id)a1;
- (void)_configurePrimaryViewsForEndpoint:(long long)a0 finalizing:(BOOL)a1 withContext:(id)a2;
- (void)animateToEndpoint:(long long)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)finalizeAnimationAtEndpoint:(long long)a0 withContext:(id)a1;
- (void)prepareToAnimateFromEndpoint:(long long)a0 withContext:(id)a1;

@end
