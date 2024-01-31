@interface HomeUI.DashboardAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ blurView;
    void /* unknown type, empty encoding */ targetCollectionViewFrame;
    void /* unknown type, empty encoding */ targetCollectionViewLayout;
    void /* unknown type, empty encoding */ targetContentInset;
    void /* unknown type, empty encoding */ targetNavigationBarAppearance;
}

- (id)init;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
