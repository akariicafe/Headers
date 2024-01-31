@protocol SLRemoteComposeViewControllerDelegateProtocol;

@interface SLRemoteComposeViewController : _UIRemoteViewController

@property (weak, nonatomic) id<SLRemoteComposeViewControllerDelegateProtocol> delegate;

- (BOOL)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;

@end
