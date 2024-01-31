@interface GameCenterUI.AuthenticationWithOnboardingViewController : UINavigationController <GKOnboardingFlowDelegate> {
    void /* unknown type, empty encoding */ subject;
}

- (void)onboardingFlowFinishedWithAction:(unsigned long long)a0;
- (id)initWithRootViewController:(id)a0;
- (id)init;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
