@interface CKBusinessOnboardingController : OBWelcomeController

@property (copy, nonatomic) id /* block */ completionHandler;

+ (BOOL)shouldShowBusinessOnboarding;

- (void)viewDidLoad;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)continueButtonTapped:(id)a0;

@end
