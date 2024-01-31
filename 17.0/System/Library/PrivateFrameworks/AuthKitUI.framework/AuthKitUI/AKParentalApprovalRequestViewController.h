@class AKAuthorizationViewController, AKAuthorizationSubPaneInfoLabel, AKAuthorizationPresentationContext;

@interface AKParentalApprovalRequestViewController : AKAuthorizationPaneViewController {
    AKAuthorizationSubPaneInfoLabel *_messageLabel;
    AKAuthorizationPresentationContext *_presentationContext;
    BOOL _requestStatusPending;
}

@property (weak, nonatomic) AKAuthorizationViewController *authorizationViewController;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithPresentationContext:(id)a0;
- (id)_userResponse;
- (id)_localizedTitleString;
- (void)_setupTitleLabel;
- (void)_setupIconView;
- (void)_addSendButtonToContext:(id)a0;
- (void)_createIconViewWithIcon:(id)a0;
- (void)_handleAuthorizationError:(id)a0;
- (id)_localizedButtonTitleString;
- (id)_localizedDescriptionLabelString;
- (void)_paneDelegate_authorizationPaneViewControllerDismissWithAuthorization:(id)a0 error:(id)a1;
- (void)_paneDelegate_didRequestAuthorizationWithUserProvidedInformation:(id)a0 completion:(id /* block */)a1;
- (void)_sendButtonSelected:(id)a0;
- (void)_setupMessageLabel;

@end
