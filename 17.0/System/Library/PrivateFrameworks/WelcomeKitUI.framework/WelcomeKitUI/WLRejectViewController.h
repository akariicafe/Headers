@class WLWelcomeController;

@interface WLRejectViewController : WLOnboardingViewController {
    WLWelcomeController *_welcomeController;
}

@property (copy, nonatomic) id /* block */ retryBlock;

- (void)_retry;
- (void).cxx_destruct;
- (id)initWithWelcomeController:(id)a0;

@end
