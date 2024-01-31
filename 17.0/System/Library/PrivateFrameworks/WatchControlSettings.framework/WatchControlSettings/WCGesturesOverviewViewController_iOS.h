@protocol WCOnboardingObserver;

@interface WCGesturesOverviewViewController_iOS : OBWelcomeController

@property (weak, nonatomic) id<WCOnboardingObserver> onboardingObserver;

+ (id)createGesturesOverviewViewController;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)dismissOnboarding;
- (void)_tryItOutOnAppleWatch;

@end
