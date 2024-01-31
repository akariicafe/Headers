@class NSString, SKAccountPageViewController;

@interface SKRemoteAccountPageViewController : _UIRemoteViewController <SKUIClientAccountPageViewController>

@property (weak, nonatomic) SKAccountPageViewController *accountPageViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)disconnect;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)didFinishLoading;
- (void)didPrepareWithResult:(id)a0 error:(id)a1;
- (void)dismissBridgedViewController;
- (void)dismissViewControllerWithResult:(id)a0 error:(id)a1;
- (void)financeInterruptionResolved:(BOOL)a0;
- (void)overrideCreditCardPresentationWithCompletion:(id /* block */)a0;
- (void)overrideRedeemCameraPerformAction:(long long)a0 withObject:(id)a1;
- (void)overrideRedeemCameraWithCompletion:(id /* block */)a0;
- (void)popBridgedViewControllersToIndex:(unsigned long long)a0;
- (void)presentBridgedViewController;
- (void)pushBridgedViewControllerAnimated:(BOOL)a0 options:(id)a1;
- (void)setBridgedNavigationItemWithOptions:(id)a0;

@end
