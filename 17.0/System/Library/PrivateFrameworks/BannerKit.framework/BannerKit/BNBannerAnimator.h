@class NSString, BSAnimationSettings, NSMapTable;

@interface BNBannerAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    BSAnimationSettings *_animationSettings;
    NSMapTable *_transitionContextsToTransitionCount;
}

@property (readonly, nonatomic, getter=isRetargetable) BOOL retargetable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_animateInteractive:(BOOL)a0 settings:(id)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)animateInteractive:(BOOL)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)animateWithSettings:(id)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
+ (id)defaultResizeAnimationSettings;

- (id)init;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)initWithAnimationSettings:(id)a0;
- (BOOL)_popTransitionForContext:(id)a0;
- (void)_pushTransitionForContext:(id)a0;
- (void)actionsForTransition:(id)a0;
- (void)retargetTransition:(id)a0;

@end
