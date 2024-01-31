@class AMAmbientDefaults, NSString, AMUIOnboardingView, UIView, MTMaterialView;
@protocol AMUIOnboardingContainerViewDelegate;

@interface AMUIOnboardingContainerView : UIView <AMUIOnboardingViewDelegate> {
    MTMaterialView *_overlayBlurMaterialView;
    AMUIOnboardingView *_onboardingView;
    UIView *_animationContainerView;
}

@property (weak, nonatomic) id<AMUIOnboardingContainerViewDelegate> delegate;
@property (weak, nonatomic) AMAmbientDefaults *ambientDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)performDismissalAnimation;
- (void)performPresentationAnimation;
- (void)_configureAnimationContainerViewIfNecessary;
- (void)_configureOnboardingViewIfNecessary;
- (void)_configureOverlayBlurMaterialViewIfNecessaryWithInitialWeighting:(double)a0;
- (void)_layoutOnboardingView;
- (id)_newBlurMaterialViewWithInitialWeighting:(double)a0 superview:(id)a1;
- (void)_performDismissalAnimationWithCompletion:(id /* block */)a0;
- (void)_performPresentationAnimationWithCompletion:(id /* block */)a0;
- (void)onboardingViewRequestsDismissal:(id)a0;

@end
