@class UIViewFloatAnimatableProperty;

@interface SBBannerPoofTransitionAnimator : SBBannerCustomTransitionAnimator

@property (retain, nonatomic) UIViewFloatAnimatableProperty *blurProgressProperty;

+ (id)settings;
+ (void)performAnimationsForTransition:(id /* block */)a0 completion:(id /* block */)a1;

- (id)settings;
- (void).cxx_destruct;
- (void)_addGaussianBlurToViewIfNeeded:(id)a0 inputRadius:(double)a1;
- (void)_removeBlurFilterFromView:(id)a0;
- (BOOL)_viewHasGaussianBlurFilter:(id)a0;
- (void)performActionsForTransition:(id)a0;
- (void)prepareForTransition:(id)a0;

@end
