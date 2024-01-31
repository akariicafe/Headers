@class FPUIAuthenticationLandingViewController, NSURL;
@protocol FPUIAuthenticationDelegate;

@interface FPUIAuthenticationViewController : UIViewController

@property (weak) FPUIAuthenticationLandingViewController *landingViewController;
@property (weak, nonatomic) id<FPUIAuthenticationDelegate> authenticationDelegate;
@property (copy, nonatomic) NSURL *initialConnectionURL;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithServerURL:(id)a0;

@end
