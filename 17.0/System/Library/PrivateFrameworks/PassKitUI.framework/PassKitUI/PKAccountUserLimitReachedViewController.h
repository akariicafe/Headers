@class PKAccount, NSNumberFormatter;

@interface PKAccountUserLimitReachedViewController : PKExplanationViewController {
    PKAccount *_account;
    NSNumberFormatter *_maximumAccountUsersFormatter;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)explanationViewDidSelectBodyButton:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithAccount:(id)a0 context:(long long)a1;

@end
