@class WLWelcomeController;

@interface WLCancellationViewController : WLOnboardingViewController {
    WLWelcomeController *_welcomeController;
}

@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ retryBlock;

- (void)_retry;
- (void).cxx_destruct;
- (void)_continue;
- (id)initWithWelcomeController:(id)a0;

@end
