@class GKRemoteUIController;

@interface GKRemoteUINavigationController : UINavigationController

@property (readonly, nonatomic) GKRemoteUIController *remoteUIController;

- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithRemoteUIController:(id)a0;

@end
