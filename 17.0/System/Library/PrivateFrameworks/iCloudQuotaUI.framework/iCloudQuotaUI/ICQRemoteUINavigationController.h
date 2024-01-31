@interface ICQRemoteUINavigationController : UINavigationController

@property (nonatomic) BOOL shouldSignalDelegateOnDismiss;
@property (nonatomic) BOOL didCompletePurchaseFlowWithSuccess;

- (id)initWithRootViewController:(id)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidDisappear:(BOOL)a0;

@end
