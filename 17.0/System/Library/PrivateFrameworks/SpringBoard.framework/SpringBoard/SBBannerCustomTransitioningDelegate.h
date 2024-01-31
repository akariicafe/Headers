@interface SBBannerCustomTransitioningDelegate : BNDefaultBannerTransitioningDelegate

@property (nonatomic) long long style;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForDismissedController:(id)a0 userInfo:(id)a1;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2 userInfo:(id)a3;
- (id)animatorForDismissalTransitionWithStyle:(long long)a0;
- (id)animatorForPresentationTransitionWithStyle:(long long)a0;

@end
