@class NSString, SKStoreProductViewController;

@interface SKRemoteProductViewController : _UIRemoteViewController <SKUIClientProductPageViewController>

@property (weak, nonatomic) SKStoreProductViewController *productViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)setStatusBarHidden:(id)a0 withAnimation:(id)a1;
- (void)setStatusBarStyle:(id)a0 animated:(id)a1;
- (void)didFinish;
- (void)didFinishDismissal;
- (void)didFinishWithResult:(id)a0;
- (void)didReceiveTitle:(id)a0;
- (void)loadDidFinishWithResult:(id)a0 error:(id)a1;
- (void)presentPageWithRequest:(id)a0 animated:(id)a1;
- (void)promptForStarRating;

@end
