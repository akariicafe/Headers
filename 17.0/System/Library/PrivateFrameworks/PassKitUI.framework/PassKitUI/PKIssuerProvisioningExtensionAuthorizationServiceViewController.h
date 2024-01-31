@interface PKIssuerProvisioningExtensionAuthorizationServiceViewController : UIViewController {
    BOOL _finished;
}

+ (id)_remoteViewControllerInterface;

- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)beginRequestWithExtensionContext:(id)a0;

@end
