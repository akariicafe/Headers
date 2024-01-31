@class RPBroadcastActivityViewController;

@interface RPBroadcastActivityHostViewController : _UIRemoteViewController <RPBroadcastActivityCommunicationHostProtocol>

@property (weak, nonatomic) RPBroadcastActivityViewController *broadcastActivityViewController;

- (unsigned long long)popoverArrowDirection;
- (void)viewDidLoad;
- (long long)modalPresentationStyle;
- (void).cxx_destruct;
- (oneway void)presentationInfoWithCompletion:(id /* block */)a0;
- (oneway void)extensionDidFinishWithLaunchURL:(id)a0 broadcastURL:(id)a1 extensionBundleID:(id)a2 cancelled:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })popoverControllerSourceRect;

@end
