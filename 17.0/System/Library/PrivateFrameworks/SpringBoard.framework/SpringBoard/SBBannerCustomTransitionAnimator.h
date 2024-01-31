@class NSString, SBBannerCustomTransitionAnimatorContext;

@interface SBBannerCustomTransitionAnimator : BNBannerTransitionAnimator <SBBannerCustomTransitionAnimating> {
    SBBannerCustomTransitionAnimatorContext *_customContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)animateInteractive:(BOOL)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)animateWithSettings:(id)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;

- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)animationEnded:(BOOL)a0;
- (void)actionsForTransition:(id)a0;
- (void)_updateCustomContextWithTransitionContext:(id)a0;

@end
