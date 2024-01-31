@protocol MFMailComposeRemoteViewControllerDelegate;

@interface MFMailComposeRemoteViewController : _UIRemoteViewController <MFMailComposeRemoteHost>

@property (weak, nonatomic) id<MFMailComposeRemoteViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)bodyFinishedDrawing;
- (void)serviceCompositionFinishedWithResult:(long long)a0 error:(id)a1;
- (void)serviceCompositionRequestsSendWithBody:(id)a0 recipients:(id)a1 completion:(id /* block */)a2;

@end
