@class AKAuthorizationViewController;

@interface AKAuthorizationFirstTimePaneViewController : AKAuthorizationPaneViewController

@property (weak, nonatomic) AKAuthorizationViewController *authorizationViewController;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_addContinueButtonToContext:(id)a0 title:(id)a1;
- (void)_addPrivacyLinkToContext:(id)a0;
- (void)_addTitleToContext:(id)a0;
- (void)_continueButtonSelected:(id)a0;
- (BOOL)shouldEmbedContentTrayIfNeeded;

@end
