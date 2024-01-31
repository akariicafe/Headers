@protocol HMUserManagementRemoteHost;

@interface HMUserListRemoteViewController : _UIRemoteViewController <HMUserManagementRemoteHost>

@property (weak, nonatomic) id<HMUserManagementRemoteHost> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)userManagementDidFinishWithError:(id)a0;
- (void)userManagementDidLoad;

@end
