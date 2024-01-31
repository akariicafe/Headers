@protocol WCOnboardingObserver;

@interface WCOnboardingViewController_iOS : OBNavigationController

@property (weak, nonatomic) id<WCOnboardingObserver> onboardingObserver;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_cancelOnboarding;
- (void)_turnOn;
- (void)_tryItOut;

@end
