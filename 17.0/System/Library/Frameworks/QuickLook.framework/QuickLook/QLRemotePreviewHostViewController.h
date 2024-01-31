@class QLRemoteItemViewController, NSExtension;

@interface QLRemotePreviewHostViewController : _UIRemoteViewController

@property (weak) QLRemoteItemViewController *remoteItemViewController;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id request;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;

@end
